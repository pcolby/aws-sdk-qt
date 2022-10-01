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

#include "grafanaclient.h"
#include "grafanaclient_p.h"

#include "core/awssignaturev4.h"
#include "associatelicenserequest.h"
#include "associatelicenseresponse.h"
#include "createworkspacerequest.h"
#include "createworkspaceresponse.h"
#include "createworkspaceapikeyrequest.h"
#include "createworkspaceapikeyresponse.h"
#include "deleteworkspacerequest.h"
#include "deleteworkspaceresponse.h"
#include "deleteworkspaceapikeyrequest.h"
#include "deleteworkspaceapikeyresponse.h"
#include "describeworkspacerequest.h"
#include "describeworkspaceresponse.h"
#include "describeworkspaceauthenticationrequest.h"
#include "describeworkspaceauthenticationresponse.h"
#include "disassociatelicenserequest.h"
#include "disassociatelicenseresponse.h"
#include "listpermissionsrequest.h"
#include "listpermissionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworkspacesrequest.h"
#include "listworkspacesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatepermissionsrequest.h"
#include "updatepermissionsresponse.h"
#include "updateworkspacerequest.h"
#include "updateworkspaceresponse.h"
#include "updateworkspaceauthenticationrequest.h"
#include "updateworkspaceauthenticationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Grafana
 * \brief Contains classess for accessing Amazon Managed Grafana.
 *
 * \inmodule QtAwsGrafana
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::GrafanaClient
 * \brief The GrafanaClient class provides access to the Amazon Managed Grafana service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGrafana
 *
 *  Amazon Managed Grafana is a fully managed and secure data visualization service that you can use to instantly query,
 *  correlate, and visualize operational metrics, logs, and traces from multiple sources. Amazon Managed Grafana makes it
 *  easy to deploy, operate, and scale Grafana, a widely deployed data visualization tool that is popular for its extensible
 *  data
 * 
 *  support>
 * 
 *  With Amazon Managed Grafana, you create logically isolated Grafana servers called <i>workspaces</i>. In a workspace, you
 *  can create Grafana dashboards and visualizations to analyze your metrics, logs, and traces without having to build,
 *  package, or deploy any hardware to run Grafana servers.
 */

/*!
 * \brief Constructs a GrafanaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GrafanaClient::GrafanaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GrafanaClientPrivate(this), parent)
{
    Q_D(GrafanaClient);
    d->apiVersion = QStringLiteral("2020-08-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Managed Grafana");
    d->serviceName = QStringLiteral("grafana");
}

/*!
 * \overload GrafanaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GrafanaClient::GrafanaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GrafanaClientPrivate(this), parent)
{
    Q_D(GrafanaClient);
    d->apiVersion = QStringLiteral("2020-08-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Managed Grafana");
    d->serviceName = QStringLiteral("grafana");
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * AssociateLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a Grafana Enterprise license to a workspace. Upgrading to Grafana Enterprise incurs additional fees. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html">Upgrade a workspace to
 * Grafana
 */
