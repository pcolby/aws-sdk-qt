// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatecustomergatewayrequest.h"
#include "disassociatecustomergatewayrequest_p.h"
#include "disassociatecustomergatewayresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateCustomerGatewayRequest
 * \brief The DisassociateCustomerGatewayRequest class provides an interface for NetworkManager DisassociateCustomerGateway requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateCustomerGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateCustomerGatewayRequest::DisassociateCustomerGatewayRequest(const DisassociateCustomerGatewayRequest &other)
    : NetworkManagerRequest(new DisassociateCustomerGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateCustomerGatewayRequest object.
 */
DisassociateCustomerGatewayRequest::DisassociateCustomerGatewayRequest()
    : NetworkManagerRequest(new DisassociateCustomerGatewayRequestPrivate(NetworkManagerRequest::DisassociateCustomerGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateCustomerGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateCustomerGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateCustomerGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateCustomerGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DisassociateCustomerGatewayRequestPrivate
 * \brief The DisassociateCustomerGatewayRequestPrivate class provides private implementation for DisassociateCustomerGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateCustomerGatewayRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DisassociateCustomerGatewayRequestPrivate::DisassociateCustomerGatewayRequestPrivate(
    const NetworkManagerRequest::Action action, DisassociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateCustomerGatewayRequest
 * class' copy constructor.
 */
DisassociateCustomerGatewayRequestPrivate::DisassociateCustomerGatewayRequestPrivate(
    const DisassociateCustomerGatewayRequestPrivate &other, DisassociateCustomerGatewayRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
