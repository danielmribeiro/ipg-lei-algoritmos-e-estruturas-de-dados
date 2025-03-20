<%@ Page Title="" Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true" CodeFile="GerirDisponibilidade.aspx.cs" Inherits="GerirDisponibilidade" %>

<asp:Content ID="MainContent" ContentPlaceHolderID="MainContent" Runat="Server">

    <asp:Panel ID="PanelGridview" runat="server" Width="780px">
        <asp:GridView ID="GridViewDisponibilidade" runat="server" AllowPaging="True" AllowSorting="True" AutoGenerateColumns="False" BorderStyle="Solid" CellPadding="4" DataKeyNames="id_voluntario" DataSourceID="SqlDataSourceGridView" ForeColor="#333333" GridLines="None" Width="663px" OnSelectedIndexChanged="GridViewDisponibilidade_SelectedIndexChanged">
            <AlternatingRowStyle BackColor="White" />
            <Columns>
                <asp:CommandField ShowSelectButton="True" />
                <asp:BoundField DataField="data_inicio" HeaderText="data_inicio" SortExpression="data_inicio" />
                <asp:BoundField DataField="hora_inicio" HeaderText="hora_inicio" SortExpression="hora_inicio" />
                <asp:BoundField DataField="data_fim" HeaderText="data_fim" SortExpression="data_fim" />
                <asp:BoundField DataField="hora_fim" HeaderText="hora_fim" SortExpression="hora_fim" />
                <asp:CheckBoxField DataField="ativo" HeaderText="ativo" SortExpression="ativo" />
                <asp:BoundField DataField="username_l" HeaderText="username_l" SortExpression="username_l" />
                <asp:BoundField DataField="nome" HeaderText="nome" SortExpression="nome" />
                <asp:BoundField DataField="id_voluntario" HeaderText="id_voluntario" SortExpression="id_voluntario" />
                <asp:BoundField DataField="id_disp_voluntario" HeaderText="id_disp_voluntario" InsertVisible="False" ReadOnly="True" SortExpression="id_disp_voluntario" />
            </Columns>
            <EditRowStyle BackColor="#2461BF" />
            <FooterStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
            <PagerStyle BackColor="#2461BF" ForeColor="White" HorizontalAlign="Center" />
            <RowStyle BackColor="#EFF3FB" />
            <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#333333" />
            <SortedAscendingCellStyle BackColor="#F5F7FB" />
            <SortedAscendingHeaderStyle BackColor="#6D95E1" />
            <SortedDescendingCellStyle BackColor="#E9EBEF" />
            <SortedDescendingHeaderStyle BackColor="#4870BE" />
        </asp:GridView>
        <br />

        <asp:SqlDataSource ID="SqlDataSourceGridView" runat="server" ConnectionString="<%$ ConnectionStrings:ConnectionString %>" SelectCommand="SELECT DisponibilidadeVoluntario.data_inicio, DisponibilidadeVoluntario.hora_inicio, DisponibilidadeVoluntario.data_fim, DisponibilidadeVoluntario.hora_fim, DisponibilidadeVoluntario.ativo, Voluntario.username_l, Voluntario.nome, DisponibilidadeVoluntario.id_voluntario, DisponibilidadeVoluntario.id_disp_voluntario FROM DisponibilidadeVoluntario INNER JOIN Voluntario ON DisponibilidadeVoluntario.id_voluntario = Voluntario.id_voluntario WHERE (Voluntario.username_l = @username_l)">
            <SelectParameters>
                <asp:Parameter Name="username_l" />
            </SelectParameters>
        </asp:SqlDataSource>

        <br />
        <asp:Button ID="ButtonInserir" runat="server" OnClick="Button1_Click" Text="Inserir" />
        <asp:Button ID="ButtonEditar" runat="server" Text="Editar" Enabled="False" OnClick="ButtonEditar_Click" />
        <asp:Button ID="ButtonRemover" runat="server" Text="Remover" Enabled="False" OnClick="ButtonRemover_Click" />

    </asp:Panel>
    <asp:Panel ID="Panel1" runat="server" Visible="True">
    <asp:FormView ID="FormViewGerirDisponibilidade" runat="server" DataSourceID="SqlDataSourceFormView" CellPadding="4" DataKeyNames="id_disp_voluntario" ForeColor="#333333" Visible="False">
        <EditItemTemplate>
            data_inicio:
            <asp:TextBox ID="data_inicioTextBox" runat="server" Text='<%# Bind("data_inicio") %>' />
            <br />
            hora_inicio:
            <asp:TextBox ID="hora_inicioTextBox" runat="server" Text='<%# Bind("hora_inicio") %>' />
            <br />
            data_fim:
            <asp:TextBox ID="data_fimTextBox" runat="server" Text='<%# Bind("data_fim") %>' />
            <br />
            hora_fim:
            <asp:TextBox ID="hora_fimTextBox" runat="server" Text='<%# Bind("hora_fim") %>' />
            <br />
            ativo:
            <asp:CheckBox ID="ativoCheckBox" runat="server" Checked='<%# Bind("ativo") %>' />
            <br />
            id_disp_voluntario:
            <asp:Label ID="id_disp_voluntarioLabel1" runat="server" Text='<%# Eval("id_disp_voluntario") %>' />
            <br />
            <asp:LinkButton ID="UpdateButton" runat="server" CausesValidation="True" CommandName="Update" Text="Update" />
            &nbsp;<asp:LinkButton ID="UpdateCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="Cancel" />
        </EditItemTemplate>
        <EditRowStyle BackColor="#2461BF" />
        <FooterStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <InsertItemTemplate>
            data_inicio:
            <asp:TextBox ID="data_inicioTextBox" runat="server" Text='<%# Bind("data_inicio") %>' />
            <br />
            hora_inicio:
            <asp:TextBox ID="hora_inicioTextBox" runat="server" Text='<%# Bind("hora_inicio") %>' />
            <br />
            data_fim:
            <asp:TextBox ID="data_fimTextBox" runat="server" Text='<%# Bind("data_fim") %>' />
            <br />
            hora_fim:
            <asp:TextBox ID="hora_fimTextBox" runat="server" Text='<%# Bind("hora_fim") %>' />
            <br />
            ativo:
            <asp:CheckBox ID="ativoCheckBox" runat="server" Checked='<%# Bind("ativo") %>' />
            <br />
            <asp:LinkButton ID="InsertButton" runat="server" CausesValidation="True" CommandName="Insert" Text="Insert" />
            &nbsp;<asp:LinkButton ID="InsertCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="Cancel" />
        </InsertItemTemplate>
        <ItemTemplate>
            data_inicio:
            <asp:Label ID="data_inicioLabel" runat="server" Text='<%# Bind("data_inicio") %>' />
            <br />
            hora_inicio:
            <asp:Label ID="hora_inicioLabel" runat="server" Text='<%# Bind("hora_inicio") %>' />
            <br />
            data_fim:
            <asp:Label ID="data_fimLabel" runat="server" Text='<%# Bind("data_fim") %>' />
            <br />
            hora_fim:
            <asp:Label ID="hora_fimLabel" runat="server" Text='<%# Bind("hora_fim") %>' />
            <br />
            ativo:
            <asp:CheckBox ID="ativoCheckBox" runat="server" Checked='<%# Bind("ativo") %>' Enabled="false" />
            <br />
            id_disp_voluntario:
            <asp:Label ID="id_disp_voluntarioLabel" runat="server" Text='<%# Eval("id_disp_voluntario") %>' />
            <br />
            <asp:LinkButton ID="EditButton" runat="server" CausesValidation="False" CommandName="Edit" Text="Edit" />
            &nbsp;<asp:LinkButton ID="DeleteButton" runat="server" CausesValidation="False" CommandName="Delete" Text="Delete" />
            &nbsp;<asp:LinkButton ID="NewButton" runat="server" CausesValidation="False" CommandName="New" Text="New" />
        </ItemTemplate>
        <PagerStyle BackColor="#2461BF" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#EFF3FB" />
    </asp:FormView>
    <asp:SqlDataSource ID="SqlDataSourceFormView" runat="server" ConnectionString="<%$ ConnectionStrings:ConnectionString %>" DeleteCommand="DELETE FROM DisponibilidadeVoluntario WHERE (id_disp_voluntario = @id_disp_voluntario)" InsertCommand="INSERT INTO DisponibilidadeVoluntario(id_voluntario, data_inicio, hora_inicio, data_fim, hora_fim, ativo) VALUES (@id_voluntario, @data_inicio, @hora_inicio, @data_fim, @hora_fim, @ativo)" SelectCommand="SELECT data_inicio, hora_inicio, data_fim, hora_fim, ativo, id_disp_voluntario FROM DisponibilidadeVoluntario WHERE (id_disp_voluntario = @id_disp_voluntario)" UpdateCommand="UPDATE DisponibilidadeVoluntario SET id_voluntario = @id_voluntario, data_inicio = @data_inicio, hora_inicio = @hora_inicio, data_fim = @data_fim, hora_fim = @hora_fim, ativo = @ativo">
        <DeleteParameters>
            <asp:Parameter Name="id_disp_voluntario" />
        </DeleteParameters>
        <InsertParameters>
            <asp:Parameter Name="id_voluntario" />
            <asp:Parameter Name="data_inicio" />
            <asp:Parameter Name="hora_inicio" />
            <asp:Parameter Name="data_fim" />
            <asp:Parameter Name="hora_fim" />
            <asp:Parameter Name="ativo" />
        </InsertParameters>
        <SelectParameters>
            <asp:ControlParameter ControlID="GridViewDisponibilidade" Name="id_disp_voluntario" PropertyName="SelectedValue" />
        </SelectParameters>
        <UpdateParameters>
            <asp:Parameter Name="id_voluntario" />
            <asp:Parameter Name="data_inicio" />
            <asp:Parameter Name="hora_inicio" />
            <asp:Parameter Name="data_fim" />
            <asp:Parameter Name="hora_fim" />
            <asp:Parameter Name="ativo" />
        </UpdateParameters>
    </asp:SqlDataSource>
    <br />
        </asp:Panel>
</asp:Content>

