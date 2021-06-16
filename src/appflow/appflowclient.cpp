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

#include "appflowclient.h"
#include "appflowclient_p.h"

#include "core/awssignaturev4.h"
#include "createconnectorprofilerequest.h"
#include "createconnectorprofileresponse.h"
#include "createflowrequest.h"
#include "createflowresponse.h"
#include "deleteconnectorprofilerequest.h"
#include "deleteconnectorprofileresponse.h"
#include "deleteflowrequest.h"
#include "deleteflowresponse.h"
#include "describeconnectorentityrequest.h"
#include "describeconnectorentityresponse.h"
#include "describeconnectorprofilesrequest.h"
#include "describeconnectorprofilesresponse.h"
#include "describeconnectorsrequest.h"
#include "describeconnectorsresponse.h"
#include "describeflowrequest.h"
#include "describeflowresponse.h"
#include "describeflowexecutionrecordsrequest.h"
#include "describeflowexecutionrecordsresponse.h"
#include "listconnectorentitiesrequest.h"
#include "listconnectorentitiesresponse.h"
#include "listflowsrequest.h"
#include "listflowsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startflowrequest.h"
#include "startflowresponse.h"
#include "stopflowrequest.h"
#include "stopflowresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconnectorprofilerequest.h"
#include "updateconnectorprofileresponse.h"
#include "updateflowrequest.h"
#include "updateflowresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Appflow
 * \brief Contains classess for accessing Amazon Appflow.
 *
 * \inmodule QtAwsAppflow
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::AppflowClient
 * \brief The AppflowClient class provides access to the Amazon Appflow service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppflow
 *
 *  Welcome to the Amazon AppFlow API reference. This guide is for developers who need detailed information about the Amazon
 *  AppFlow API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Amazon AppFlow is a fully managed integration service that enables you to securely transfer data between software as a
 *  service (SaaS) applications like Salesforce, Marketo, Slack, and ServiceNow, and AWS services like Amazon S3 and Amazon
 *  Redshift.
 * 
 *  </p
 * 
 *  Use the following links to get started on the Amazon AppFlow
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Operations.html">Actions</a>: An alphabetical list of
 *  all Amazon AppFlow API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Types.html">Data types</a>: An alphabetical list of
 *  all Amazon AppFlow data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonParameters.html">Common parameters</a>: Parameters
 *  that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonErrors.html">Common errors</a>: Client and server
 *  errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Amazon AppFlow, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/appflow/latest/userguide/what-is-appflow.html">Amazon AppFlow User
 * 
 *  Guide</a>>
 * 
 *  Amazon AppFlow API users can use vendor-specific mechanisms for OAuth, and include applicable OAuth attributes (such as
 *  <code>auth-code</code> and <code>redirecturi</code>) with the connector-specific <code>ConnectorProfileProperties</code>
 *  when creating a new connector profile using Amazon AppFlow API operations. For example, Salesforce users can refer to
 *  the <a href="https://help.salesforce.com/articleView?id=remoteaccess_authenticate.htm"> <i>Authorize Apps with OAuth</i>
 *  </a>
 */

/*!
 * \brief Constructs a AppflowClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppflowClient::AppflowClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppflowClientPrivate(this), parent)
{
    Q_D(AppflowClient);
    d->apiVersion = QStringLiteral("2020-08-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appflow");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Appflow");
    d->serviceName = QStringLiteral("appflow");
}

/*!
 * \overload AppflowClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppflowClient::AppflowClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppflowClientPrivate(this), parent)
{
    Q_D(AppflowClient);
    d->apiVersion = QStringLiteral("2020-08-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appflow");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Appflow");
    d->serviceName = QStringLiteral("appflow");
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * CreateConnectorProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new connector profile associated with your AWS account. There is a soft quota of 100 connector profiles per
 * AWS account. If you need more connector profiles than this quota allows, you can submit a request to the Amazon AppFlow
 * team through the Amazon AppFlow support channel.
 */
