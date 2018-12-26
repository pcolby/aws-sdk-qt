/*
    Copyright 2013-2018 Paul Colby

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

#include "apigatewaymanagementapiclient.h"
#include "apigatewaymanagementapiclient_p.h"

#include "core/awssignaturev4.h"
#include "posttoconnectionrequest.h"
#include "posttoconnectionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApiGatewayManagementApi
 * \brief Contains classess for accessing AmazonApiGatewayManagementApi.
 *
 * \inmodule QtAwsApiGatewayManagementApi
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApiGatewayManagementApi {

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiClient
 * \brief The ApiGatewayManagementApiClient class provides access to the AmazonApiGatewayManagementApi service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayManagementApi
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 */

/*!
 * \brief Constructs a ApiGatewayManagementApiClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayManagementApiClientPrivate(this), parent)
{
    Q_D(ApiGatewayManagementApiClient);
    d->apiVersion = QStringLiteral("2018-11-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("execute-api");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmazonApiGatewayManagementApi");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * \overload ApiGatewayManagementApiClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApiGatewayManagementApiClient::ApiGatewayManagementApiClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayManagementApiClientPrivate(this), parent)
{
    Q_D(ApiGatewayManagementApiClient);
    d->apiVersion = QStringLiteral("2018-11-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("execute-api");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmazonApiGatewayManagementApi");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * Sends \a request to the ApiGatewayManagementApiClient service, and returns a pointer to an
 * PostToConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends the provided data to the specified
 */
PostToConnectionResponse * ApiGatewayManagementApiClient::postToConnection(const PostToConnectionRequest &request)
{
    return qobject_cast<PostToConnectionResponse *>(send(request));
}

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiClientPrivate
 * \brief The ApiGatewayManagementApiClientPrivate class provides private implementation for ApiGatewayManagementApiClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * Constructs a ApiGatewayManagementApiClientPrivate object with public implementation \a q.
 */
ApiGatewayManagementApiClientPrivate::ApiGatewayManagementApiClientPrivate(ApiGatewayManagementApiClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApiGatewayManagementApi
} // namespace QtAws
