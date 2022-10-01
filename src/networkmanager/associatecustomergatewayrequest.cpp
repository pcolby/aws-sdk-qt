// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatecustomergatewayrequest.h"
#include "associatecustomergatewayrequest_p.h"
#include "associatecustomergatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayRequest
 * \brief The AssociateCustomerGatewayRequest class provides an interface for NetworkManager AssociateCustomerGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateCustomerGateway
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateCustomerGatewayRequest::AssociateCustomerGatewayRequest(const AssociateCustomerGatewayRequest &other)
    : NetworkManagerRequest(new AssociateCustomerGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateCustomerGatewayRequest object.
 */
AssociateCustomerGatewayRequest::AssociateCustomerGatewayRequest()
    : NetworkManagerRequest(new AssociateCustomerGatewayRequestPrivate(NetworkManagerRequest::AssociateCustomerGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateCustomerGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateCustomerGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateCustomerGatewayRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCustomerGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateCustomerGatewayRequestPrivate
 * \brief The AssociateCustomerGatewayRequestPrivate class provides private implementation for AssociateCustomerGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateCustomerGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateCustomerGatewayRequestPrivate::AssociateCustomerGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateCustomerGatewayRequest
 * class' copy constructor.
 */
AssociateCustomerGatewayRequestPrivate::AssociateCustomerGatewayRequestPrivate(
    const AssociateCustomerGatewayRequestPrivate &other, AssociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
