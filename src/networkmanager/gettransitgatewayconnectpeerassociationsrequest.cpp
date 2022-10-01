// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewayconnectpeerassociationsrequest.h"
#include "gettransitgatewayconnectpeerassociationsrequest_p.h"
#include "gettransitgatewayconnectpeerassociationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayConnectPeerAssociationsRequest
 * \brief The GetTransitGatewayConnectPeerAssociationsRequest class provides an interface for NetworkManager GetTransitGatewayConnectPeerAssociations requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayConnectPeerAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayConnectPeerAssociationsRequest::GetTransitGatewayConnectPeerAssociationsRequest(const GetTransitGatewayConnectPeerAssociationsRequest &other)
    : NetworkManagerRequest(new GetTransitGatewayConnectPeerAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayConnectPeerAssociationsRequest object.
 */
GetTransitGatewayConnectPeerAssociationsRequest::GetTransitGatewayConnectPeerAssociationsRequest()
    : NetworkManagerRequest(new GetTransitGatewayConnectPeerAssociationsRequestPrivate(NetworkManagerRequest::GetTransitGatewayConnectPeerAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayConnectPeerAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayConnectPeerAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayConnectPeerAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayConnectPeerAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayConnectPeerAssociationsRequestPrivate
 * \brief The GetTransitGatewayConnectPeerAssociationsRequestPrivate class provides private implementation for GetTransitGatewayConnectPeerAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayConnectPeerAssociationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetTransitGatewayConnectPeerAssociationsRequestPrivate::GetTransitGatewayConnectPeerAssociationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetTransitGatewayConnectPeerAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayConnectPeerAssociationsRequest
 * class' copy constructor.
 */
GetTransitGatewayConnectPeerAssociationsRequestPrivate::GetTransitGatewayConnectPeerAssociationsRequestPrivate(
    const GetTransitGatewayConnectPeerAssociationsRequestPrivate &other, GetTransitGatewayConnectPeerAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
