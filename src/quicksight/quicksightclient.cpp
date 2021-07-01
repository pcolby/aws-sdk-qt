/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "quicksightclient.h"
#include "quicksightclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelingestionrequest.h"
#include "cancelingestionresponse.h"
#include "createaccountcustomizationrequest.h"
#include "createaccountcustomizationresponse.h"
#include "createanalysisrequest.h"
#include "createanalysisresponse.h"
#include "createdashboardrequest.h"
#include "createdashboardresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createdatasourcerequest.h"
#include "createdatasourceresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "creategroupmembershiprequest.h"
#include "creategroupmembershipresponse.h"
#include "createiampolicyassignmentrequest.h"
#include "createiampolicyassignmentresponse.h"
#include "createingestionrequest.h"
#include "createingestionresponse.h"
#include "createnamespacerequest.h"
#include "createnamespaceresponse.h"
#include "createtemplaterequest.h"
#include "createtemplateresponse.h"
#include "createtemplatealiasrequest.h"
#include "createtemplatealiasresponse.h"
#include "createthemerequest.h"
#include "createthemeresponse.h"
#include "createthemealiasrequest.h"
#include "createthemealiasresponse.h"
#include "deleteaccountcustomizationrequest.h"
#include "deleteaccountcustomizationresponse.h"
#include "deleteanalysisrequest.h"
#include "deleteanalysisresponse.h"
#include "deletedashboardrequest.h"
#include "deletedashboardresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletedatasourcerequest.h"
#include "deletedatasourceresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershipresponse.h"
#include "deleteiampolicyassignmentrequest.h"
#include "deleteiampolicyassignmentresponse.h"
#include "deletenamespacerequest.h"
#include "deletenamespaceresponse.h"
#include "deletetemplaterequest.h"
#include "deletetemplateresponse.h"
#include "deletetemplatealiasrequest.h"
#include "deletetemplatealiasresponse.h"
#include "deletethemerequest.h"
#include "deletethemeresponse.h"
#include "deletethemealiasrequest.h"
#include "deletethemealiasresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteuserbyprincipalidrequest.h"
#include "deleteuserbyprincipalidresponse.h"
#include "describeaccountcustomizationrequest.h"
#include "describeaccountcustomizationresponse.h"
#include "describeaccountsettingsrequest.h"
#include "describeaccountsettingsresponse.h"
#include "describeanalysisrequest.h"
#include "describeanalysisresponse.h"
#include "describeanalysispermissionsrequest.h"
#include "describeanalysispermissionsresponse.h"
#include "describedashboardrequest.h"
#include "describedashboardresponse.h"
#include "describedashboardpermissionsrequest.h"
#include "describedashboardpermissionsresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describedatasetpermissionsrequest.h"
#include "describedatasetpermissionsresponse.h"
#include "describedatasourcerequest.h"
#include "describedatasourceresponse.h"
#include "describedatasourcepermissionsrequest.h"
#include "describedatasourcepermissionsresponse.h"
#include "describegrouprequest.h"
#include "describegroupresponse.h"
#include "describeiampolicyassignmentrequest.h"
#include "describeiampolicyassignmentresponse.h"
#include "describeingestionrequest.h"
#include "describeingestionresponse.h"
#include "describenamespacerequest.h"
#include "describenamespaceresponse.h"
#include "describetemplaterequest.h"
#include "describetemplateresponse.h"
#include "describetemplatealiasrequest.h"
#include "describetemplatealiasresponse.h"
#include "describetemplatepermissionsrequest.h"
#include "describetemplatepermissionsresponse.h"
#include "describethemerequest.h"
#include "describethemeresponse.h"
#include "describethemealiasrequest.h"
#include "describethemealiasresponse.h"
#include "describethemepermissionsrequest.h"
#include "describethemepermissionsresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "getdashboardembedurlrequest.h"
#include "getdashboardembedurlresponse.h"
#include "getsessionembedurlrequest.h"
#include "getsessionembedurlresponse.h"
#include "listanalysesrequest.h"
#include "listanalysesresponse.h"
#include "listdashboardversionsrequest.h"
#include "listdashboardversionsresponse.h"
#include "listdashboardsrequest.h"
#include "listdashboardsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listdatasourcesrequest.h"
#include "listdatasourcesresponse.h"
#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listiampolicyassignmentsrequest.h"
#include "listiampolicyassignmentsresponse.h"
#include "listiampolicyassignmentsforuserrequest.h"
#include "listiampolicyassignmentsforuserresponse.h"
#include "listingestionsrequest.h"
#include "listingestionsresponse.h"
#include "listnamespacesrequest.h"
#include "listnamespacesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtemplatealiasesrequest.h"
#include "listtemplatealiasesresponse.h"
#include "listtemplateversionsrequest.h"
#include "listtemplateversionsresponse.h"
#include "listtemplatesrequest.h"
#include "listtemplatesresponse.h"
#include "listthemealiasesrequest.h"
#include "listthemealiasesresponse.h"
#include "listthemeversionsrequest.h"
#include "listthemeversionsresponse.h"
#include "listthemesrequest.h"
#include "listthemesresponse.h"
#include "listusergroupsrequest.h"
#include "listusergroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "registeruserrequest.h"
#include "registeruserresponse.h"
#include "restoreanalysisrequest.h"
#include "restoreanalysisresponse.h"
#include "searchanalysesrequest.h"
#include "searchanalysesresponse.h"
#include "searchdashboardsrequest.h"
#include "searchdashboardsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountcustomizationrequest.h"
#include "updateaccountcustomizationresponse.h"
#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsresponse.h"
#include "updateanalysisrequest.h"
#include "updateanalysisresponse.h"
#include "updateanalysispermissionsrequest.h"
#include "updateanalysispermissionsresponse.h"
#include "updatedashboardrequest.h"
#include "updatedashboardresponse.h"
#include "updatedashboardpermissionsrequest.h"
#include "updatedashboardpermissionsresponse.h"
#include "updatedashboardpublishedversionrequest.h"
#include "updatedashboardpublishedversionresponse.h"
#include "updatedatasetrequest.h"
#include "updatedatasetresponse.h"
#include "updatedatasetpermissionsrequest.h"
#include "updatedatasetpermissionsresponse.h"
#include "updatedatasourcerequest.h"
#include "updatedatasourceresponse.h"
#include "updatedatasourcepermissionsrequest.h"
#include "updatedatasourcepermissionsresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updateiampolicyassignmentrequest.h"
#include "updateiampolicyassignmentresponse.h"
#include "updatetemplaterequest.h"
#include "updatetemplateresponse.h"
#include "updatetemplatealiasrequest.h"
#include "updatetemplatealiasresponse.h"
#include "updatetemplatepermissionsrequest.h"
#include "updatetemplatepermissionsresponse.h"
#include "updatethemerequest.h"
#include "updatethemeresponse.h"
#include "updatethemealiasrequest.h"
#include "updatethemealiasresponse.h"
#include "updatethemepermissionsrequest.h"
#include "updatethemepermissionsresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::QuickSight
 * \brief Contains classess for accessing Amazon QuickSight.
 *
 * \inmodule QtAwsQuickSight
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightClient
 * \brief The QuickSightClient class provides access to the Amazon QuickSight service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 */