CreateConnectorProfileResponse * AppflowClient::createConnectorProfile(const CreateConnectorProfileRequest &request)
{
    return qobject_cast<CreateConnectorProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * CreateFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables your application to create a new flow using Amazon AppFlow. You must create a connector profile before calling
 * this API. Please note that the Request Syntax below shows syntax for multiple destinations, however, you can only
 * transfer data to one item in this list at a time. Amazon AppFlow does not currently support flows to multiple
 * destinations at once.
 */
CreateFlowResponse * AppflowClient::createFlow(const CreateFlowRequest &request)
{
    return qobject_cast<CreateFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DeleteConnectorProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables you to delete an existing connector profile.
 */
DeleteConnectorProfileResponse * AppflowClient::deleteConnectorProfile(const DeleteConnectorProfileRequest &request)
{
    return qobject_cast<DeleteConnectorProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DeleteFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables your application to delete an existing flow. Before deleting the flow, Amazon AppFlow validates the request by
 * checking the flow configuration and status. You can delete flows one at a time.
 */
DeleteFlowResponse * AppflowClient::deleteFlow(const DeleteFlowRequest &request)
{
    return qobject_cast<DeleteFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DescribeConnectorEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details regarding the entity used with the connector, with a description of the data model for each entity.
 */
DescribeConnectorEntityResponse * AppflowClient::describeConnectorEntity(const DescribeConnectorEntityRequest &request)
{
    return qobject_cast<DescribeConnectorEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DescribeConnectorProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>connector-profile</code> details matching the provided <code>connector-profile</code> names and
 * <code>connector-types</code>. Both input lists are optional, and you can use them to filter the result.
 *
 * </p
 *
 * If no names or <code>connector-types</code> are provided, returns all connector profiles in a paginated form. If there
 * is no match, this operation returns an empty
 */
DescribeConnectorProfilesResponse * AppflowClient::describeConnectorProfiles(const DescribeConnectorProfilesRequest &request)
{
    return qobject_cast<DescribeConnectorProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DescribeConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connectors vended by Amazon AppFlow for specified connector types. If you don't specify a connector type,
 * this operation describes all connectors vended by Amazon AppFlow. If there are more connectors than can be returned in
 * one page, the response contains a <code>nextToken</code> object, which can be be passed in to the next call to the
 * <code>DescribeConnectors</code> API operation to retrieve the next page.
 */
DescribeConnectorsResponse * AppflowClient::describeConnectors(const DescribeConnectorsRequest &request)
{
    return qobject_cast<DescribeConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DescribeFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a description of the specified flow.
 */
DescribeFlowResponse * AppflowClient::describeFlow(const DescribeFlowRequest &request)
{
    return qobject_cast<DescribeFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * DescribeFlowExecutionRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the execution history of the flow.
 */
DescribeFlowExecutionRecordsResponse * AppflowClient::describeFlowExecutionRecords(const DescribeFlowExecutionRecordsRequest &request)
{
    return qobject_cast<DescribeFlowExecutionRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * ListConnectorEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of available connector entities supported by Amazon AppFlow. For example, you can query Salesforce for
 * <i>Account</i> and <i>Opportunity</i> entities, or query ServiceNow for the <i>Incident</i> entity.
 */
ListConnectorEntitiesResponse * AppflowClient::listConnectorEntities(const ListConnectorEntitiesRequest &request)
{
    return qobject_cast<ListConnectorEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * ListFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the flows associated with your account.
 */
ListFlowsResponse * AppflowClient::listFlows(const ListFlowsRequest &request)
{
    return qobject_cast<ListFlowsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the tags that are associated with a specified flow.
 */
ListTagsForResourceResponse * AppflowClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * StartFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates an existing flow. For on-demand flows, this operation runs the flow immediately. For schedule and
 * event-triggered flows, this operation activates the flow.
 */
StartFlowResponse * AppflowClient::startFlow(const StartFlowRequest &request)
{
    return qobject_cast<StartFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * StopFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates the existing flow. For on-demand flows, this operation returns an <code>unsupportedOperationException</code>
 * error message. For schedule and event-triggered flows, this operation deactivates the flow.
 */
StopFlowResponse * AppflowClient::stopFlow(const StopFlowRequest &request)
{
    return qobject_cast<StopFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a tag to the specified flow.
 */
TagResourceResponse * AppflowClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from the specified flow.
 */
UntagResourceResponse * AppflowClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * UpdateConnectorProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a given connector profile associated with your account.
 */
UpdateConnectorProfileResponse * AppflowClient::updateConnectorProfile(const UpdateConnectorProfileRequest &request)
{
    return qobject_cast<UpdateConnectorProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AppflowClient service, and returns a pointer to an
 * UpdateFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing flow.
 */
UpdateFlowResponse * AppflowClient::updateFlow(const UpdateFlowRequest &request)
{
    return qobject_cast<UpdateFlowResponse *>(send(request));
}

/*!
 * \class QtAws::Appflow::AppflowClientPrivate
 * \brief The AppflowClientPrivate class provides private implementation for AppflowClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a AppflowClientPrivate object with public implementation \a q.
 */
AppflowClientPrivate::AppflowClientPrivate(AppflowClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Appflow
} // namespace QtAws
