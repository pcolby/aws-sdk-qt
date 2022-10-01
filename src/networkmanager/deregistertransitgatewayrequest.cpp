// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregistertransitgatewayrequest.h"
#include "deregistertransitgatewayrequest_p.h"
#include "deregistertransitgatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayRequest
 * \brief The DeregisterTransitGatewayRequest class provides an interface for NetworkManager DeregisterTransitGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deregisterTransitGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterTransitGatewayRequest::DeregisterTransitGatewayRequest(const DeregisterTransitGatewayRequest &other)
    : NetworkManagerRequest(new DeregisterTransitGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterTransitGatewayRequest object.
 */
DeregisterTransitGatewayRequest::DeregisterTransitGatewayRequest()
    : NetworkManagerRequest(new DeregisterTransitGatewayRequestPrivate(NetworkManagerRequest::DeregisterTransitGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterTransitGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterTransitGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterTransitGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTransitGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeregisterTransitGatewayRequestPrivate
 * \brief The DeregisterTransitGatewayRequestPrivate class provides private implementation for DeregisterTransitGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeregisterTransitGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeregisterTransitGatewayRequestPrivate::DeregisterTransitGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, DeregisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTransitGatewayRequest
 * class' copy constructor.
 */
DeregisterTransitGatewayRequestPrivate::DeregisterTransitGatewayRequestPrivate(
    const DeregisterTransitGatewayRequestPrivate &other, DeregisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
