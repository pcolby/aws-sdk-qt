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

#include "ampclient.h"
#include "ampclient_p.h"

#include "core/awssignaturev4.h"
#include "createalertmanagerdefinitionrequest.h"
#include "createalertmanagerdefinitionresponse.h"
#include "createloggingconfigurationrequest.h"
#include "createloggingconfigurationresponse.h"
#include "createrulegroupsnamespacerequest.h"
#include "createrulegroupsnamespaceresponse.h"
#include "createworkspacerequest.h"
#include "createworkspaceresponse.h"
#include "deletealertmanagerdefinitionrequest.h"
#include "deletealertmanagerdefinitionresponse.h"
#include "deleteloggingconfigurationrequest.h"
#include "deleteloggingconfigurationresponse.h"
#include "deleterulegroupsnamespacerequest.h"
#include "deleterulegroupsnamespaceresponse.h"
#include "deleteworkspacerequest.h"
#include "deleteworkspaceresponse.h"
#include "describealertmanagerdefinitionrequest.h"
#include "describealertmanagerdefinitionresponse.h"
#include "describeloggingconfigurationrequest.h"
#include "describeloggingconfigurationresponse.h"
#include "describerulegroupsnamespacerequest.h"
#include "describerulegroupsnamespaceresponse.h"
#include "describeworkspacerequest.h"
#include "describeworkspaceresponse.h"
#include "listrulegroupsnamespacesrequest.h"
#include "listrulegroupsnamespacesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworkspacesrequest.h"
#include "listworkspacesresponse.h"
#include "putalertmanagerdefinitionrequest.h"
#include "putalertmanagerdefinitionresponse.h"
#include "putrulegroupsnamespacerequest.h"
#include "putrulegroupsnamespaceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateloggingconfigurationrequest.h"
#include "updateloggingconfigurationresponse.h"
#include "updateworkspacealiasrequest.h"
#include "updateworkspacealiasresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Amp
 * \brief Contains classess for accessing Amazon Prometheus Service.
 *
 * \inmodule QtAwsAmp
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::AmpClient
 * \brief The AmpClient class provides access to the Amazon Prometheus Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmp
 *
 */

/*!
 * \brief Constructs a AmpClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AmpClient::AmpClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmpClientPrivate(this), parent)
{
    Q_D(AmpClient);
    d->apiVersion = QStringLiteral("2020-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Prometheus Service");
    d->serviceName = QStringLiteral("aps");
}

/*!
 * \overload AmpClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AmpClient::AmpClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmpClientPrivate(this), parent)
{
    Q_D(AmpClient);
    d->apiVersion = QStringLiteral("2020-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Prometheus Service");
    d->serviceName = QStringLiteral("aps");
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * CreateAlertManagerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateAlertManagerDefinitionResponse * AmpClient::createAlertManagerDefinition(const CreateAlertManagerDefinitionRequest &request)
{
    return qobject_cast<CreateAlertManagerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * CreateLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateLoggingConfigurationResponse * AmpClient::createLoggingConfiguration(const CreateLoggingConfigurationRequest &request)
{
    return qobject_cast<CreateLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * CreateRuleGroupsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateRuleGroupsNamespaceResponse * AmpClient::createRuleGroupsNamespace(const CreateRuleGroupsNamespaceRequest &request)
{
    return qobject_cast<CreateRuleGroupsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * CreateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateWorkspaceResponse * AmpClient::createWorkspace(const CreateWorkspaceRequest &request)
{
    return qobject_cast<CreateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DeleteAlertManagerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteAlertManagerDefinitionResponse * AmpClient::deleteAlertManagerDefinition(const DeleteAlertManagerDefinitionRequest &request)
{
    return qobject_cast<DeleteAlertManagerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DeleteLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteLoggingConfigurationResponse * AmpClient::deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request)
{
    return qobject_cast<DeleteLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DeleteRuleGroupsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteRuleGroupsNamespaceResponse * AmpClient::deleteRuleGroupsNamespace(const DeleteRuleGroupsNamespaceRequest &request)
{
    return qobject_cast<DeleteRuleGroupsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DeleteWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteWorkspaceResponse * AmpClient::deleteWorkspace(const DeleteWorkspaceRequest &request)
{
    return qobject_cast<DeleteWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DescribeAlertManagerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeAlertManagerDefinitionResponse * AmpClient::describeAlertManagerDefinition(const DescribeAlertManagerDefinitionRequest &request)
{
    return qobject_cast<DescribeAlertManagerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DescribeLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeLoggingConfigurationResponse * AmpClient::describeLoggingConfiguration(const DescribeLoggingConfigurationRequest &request)
{
    return qobject_cast<DescribeLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DescribeRuleGroupsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeRuleGroupsNamespaceResponse * AmpClient::describeRuleGroupsNamespace(const DescribeRuleGroupsNamespaceRequest &request)
{
    return qobject_cast<DescribeRuleGroupsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * DescribeWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeWorkspaceResponse * AmpClient::describeWorkspace(const DescribeWorkspaceRequest &request)
{
    return qobject_cast<DescribeWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * ListRuleGroupsNamespacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListRuleGroupsNamespacesResponse * AmpClient::listRuleGroupsNamespaces(const ListRuleGroupsNamespacesRequest &request)
{
    return qobject_cast<ListRuleGroupsNamespacesResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * AmpClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * ListWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListWorkspacesResponse * AmpClient::listWorkspaces(const ListWorkspacesRequest &request)
{
    return qobject_cast<ListWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * PutAlertManagerDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutAlertManagerDefinitionResponse * AmpClient::putAlertManagerDefinition(const PutAlertManagerDefinitionRequest &request)
{
    return qobject_cast<PutAlertManagerDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * PutRuleGroupsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutRuleGroupsNamespaceResponse * AmpClient::putRuleGroupsNamespace(const PutRuleGroupsNamespaceRequest &request)
{
    return qobject_cast<PutRuleGroupsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
TagResourceResponse * AmpClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UntagResourceResponse * AmpClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * UpdateLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateLoggingConfigurationResponse * AmpClient::updateLoggingConfiguration(const UpdateLoggingConfigurationRequest &request)
{
    return qobject_cast<UpdateLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmpClient service, and returns a pointer to an
 * UpdateWorkspaceAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateWorkspaceAliasResponse * AmpClient::updateWorkspaceAlias(const UpdateWorkspaceAliasRequest &request)
{
    return qobject_cast<UpdateWorkspaceAliasResponse *>(send(request));
}

/*!
 * \class QtAws::Amp::AmpClientPrivate
 * \brief The AmpClientPrivate class provides private implementation for AmpClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a AmpClientPrivate object with public implementation \a q.
 */
AmpClientPrivate::AmpClientPrivate(AmpClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Amp
} // namespace QtAws
