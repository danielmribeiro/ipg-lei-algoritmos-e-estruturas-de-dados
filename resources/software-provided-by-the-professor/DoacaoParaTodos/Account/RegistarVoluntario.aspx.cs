using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.WebControls;
using Microsoft.AspNet.Membership.OpenAuth;
using System.Data.SqlClient;
using System.Configuration;


public partial class Account_RegistarVoluntario : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void CreateUserWizard1_CreatedUser(object sender, EventArgs e)
    {
        FormsAuthentication.SetAuthCookie(CreateUserWizard1.UserName, createPersistentCookie: false);

        SqlConnection connection = null;

        try
        {

            connection = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionString"].ConnectionString);
            connection.Open();

            SqlCommand insert = new SqlCommand("INSERT INTO Voluntario(nome, morada, telefone, email, username_l) VALUES (@nome, @morada, @telefone, @email, @username_l)", connection);
            insert.Parameters.AddWithValue("nome", nome);
            insert.Parameters.AddWithValue("morada", morada);
            insert.Parameters.AddWithValue("telefone", telefone);
            insert.Parameters.AddWithValue("email", Membership.GetUser(CreateUserWizard1.UserName).Email);
            insert.Parameters.AddWithValue("username_l", CreateUserWizard1.UserName);

           insert.ExecuteNonQuery();

        }
        finally
        {
            if (connection != null) connection.Close();

        }
        //Roles.AddUserToRole(CreateUserWizard1.UserName, "Voluntario");

        // *** End create customer ****

        Response.Redirect(CreateUserWizard1.ContinueDestinationPageUrl);
    }

    private TextBox TextBoxNome = null;
    private TextBox TextBoxMorada = null;
    private TextBox TextBoxTelefone = null;



    private string nome = null;
    private string morada = null;
    private string telefone = null;



    protected void CreateUserWizard1_CreatingUser(object sender, LoginCancelEventArgs e)
    {
        // Verificar se o username ja está registado na bd (se nao tiver faz o registo, mas se ja existir nao regista e avisa)
        MembershipUser userInfo = Membership.GetUser(CreateUserWizard1.UserName);

        if (userInfo == null)
        {

            nome = TextBoxNome.Text;
            morada = TextBoxMorada.Text;
            telefone = TextBoxTelefone.Text;

        }
        else
        {
            Label lbl = new Label();
            String msg = "Nome de Utilizador já registado!";
            lbl.Text = "<script language='javascript'>" + Environment.NewLine + "window.alert('" + msg + "')</script>";
            Page.Controls.Add(lbl);
            e.Cancel = true;
        }
    }

    protected void TextBoxNome_Load(object sender, EventArgs e)
    {
        TextBoxNome = (TextBox)sender;
    }
    protected void TextBoxTelefone_Load(object sender, EventArgs e)
    {
        TextBoxTelefone = (TextBox)sender;
    }
    protected void TextBoxMorada_Load(object sender, EventArgs e)
    {
        TextBoxMorada = (TextBox)sender;
    }
}