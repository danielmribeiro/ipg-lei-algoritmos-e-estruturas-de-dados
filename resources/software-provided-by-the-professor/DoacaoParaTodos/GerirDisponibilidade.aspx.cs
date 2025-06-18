using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class GerirDisponibilidade : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            SqlDataSourceGridView.SelectParameters["username_l"].DefaultValue = User.Identity.Name;
        }   
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        PanelGridview.Visible = false;
        FormViewGerirDisponibilidade.Visible = true;
        FormViewGerirDisponibilidade.ChangeMode(FormViewMode.Insert);
    }
    protected void GridViewDisponibilidade_SelectedIndexChanged(object sender, EventArgs e)
    {
        if (GridViewDisponibilidade.SelectedIndex >= 0)
        {
            ButtonEditar.Enabled = true;
            ButtonRemover.Enabled = true;
            FormViewGerirDisponibilidade.Visible = true;

        }
    }
    protected void FormViewGerirDisponibilidade_ItemDeleted(object sender, FormViewDeletedEventArgs e)
    {
        GridViewDisponibilidade.DataBind();
    }
    protected void FormViewGerirDisponibilidade_ItemUpdated(object sender, FormViewUpdatedEventArgs e)
    {
        GridViewDisponibilidade.DataBind();
    }
    protected void FormViewGerirDisponibilidade_ModeChanged(object sender, EventArgs e)
    {
        if (FormViewGerirDisponibilidade.CurrentMode == FormViewMode.ReadOnly)
        {
            PanelGridview.Visible = true;
        }
        else
        {
            PanelGridview.Visible = false;
        }
    }
    protected void FormViewGerirDisponibilidade_ItemCreated(object sender, EventArgs e)
    {
        GridViewDisponibilidade.DataBind();
    }
    protected void ButtonEditar_Click(object sender, EventArgs e)
    {
        PanelGridview.Visible = false;
        FormViewGerirDisponibilidade.ChangeMode(FormViewMode.Edit);
    }
    protected void ButtonRemover_Click(object sender, EventArgs e)
    {
        PanelGridview.Visible = false;
       // PanelApagar.Visible = true;
    }
}