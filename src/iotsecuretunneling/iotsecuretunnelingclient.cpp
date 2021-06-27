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

#include "iotsecuretunnelingclient.h"
#include "iotsecuretunnelingclient_p.h"

#include "core/awssignaturev4.h"
#include "closetunnelrequest.h"
#include "closetunnelresponse.h"
#include "describetunnelrequest.h"
#include "describetunnelresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtunnelsrequest.h"
#include "listtunnelsresponse.h"
#include "opentunnelrequest.h"
#include "opentunnelresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTSecureTunneling
 * \brief Contains classess for accessing AWS IoT Secure Tunneling.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingClient
 * \brief The IoTSecureTunnelingClient class provides access to the AWS IoT Secure Tunneling service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>AWS IoT Secure Tunneling</fullname>
 * 
 *  AWS IoT Secure Tunnling enables you to create remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how AWS IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS IoT Secure
 */

/*!
 * \brief Constructs a IoTSecureTunnelingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTSecureTunnelingClient::IoTSecureTunnelingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-10-05"),
    QStringLiteral("api.tunneling.iot"),
    QStringLiteral("AWS IoT Secure Tunneling"),
    QStringLiteral("IoTSecuredTunneling"),
    parent), d_ptr(new IoTSecureTunnelingClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IoTSecureTunnelingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTSecureTunnelingClient::IoTSecureTunnelingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-10-05"),
    QStringLiteral("api.tunneling.iot"),
    QStringLiteral("AWS IoT Secure Tunneling"),
    QStringLiteral("IoTSecuredTunneling"),
    parent), d_ptr(new IoTSecureTunnelingClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * CloseTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Closes a tunnel identified by the unique tunnel id. When a <code>CloseTunnel</code> request is received, we close the
 * WebSocket connections between the client and proxy server so no data can be
 */
CloseTunnelResponse * IoTSecureTunnelingClient::closeTunnel(const CloseTunnelRequest &request)
{
    return qobject_cast<CloseTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * DescribeTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a tunnel identified by the unique tunnel
 */
DescribeTunnelResponse * IoTSecureTunnelingClient::describeTunnel(const DescribeTunnelRequest &request)
{
    return qobject_cast<DescribeTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * IoTSecureTunnelingClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * ListTunnelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tunnels for an AWS account. Tunnels are listed by creation time in descending order, newer tunnels will be
 * listed before older
 */
ListTunnelsResponse * IoTSecureTunnelingClient::listTunnels(const ListTunnelsRequest &request)
{
    return qobject_cast<ListTunnelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * OpenTunnelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new tunnel, and returns two client access tokens for clients to use to connect to the AWS IoT Secure Tunneling
 * proxy
 */
OpenTunnelResponse * IoTSecureTunnelingClient::openTunnel(const OpenTunnelRequest &request)
{
    return qobject_cast<OpenTunnelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A resource
 */
TagResourceResponse * IoTSecureTunnelingClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSecureTunnelingClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * IoTSecureTunnelingClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::IoTSecureTunneling::IoTSecureTunnelingClientPrivate
 * \brief The IoTSecureTunnelingClientPrivate class provides private implementation for IoTSecureTunnelingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a IoTSecureTunnelingClientPrivate object with public implementation \a q.
 */
IoTSecureTunnelingClientPrivate::IoTSecureTunnelingClientPrivate(IoTSecureTunnelingClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTSecureTunneling
} // namespace QtAws
