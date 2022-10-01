// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registertransitgatewayrequest.h"
#include "registertransitgatewayrequest_p.h"
#include "registertransitgatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayRequest
 * \brief The RegisterTransitGatewayRequest class provides an interface for NetworkManager RegisterTransitGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::registerTransitGateway
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterTransitGatewayRequest::RegisterTransitGatewayRequest(const RegisterTransitGatewayRequest &other)
    : NetworkManagerRequest(new RegisterTransitGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterTransitGatewayRequest object.
 */
RegisterTransitGatewayRequest::RegisterTransitGatewayRequest()
    : NetworkManagerRequest(new RegisterTransitGatewayRequestPrivate(NetworkManagerRequest::RegisterTransitGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterTransitGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterTransitGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterTransitGatewayRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTransitGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::RegisterTransitGatewayRequestPrivate
 * \brief The RegisterTransitGatewayRequestPrivate class provides private implementation for RegisterTransitGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a RegisterTransitGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
RegisterTransitGatewayRequestPrivate::RegisterTransitGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, RegisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterTransitGatewayRequest
 * class' copy constructor.
 */
RegisterTransitGatewayRequestPrivate::RegisterTransitGatewayRequestPrivate(
    const RegisterTransitGatewayRequestPrivate &other, RegisterTransitGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