/*!
 * \brief Constructs a QuickSightClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
QuickSightClient::QuickSightClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QuickSightClientPrivate(this), parent)
{
    Q_D(QuickSightClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("quicksight");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon QuickSight");
    d->serviceName = QStringLiteral("quicksight");
}

/*!
 * \overload QuickSightClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
QuickSightClient::QuickSightClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QuickSightClientPrivate(this), parent)
{
    Q_D(QuickSightClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("quicksight");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon QuickSight");
    d->serviceName = QStringLiteral("quicksight");
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CancelIngestionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an ongoing ingestion of data into
 */
CancelIngestionResponse * QuickSightClient::cancelIngestion(const CancelIngestionRequest &request)
{
    return qobject_cast<CancelIngestionResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateAccountCustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates Amazon QuickSight customizations the current AWS Region. Currently, you can add a custom default theme by using
 * the <code>CreateAccountCustomization</code> or <code>UpdateAccountCustomization</code> API operation. To further
 * customize QuickSight by removing QuickSight sample assets and videos for all new users, see <a
 * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-quicksight.html">Customizing QuickSight</a> in the
 * <i>Amazon QuickSight User Guide.</i>
 *
 * </p
 *
 * You can create customizations for your AWS account or, if you specify a namespace, for a QuickSight namespace instead.
 * Customizations that apply to a namespace always override customizations that apply to an AWS account. To find out which
 * customizations apply, use the <code>DescribeAccountCustomization</code> API
 *
 * operation>
 *
 * Before you use the <code>CreateAccountCustomization</code> API operation to add a theme as the namespace default, make
 * sure that you first share the theme with the namespace. If you don't share it with the namespace, the theme isn't
 * visible to your users even if you make it the default theme. To check if the theme is shared, view the current
 * permissions by using the <code> <a>DescribeThemePermissions</a> </code> API operation. To share the theme, grant
 * permissions by using the <code> <a>UpdateThemePermissions</a> </code> API operation.
 */
CreateAccountCustomizationResponse * QuickSightClient::createAccountCustomization(const CreateAccountCustomizationRequest &request)
{
    return qobject_cast<CreateAccountCustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an analysis in Amazon
 */
CreateAnalysisResponse * QuickSightClient::createAnalysis(const CreateAnalysisRequest &request)
{
    return qobject_cast<CreateAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dashboard from a template. To first create a template, see the <code> <a>CreateTemplate</a> </code> API
 *
 * operation>
 *
 * A dashboard is an entity in QuickSight that identifies QuickSight reports, created from analyses. You can share
 * QuickSight dashboards. With the right permissions, you can create scheduled email reports from them. If you have the
 * correct permissions, you can create a dashboard from a template that exists in a different AWS
 */
CreateDashboardResponse * QuickSightClient::createDashboard(const CreateDashboardRequest &request)
{
    return qobject_cast<CreateDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateDataSetResponse * QuickSightClient::createDataSet(const CreateDataSetRequest &request)
{
    return qobject_cast<CreateDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data
 */
CreateDataSourceResponse * QuickSightClient::createDataSource(const CreateDataSourceRequest &request)
{
    return qobject_cast<CreateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon QuickSight
 *
 * group>
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The response is a group
 */
CreateGroupResponse * QuickSightClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an Amazon QuickSight user to an Amazon QuickSight group.
 */
CreateGroupMembershipResponse * QuickSightClient::createGroupMembership(const CreateGroupMembershipRequest &request)
{
    return qobject_cast<CreateGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateIAMPolicyAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an assignment with one specified IAM policy, identified by its Amazon Resource Name (ARN). This policy
 * assignment is attached to the specified groups or users of Amazon QuickSight. Assignment names are unique per AWS
 * account. To avoid overwriting rules in other namespaces, use assignment names that are
 */
CreateIAMPolicyAssignmentResponse * QuickSightClient::createIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest &request)
{
    return qobject_cast<CreateIAMPolicyAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateIngestionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and starts a new SPICE ingestion on a
 *
 * datase>
 *
 * Any ingestions operating on tagged datasets inherit the same tags automatically for use in access control. For an
 * example, see <a href="http://aws.amazon.com/premiumsupport/knowledge-center/iam-ec2-resource-tags/">How do I create an
 * IAM policy to control access to Amazon EC2 resources using tags?</a> in the AWS Knowledge Center. Tags are visible on
 * the tagged dataset, but not on the ingestion
 */
CreateIngestionResponse * QuickSightClient::createIngestion(const CreateIngestionRequest &request)
{
    return qobject_cast<CreateIngestionResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * (Enterprise edition only) Creates a new namespace for you to use with Amazon
 *
 * QuickSight>
 *
 * A namespace allows you to isolate the QuickSight users and groups that are registered for that namespace. Users that
 * access the namespace can share assets only with other users or groups in the same namespace. They can't see users and
 * groups in other namespaces. You can create a namespace after your AWS account is subscribed to QuickSight. The namespace
 * must be unique within the AWS account. By default, there is a limit of 100 namespaces per AWS account. To increase your
 * limit, create a ticket with AWS Support.
 */
CreateNamespaceResponse * QuickSightClient::createNamespace(const CreateNamespaceRequest &request)
{
    return qobject_cast<CreateNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a template from an existing QuickSight analysis or template. You can use the resulting template to create a
 *
 * dashboard>
 *
 * A <i>template</i> is an entity in QuickSight that encapsulates the metadata required to create an analysis and that you
 * can use to create s dashboard. A template adds a layer of abstraction by using placeholders to replace the dataset
 * associated with the analysis. You can use templates to create dashboards by replacing dataset placeholders with datasets
 * that follow the same schema that was used to create the source analysis and
 */
CreateTemplateResponse * QuickSightClient::createTemplate(const CreateTemplateRequest &request)
{
    return qobject_cast<CreateTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateTemplateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a template alias for a
 */
CreateTemplateAliasResponse * QuickSightClient::createTemplateAlias(const CreateTemplateAliasRequest &request)
{
    return qobject_cast<CreateTemplateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * theme>
 *
 * A <i>theme</i> is set of configuration options for color and layout. Themes apply to analyses and dashboards. For more
 * information, see <a href="https://docs.aws.amazon.com/quicksight/latest/user/themes-in-quicksight.html">Using Themes in
 * Amazon QuickSight</a> in the <i>Amazon QuickSight User
 */
CreateThemeResponse * QuickSightClient::createTheme(const CreateThemeRequest &request)
{
    return qobject_cast<CreateThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateThemeAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a theme alias for a
 */
CreateThemeAliasResponse * QuickSightClient::createThemeAlias(const CreateThemeAliasRequest &request)
{
    return qobject_cast<CreateThemeAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteAccountCustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all Amazon QuickSight customizations in this AWS Region for the specified AWS account and QuickSight
 */
DeleteAccountCustomizationResponse * QuickSightClient::deleteAccountCustomization(const DeleteAccountCustomizationRequest &request)
{
    return qobject_cast<DeleteAccountCustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an analysis from Amazon QuickSight. You can optionally include a recovery window during which you can restore
 * the analysis. If you don't specify a recovery window value, the operation defaults to 30 days. QuickSight attaches a
 * <code>DeletionTime</code> stamp to the response that specifies the end of the recovery window. At the end of the
 * recovery window, QuickSight deletes the analysis
 *
 * permanently>
 *
 * At any time before recovery window ends, you can use the <code>RestoreAnalysis</code> API operation to remove the
 * <code>DeletionTime</code> stamp and cancel the deletion of the analysis. The analysis remains visible in the API until
 * it's deleted, so you can describe it but you can't make a template from
 *
 * it>
 *
 * An analysis that's scheduled for deletion isn't accessible in the QuickSight console. To access it in the console,
 * restore it. Deleting an analysis doesn't delete the dashboards that you publish from
 */
DeleteAnalysisResponse * QuickSightClient::deleteAnalysis(const DeleteAnalysisRequest &request)
{
    return qobject_cast<DeleteAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDashboardResponse * QuickSightClient::deleteDashboard(const DeleteDashboardRequest &request)
{
    return qobject_cast<DeleteDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDataSetResponse * QuickSightClient::deleteDataSet(const DeleteDataSetRequest &request)
{
    return qobject_cast<DeleteDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the data source permanently. This operation breaks all the datasets that reference the deleted data
 */
DeleteDataSourceResponse * QuickSightClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user group from Amazon QuickSight.
 */
DeleteGroupResponse * QuickSightClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user from a group so that the user is no longer a member of the
 */
DeleteGroupMembershipResponse * QuickSightClient::deleteGroupMembership(const DeleteGroupMembershipRequest &request)
{
    return qobject_cast<DeleteGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteIAMPolicyAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing IAM policy
 */
DeleteIAMPolicyAssignmentResponse * QuickSightClient::deleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest &request)
{
    return qobject_cast<DeleteIAMPolicyAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a namespace and the users and groups that are associated with the namespace. This is an asynchronous process.
 * Assets including dashboards, analyses, datasets and data sources are not deleted. To delete these assets, you use the
 * API operations for the relevant asset.
 */
DeleteNamespaceResponse * QuickSightClient::deleteNamespace(const DeleteNamespaceRequest &request)
{
    return qobject_cast<DeleteNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteTemplateResponse * QuickSightClient::deleteTemplate(const DeleteTemplateRequest &request)
{
    return qobject_cast<DeleteTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteTemplateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the item that the specified template alias points to. If you provide a specific alias, you delete the version of
 * the template that the alias points
 */
DeleteTemplateAliasResponse * QuickSightClient::deleteTemplateAlias(const DeleteTemplateAliasRequest &request)
{
    return qobject_cast<DeleteTemplateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteThemeResponse * QuickSightClient::deleteTheme(const DeleteThemeRequest &request)
{
    return qobject_cast<DeleteThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteThemeAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the version of the theme that the specified theme alias points to. If you provide a specific alias, you delete
 * the version of the theme that the alias points
 */
DeleteThemeAliasResponse * QuickSightClient::deleteThemeAlias(const DeleteThemeAliasRequest &request)
{
    return qobject_cast<DeleteThemeAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon QuickSight user that is associated with the identity of the AWS Identity and Access Management (IAM)
 * user or role that's making the call. The IAM user isn't deleted as a result of this call.
 */
DeleteUserResponse * QuickSightClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteUserByPrincipalIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user identified by its principal ID.
 */
DeleteUserByPrincipalIdResponse * QuickSightClient::deleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest &request)
{
    return qobject_cast<DeleteUserByPrincipalIdResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeAccountCustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the customizations associated with the provided AWS account and Amazon QuickSight namespace in an AWS Region.
 * The QuickSight console evaluates which customizations to apply by running this API operation with the
 * <code>Resolved</code> flag included.
 *
 * </p
 *
 * To determine what customizations display when you run this command, it can help to visualize the relationship of the
 * entities involved.
 *
 * </p <ul> <li>
 *
 * <code>AWS Account</code> - The AWS account exists at the top of the hierarchy. It has the potential to use all of the
 * AWS Regions and AWS Services. When you subscribe to QuickSight, you choose one AWS Region to use as your home Region.
 * That's where your free SPICE capacity is located. You can use QuickSight in any supported AWS Region.
 *
 * </p </li> <li>
 *
 * <code>AWS Region</code> - In each AWS Region where you sign in to QuickSight at least once, QuickSight acts as a
 * separate instance of the same service. If you have a user directory, it resides in us-east-1, which is the US East (N.
 * Virginia). Generally speaking, these users have access to QuickSight in any AWS Region, unless they are constrained to a
 * namespace.
 *
 * </p
 *
 * To run the command in a different AWS Region, you change your Region settings. If you're using the AWS CLI, you can use
 * one of the following
 *
 * options> <ul> <li>
 *
 * Use <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-options.html">command line options</a>.
 *
 * </p </li> <li>
 *
 * Use <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-configure-profiles.html">named profiles</a>.
 *
 * </p </li> <li>
 *
 * Run <code>aws configure</code> to change your default AWS Region. Use Enter to key the same settings for your keys. For
 * more information, see <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-configure.html">Configuring the
 * AWS
 *
 * CLI</a>> </li> </ul> </li> <li>
 *
 * <code>Namespace</code> - A QuickSight namespace is a partition that contains users and assets (data sources, datasets,
 * dashboards, and so on). To access assets that are in a specific namespace, users and groups must also be part of the
 * same namespace. People who share a namespace are completely isolated from users and assets in other namespaces, even if
 * they are in the same AWS account and AWS
 *
 * Region> </li> <li>
 *
 * <code>Applied customizations</code> - Within an AWS Region, a set of QuickSight customizations can apply to an AWS
 * account or to a namespace. Settings that you apply to a namespace override settings that you apply to an AWS account.
 * All settings are isolated to a single AWS Region. To apply them in other AWS Regions, run the
 * <code>CreateAccountCustomization</code> command in each AWS Region where you want to apply the same customizations.
 */
DescribeAccountCustomizationResponse * QuickSightClient::describeAccountCustomization(const DescribeAccountCustomizationRequest &request)
{
    return qobject_cast<DescribeAccountCustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings that were used when your QuickSight subscription was first created in this AWS
 */
DescribeAccountSettingsResponse * QuickSightClient::describeAccountSettings(const DescribeAccountSettingsRequest &request)
{
    return qobject_cast<DescribeAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a summary of the metadata for an
 */
DescribeAnalysisResponse * QuickSightClient::describeAnalysis(const DescribeAnalysisRequest &request)
{
    return qobject_cast<DescribeAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeAnalysisPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the read and write permissions for an
 */
DescribeAnalysisPermissionsResponse * QuickSightClient::describeAnalysisPermissions(const DescribeAnalysisPermissionsRequest &request)
{
    return qobject_cast<DescribeAnalysisPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a summary for a
 */
DescribeDashboardResponse * QuickSightClient::describeDashboard(const DescribeDashboardRequest &request)
{
    return qobject_cast<DescribeDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDashboardPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes read and write permissions for a
 */
DescribeDashboardPermissionsResponse * QuickSightClient::describeDashboardPermissions(const DescribeDashboardPermissionsRequest &request)
{
    return qobject_cast<DescribeDashboardPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a dataset.
 */
DescribeDataSetResponse * QuickSightClient::describeDataSet(const DescribeDataSetRequest &request)
{
    return qobject_cast<DescribeDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDataSetPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions on a
 *
 * dataset>
 *
 * The permissions resource is
 */
DescribeDataSetPermissionsResponse * QuickSightClient::describeDataSetPermissions(const DescribeDataSetPermissionsRequest &request)
{
    return qobject_cast<DescribeDataSetPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a data
 */
DescribeDataSourceResponse * QuickSightClient::describeDataSource(const DescribeDataSourceRequest &request)
{
    return qobject_cast<DescribeDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeDataSourcePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the resource permissions for a data
 */
DescribeDataSourcePermissionsResponse * QuickSightClient::describeDataSourcePermissions(const DescribeDataSourcePermissionsRequest &request)
{
    return qobject_cast<DescribeDataSourcePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an Amazon QuickSight group's description and Amazon Resource Name (ARN).
 */
DescribeGroupResponse * QuickSightClient::describeGroup(const DescribeGroupRequest &request)
{
    return qobject_cast<DescribeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeIAMPolicyAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing IAM policy assignment, as specified by the assignment
 */
DescribeIAMPolicyAssignmentResponse * QuickSightClient::describeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest &request)
{
    return qobject_cast<DescribeIAMPolicyAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeIngestionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a SPICE
 */
DescribeIngestionResponse * QuickSightClient::describeIngestion(const DescribeIngestionRequest &request)
{
    return qobject_cast<DescribeIngestionResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current
 */
DescribeNamespaceResponse * QuickSightClient::describeNamespace(const DescribeNamespaceRequest &request)
{
    return qobject_cast<DescribeNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a template's
 */
DescribeTemplateResponse * QuickSightClient::describeTemplate(const DescribeTemplateRequest &request)
{
    return qobject_cast<DescribeTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeTemplateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the template alias for a
 */
DescribeTemplateAliasResponse * QuickSightClient::describeTemplateAlias(const DescribeTemplateAliasRequest &request)
{
    return qobject_cast<DescribeTemplateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeTemplatePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes read and write permissions on a
 */
DescribeTemplatePermissionsResponse * QuickSightClient::describeTemplatePermissions(const DescribeTemplatePermissionsRequest &request)
{
    return qobject_cast<DescribeTemplatePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 */
DescribeThemeResponse * QuickSightClient::describeTheme(const DescribeThemeRequest &request)
{
    return qobject_cast<DescribeThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeThemeAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the alias for a
 */
DescribeThemeAliasResponse * QuickSightClient::describeThemeAlias(const DescribeThemeAliasRequest &request)
{
    return qobject_cast<DescribeThemeAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeThemePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the read and write permissions for a
 */
DescribeThemePermissionsResponse * QuickSightClient::describeThemePermissions(const DescribeThemePermissionsRequest &request)
{
    return qobject_cast<DescribeThemePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a user, given the user name.
 */
DescribeUserResponse * QuickSightClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * GetDashboardEmbedUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a session URL and authorization code that you can use to embed an Amazon QuickSight read-only dashboard in
 * your web server code. Before you use this command, make sure that you have configured the dashboards and permissions.
 *
 * </p
 *
 * Currently, you can use <code>GetDashboardEmbedURL</code> only from the server, not from the user's browser. The
 * following rules apply to the combination of URL and authorization
 *
 * code> <ul> <li>
 *
 * They must be used
 *
 * together> </li> <li>
 *
 * They can be used one time
 *
 * only> </li> <li>
 *
 * They are valid for 5 minutes after you run this
 *
 * command> </li> <li>
 *
 * The resulting user session is valid for 10
 *
 * hours> </li> </ul>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics.html">Embedded
 * Analytics</a> in the <i>Amazon QuickSight User
 */
GetDashboardEmbedUrlResponse * QuickSightClient::getDashboardEmbedUrl(const GetDashboardEmbedUrlRequest &request)
{
    return qobject_cast<GetDashboardEmbedUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * GetSessionEmbedUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a session URL and authorization code that you can use to embed the Amazon QuickSight console in your web
 * server code. Use <code>GetSessionEmbedUrl</code> where you want to provide an authoring portal that allows users to
 * create data sources, datasets, analyses, and dashboards. The users who access an embedded QuickSight console need belong
 * to the author or admin security cohort. If you want to restrict permissions to some of these features, add a custom
 * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API operation. Use <code> <a>RegisterUser</a>
 * </code> API operation to add a new user with a custom permission profile attached. For more information, see the
 * following sections in the <i>Amazon QuickSight User
 *
 * Guide</i>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-the-quicksight-console.html">Embedding the Amazon
 * QuickSight Console</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
 * Access to the Amazon QuickSight Console</a>
 */
GetSessionEmbedUrlResponse * QuickSightClient::getSessionEmbedUrl(const GetSessionEmbedUrlRequest &request)
{
    return qobject_cast<GetSessionEmbedUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListAnalysesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists Amazon QuickSight analyses that exist in the specified AWS
 */
ListAnalysesResponse * QuickSightClient::listAnalyses(const ListAnalysesRequest &request)
{
    return qobject_cast<ListAnalysesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListDashboardVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the versions of the dashboards in the QuickSight
 */
ListDashboardVersionsResponse * QuickSightClient::listDashboardVersions(const ListDashboardVersionsRequest &request)
{
    return qobject_cast<ListDashboardVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists dashboards in an AWS
 */
ListDashboardsResponse * QuickSightClient::listDashboards(const ListDashboardsRequest &request)
{
    return qobject_cast<ListDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListDataSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the datasets belonging to the current AWS account in an AWS
 *
 * Region>
 *
 * The permissions resource is
 */
ListDataSetsResponse * QuickSightClient::listDataSets(const ListDataSetsRequest &request)
{
    return qobject_cast<ListDataSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListDataSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists data sources in current AWS Region that belong to this AWS
 */
ListDataSourcesResponse * QuickSightClient::listDataSources(const ListDataSourcesRequest &request)
{
    return qobject_cast<ListDataSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListGroupMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists member users in a
 */
ListGroupMembershipsResponse * QuickSightClient::listGroupMemberships(const ListGroupMembershipsRequest &request)
{
    return qobject_cast<ListGroupMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all user groups in Amazon QuickSight.
 */
ListGroupsResponse * QuickSightClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListIAMPolicyAssignmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists IAM policy assignments in the current Amazon QuickSight
 */
ListIAMPolicyAssignmentsResponse * QuickSightClient::listIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest &request)
{
    return qobject_cast<ListIAMPolicyAssignmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListIAMPolicyAssignmentsForUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the IAM policy assignments, including the Amazon Resource Names (ARNs) for the IAM policies assigned to the
 * specified user and group or groups that the user belongs
 */
ListIAMPolicyAssignmentsForUserResponse * QuickSightClient::listIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest &request)
{
    return qobject_cast<ListIAMPolicyAssignmentsForUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListIngestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the history of SPICE ingestions for a
 */
ListIngestionsResponse * QuickSightClient::listIngestions(const ListIngestionsRequest &request)
{
    return qobject_cast<ListIngestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListNamespacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the namespaces for the specified AWS
 */
ListNamespacesResponse * QuickSightClient::listNamespaces(const ListNamespacesRequest &request)
{
    return qobject_cast<ListNamespacesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags assigned to a
 */
ListTagsForResourceResponse * QuickSightClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListTemplateAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the aliases of a
 */
ListTemplateAliasesResponse * QuickSightClient::listTemplateAliases(const ListTemplateAliasesRequest &request)
{
    return qobject_cast<ListTemplateAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the versions of the templates in the current Amazon QuickSight
 */
ListTemplateVersionsResponse * QuickSightClient::listTemplateVersions(const ListTemplateVersionsRequest &request)
{
    return qobject_cast<ListTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the templates in the current Amazon QuickSight
 */
ListTemplatesResponse * QuickSightClient::listTemplates(const ListTemplatesRequest &request)
{
    return qobject_cast<ListTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListThemeAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the aliases of a
 */
ListThemeAliasesResponse * QuickSightClient::listThemeAliases(const ListThemeAliasesRequest &request)
{
    return qobject_cast<ListThemeAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListThemeVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the versions of the themes in the current AWS
 */
ListThemeVersionsResponse * QuickSightClient::listThemeVersions(const ListThemeVersionsRequest &request)
{
    return qobject_cast<ListThemeVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListThemesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the themes in the current AWS
 */
ListThemesResponse * QuickSightClient::listThemes(const ListThemesRequest &request)
{
    return qobject_cast<ListThemesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListUserGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
 */
ListUserGroupsResponse * QuickSightClient::listUserGroups(const ListUserGroupsRequest &request)
{
    return qobject_cast<ListUserGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the Amazon QuickSight users belonging to this account.
 */
ListUsersResponse * QuickSightClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * RegisterUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon QuickSight user, whose identity is associated with the AWS Identity and Access Management (IAM)
 * identity or role specified in the request.
 */
RegisterUserResponse * QuickSightClient::registerUser(const RegisterUserRequest &request)
{
    return qobject_cast<RegisterUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * RestoreAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores an
 */
RestoreAnalysisResponse * QuickSightClient::restoreAnalysis(const RestoreAnalysisRequest &request)
{
    return qobject_cast<RestoreAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * SearchAnalysesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for analyses that belong to the user specified in the
 */
SearchAnalysesResponse * QuickSightClient::searchAnalyses(const SearchAnalysesRequest &request)
{
    return qobject_cast<SearchAnalysesResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * SearchDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for dashboards that belong to a user.
 */
SearchDashboardsResponse * QuickSightClient::searchDashboards(const SearchDashboardsRequest &request)
{
    return qobject_cast<SearchDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified QuickSight resource.
 *
 * </p
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions, by granting a
 * user permission to access or change only resources with certain tag values. You can use the <code>TagResource</code>
 * operation with a resource that already has tags. If you specify a new tag key for the resource, this tag is appended to
 * the list of tags associated with the resource. If you specify a tag key that is already associated with the resource,
 * the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a resource. QuickSight supports tagging on data set, data source, dashboard,
 * and template.
 *
 * </p
 *
 * Tagging for QuickSight works in a similar way to tagging for other AWS services, except for the
 *
 * following> <ul> <li>
 *
 * You can't use tags to track AWS costs for QuickSight. This restriction is because QuickSight costs are based on users
 * and SPICE capacity, which aren't taggable
 *
 * resources> </li> <li>
 *
 * QuickSight doesn't currently support the Tag Editor for AWS Resource
 */
TagResourceResponse * QuickSightClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag or tags from a
 */
UntagResourceResponse * QuickSightClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateAccountCustomizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates Amazon QuickSight customizations the current AWS Region. Currently, the only customization you can use is a
 *
 * theme>
 *
 * You can use customizations for your AWS account or, if you specify a namespace, for a QuickSight namespace instead.
 * Customizations that apply to a namespace override customizations that apply to an AWS account. To find out which
 * customizations apply, use the <code>DescribeAccountCustomization</code> API operation.
 */
UpdateAccountCustomizationResponse * QuickSightClient::updateAccountCustomization(const UpdateAccountCustomizationRequest &request)
{
    return qobject_cast<UpdateAccountCustomizationResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Amazon QuickSight settings in your AWS
 */
UpdateAccountSettingsResponse * QuickSightClient::updateAccountSettings(const UpdateAccountSettingsRequest &request)
{
    return qobject_cast<UpdateAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an analysis in Amazon
 */
UpdateAnalysisResponse * QuickSightClient::updateAnalysis(const UpdateAnalysisRequest &request)
{
    return qobject_cast<UpdateAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateAnalysisPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the read and write permissions for an
 */
UpdateAnalysisPermissionsResponse * QuickSightClient::updateAnalysisPermissions(const UpdateAnalysisPermissionsRequest &request)
{
    return qobject_cast<UpdateAnalysisPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a dashboard in an AWS
 */
UpdateDashboardResponse * QuickSightClient::updateDashboard(const UpdateDashboardRequest &request)
{
    return qobject_cast<UpdateDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDashboardPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates read and write permissions on a
 */
UpdateDashboardPermissionsResponse * QuickSightClient::updateDashboardPermissions(const UpdateDashboardPermissionsRequest &request)
{
    return qobject_cast<UpdateDashboardPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDashboardPublishedVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the published version of a
 */
UpdateDashboardPublishedVersionResponse * QuickSightClient::updateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest &request)
{
    return qobject_cast<UpdateDashboardPublishedVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateDataSetResponse * QuickSightClient::updateDataSet(const UpdateDataSetRequest &request)
{
    return qobject_cast<UpdateDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDataSetPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the permissions on a
 *
 * dataset>
 *
 * The permissions resource is
 */
UpdateDataSetPermissionsResponse * QuickSightClient::updateDataSetPermissions(const UpdateDataSetPermissionsRequest &request)
{
    return qobject_cast<UpdateDataSetPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a data
 */
UpdateDataSourceResponse * QuickSightClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateDataSourcePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the permissions to a data
 */
UpdateDataSourcePermissionsResponse * QuickSightClient::updateDataSourcePermissions(const UpdateDataSourcePermissionsRequest &request)
{
    return qobject_cast<UpdateDataSourcePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes a group description.
 */
UpdateGroupResponse * QuickSightClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateIAMPolicyAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing IAM policy assignment. This operation updates only the optional parameter or parameters that are
 * specified in the request. This overwrites all of the users included in <code>Identities</code>.
 */
UpdateIAMPolicyAssignmentResponse * QuickSightClient::updateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest &request)
{
    return qobject_cast<UpdateIAMPolicyAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a template from an existing Amazon QuickSight analysis or another
 */
UpdateTemplateResponse * QuickSightClient::updateTemplate(const UpdateTemplateRequest &request)
{
    return qobject_cast<UpdateTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateTemplateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the template alias of a
 */
UpdateTemplateAliasResponse * QuickSightClient::updateTemplateAlias(const UpdateTemplateAliasRequest &request)
{
    return qobject_cast<UpdateTemplateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateTemplatePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the resource permissions for a
 */
UpdateTemplatePermissionsResponse * QuickSightClient::updateTemplatePermissions(const UpdateTemplatePermissionsRequest &request)
{
    return qobject_cast<UpdateTemplatePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateThemeResponse * QuickSightClient::updateTheme(const UpdateThemeRequest &request)
{
    return qobject_cast<UpdateThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateThemeAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an alias of a
 */
UpdateThemeAliasResponse * QuickSightClient::updateThemeAlias(const UpdateThemeAliasRequest &request)
{
    return qobject_cast<UpdateThemeAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateThemePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the resource permissions for a theme. Permissions apply to the action to grant or revoke permissions on, for
 * example
 *
 * <code>"quicksight:DescribeTheme"</code>>
 *
 * Theme permissions apply in groupings. Valid groupings include the following for the three levels of permissions, which
 * are user, owner, or no permissions:
 *
 * </p <ul> <li>
 *
 * Use> <ul> <li>
 *
 * <code>"quicksight:DescribeTheme"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:DescribeThemeAlias"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:ListThemeAliases"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:ListThemeVersions"</code>
 *
 * </p </li> </ul> </li> <li>
 *
 * Owne> <ul> <li>
 *
 * <code>"quicksight:DescribeTheme"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:DescribeThemeAlias"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:ListThemeAliases"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:ListThemeVersions"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:DeleteTheme"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:UpdateTheme"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:CreateThemeAlias"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:DeleteThemeAlias"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:UpdateThemeAlias"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:UpdateThemePermissions"</code>
 *
 * </p </li> <li>
 *
 * <code>"quicksight:DescribeThemePermissions"</code>
 *
 * </p </li> </ul> </li> <li>
 *
 * To specify no permissions, omit the permissions
 */
UpdateThemePermissionsResponse * QuickSightClient::updateThemePermissions(const UpdateThemePermissionsRequest &request)
{
    return qobject_cast<UpdateThemePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon QuickSight
 */
UpdateUserResponse * QuickSightClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::QuickSight::QuickSightClientPrivate
 * \brief The QuickSightClientPrivate class provides private implementation for QuickSightClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightClientPrivate object with public implementation \a q.
 */
QuickSightClientPrivate::QuickSightClientPrivate(QuickSightClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace QuickSight
} // namespace QtAws