AssociateLicenseResponse * GrafanaClient::associateLicense(const AssociateLicenseRequest &request)
{
    return qobject_cast<AssociateLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * CreateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <i>workspace</i>. In a workspace, you can create Grafana dashboards and visualizations to analyze your
 * metrics, logs, and traces. You don't have to build, package, or deploy any hardware to run the Grafana
 *
 * server>
 *
 * Don't use <code>CreateWorkspace</code> to modify an existing workspace. Instead, use <a
 */
CreateWorkspaceResponse * GrafanaClient::createWorkspace(const CreateWorkspaceRequest &request)
{
    return qobject_cast<CreateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * CreateWorkspaceApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an API key for the workspace. This key can be used to authenticate requests sent to the workspace's HTTP API.
 * See <a href=" https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html">
 * https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html</a> for available APIs and example
 */
CreateWorkspaceApiKeyResponse * GrafanaClient::createWorkspaceApiKey(const CreateWorkspaceApiKeyRequest &request)
{
    return qobject_cast<CreateWorkspaceApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * DeleteWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Managed Grafana
 */
DeleteWorkspaceResponse * GrafanaClient::deleteWorkspace(const DeleteWorkspaceRequest &request)
{
    return qobject_cast<DeleteWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * DeleteWorkspaceApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an API key for a
 */
DeleteWorkspaceApiKeyResponse * GrafanaClient::deleteWorkspaceApiKey(const DeleteWorkspaceApiKeyRequest &request)
{
    return qobject_cast<DeleteWorkspaceApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * DescribeWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays information about one Amazon Managed Grafana
 */
DescribeWorkspaceResponse * GrafanaClient::describeWorkspace(const DescribeWorkspaceRequest &request)
{
    return qobject_cast<DescribeWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * DescribeWorkspaceAuthenticationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays information about the authentication methods used in one Amazon Managed Grafana
 */
DescribeWorkspaceAuthenticationResponse * GrafanaClient::describeWorkspaceAuthentication(const DescribeWorkspaceAuthenticationRequest &request)
{
    return qobject_cast<DescribeWorkspaceAuthenticationResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * DisassociateLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the Grafana Enterprise license from a
 */
DisassociateLicenseResponse * GrafanaClient::disassociateLicense(const DisassociateLicenseRequest &request)
{
    return qobject_cast<DisassociateLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users and groups who have the Grafana <code>Admin</code> and <code>Editor</code> roles in this workspace. If
 * you use this operation without specifying <code>userId</code> or <code>groupId</code>, the operation returns the roles
 * of all users and groups. If you specify a <code>userId</code> or a <code>groupId</code>, only the roles for that user or
 * group are returned. If you do this, you can specify only one <code>userId</code> or one
 */
ListPermissionsResponse * GrafanaClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListTagsForResource</code> operation returns the tags that are associated with the Amazon Managed Service for
 * Grafana resource specified by the <code>resourceArn</code>. Currently, the only resource that can be tagged is a
 * workspace.
 */
ListTagsForResourceResponse * GrafanaClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * ListWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Amazon Managed Grafana workspaces in the account, with some information about each workspace. For more
 * complete information about one workspace, use <a
 */
ListWorkspacesResponse * GrafanaClient::listWorkspaces(const ListWorkspacesRequest &request)
{
    return qobject_cast<ListWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>TagResource</code> operation associates tags with an Amazon Managed Grafana resource. Currently, the only
 * resource that can be tagged is workspaces.
 *
 * </p
 *
 * If you specify a new tag key for the resource, this tag is appended to the list of tags associated with the resource. If
 * you specify a tag key that is already associated with the resource, the new tag value that you specify replaces the
 * previous value for that
 */
TagResourceResponse * GrafanaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UntagResource</code> operation removes the association of the tag with the Amazon Managed Grafana resource.
 */
UntagResourceResponse * GrafanaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * UpdatePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates which users in a workspace have the Grafana <code>Admin</code> or <code>Editor</code>
 */
UpdatePermissionsResponse * GrafanaClient::updatePermissions(const UpdatePermissionsRequest &request)
{
    return qobject_cast<UpdatePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * UpdateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing Amazon Managed Grafana workspace. If you use this operation and omit any optional parameters, the
 * existing values of those parameters are not
 *
 * changed>
 *
 * To modify the user authentication methods that the workspace uses, such as SAML or Amazon Web Services SSO, use <a
 *
 * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspaceAuthentication.html">UpdateWorkspaceAuthentication</a>>
 *
 * To modify which users in the workspace have the <code>Admin</code> and <code>Editor</code> Grafana roles, use <a
 */
UpdateWorkspaceResponse * GrafanaClient::updateWorkspace(const UpdateWorkspaceRequest &request)
{
    return qobject_cast<UpdateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the GrafanaClient service, and returns a pointer to an
 * UpdateWorkspaceAuthenticationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to define the identity provider (IdP) that this workspace authenticates users from, using SAML. You
 * can also map SAML assertion attributes to workspace user information and define which groups in the assertion attribute
 * are to have the <code>Admin</code> and <code>Editor</code> roles in the
 */
UpdateWorkspaceAuthenticationResponse * GrafanaClient::updateWorkspaceAuthentication(const UpdateWorkspaceAuthenticationRequest &request)
{
    return qobject_cast<UpdateWorkspaceAuthenticationResponse *>(send(request));
}

/*!
 * \class QtAws::Grafana::GrafanaClientPrivate
 * \brief The GrafanaClientPrivate class provides private implementation for GrafanaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaClientPrivate object with public implementation \a q.
 */
GrafanaClientPrivate::GrafanaClientPrivate(GrafanaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Grafana
} // namespace QtAws
