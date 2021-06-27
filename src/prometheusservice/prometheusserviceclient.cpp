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

#include "prometheusserviceclient.h"
#include "prometheusserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "createworkspacerequest.h"
#include "createworkspaceresponse.h"
#include "deleteworkspacerequest.h"
#include "deleteworkspaceresponse.h"
#include "describeworkspacerequest.h"
#include "describeworkspaceresponse.h"
#include "listworkspacesrequest.h"
#include "listworkspacesresponse.h"
#include "updateworkspacealiasrequest.h"
#include "updateworkspacealiasresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PrometheusService
 * \brief Contains classess for accessing Amazon Prometheus Service.
 *
 * \inmodule QtAwsPrometheusService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::PrometheusServiceClient
 * \brief The PrometheusServiceClient class provides access to the Amazon Prometheus Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 */

/*!
 * \brief Constructs a PrometheusServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PrometheusServiceClient::PrometheusServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-01"),
    QStringLiteral("aps"),
    QStringLiteral("Amazon Prometheus Service"),
    QStringLiteral("aps"),
    parent), d_ptr(new PrometheusServiceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload PrometheusServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PrometheusServiceClient::PrometheusServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-01"),
    QStringLiteral("aps"),
    QStringLiteral("Amazon Prometheus Service"),
    QStringLiteral("aps"),
    parent), d_ptr(new PrometheusServiceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the PrometheusServiceClient service, and returns a pointer to an
 * CreateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new AMP
 */
CreateWorkspaceResponse * PrometheusServiceClient::createWorkspace(const CreateWorkspaceRequest &request)
{
    return qobject_cast<CreateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrometheusServiceClient service, and returns a pointer to an
 * DeleteWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AMP
 */
DeleteWorkspaceResponse * PrometheusServiceClient::deleteWorkspace(const DeleteWorkspaceRequest &request)
{
    return qobject_cast<DeleteWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrometheusServiceClient service, and returns a pointer to an
 * DescribeWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing AMP
 */
DescribeWorkspaceResponse * PrometheusServiceClient::describeWorkspace(const DescribeWorkspaceRequest &request)
{
    return qobject_cast<DescribeWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the PrometheusServiceClient service, and returns a pointer to an
 * ListWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all AMP workspaces, including workspaces being created or
 */
ListWorkspacesResponse * PrometheusServiceClient::listWorkspaces(const ListWorkspacesRequest &request)
{
    return qobject_cast<ListWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the PrometheusServiceClient service, and returns a pointer to an
 * UpdateWorkspaceAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an AMP workspace
 */
UpdateWorkspaceAliasResponse * PrometheusServiceClient::updateWorkspaceAlias(const UpdateWorkspaceAliasRequest &request)
{
    return qobject_cast<UpdateWorkspaceAliasResponse *>(send(request));
}

/*!
 * \class QtAws::PrometheusService::PrometheusServiceClientPrivate
 * \brief The PrometheusServiceClientPrivate class provides private implementation for PrometheusServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a PrometheusServiceClientPrivate object with public implementation \a q.
 */
PrometheusServiceClientPrivate::PrometheusServiceClientPrivate(PrometheusServiceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace PrometheusService
} // namespace QtAws
