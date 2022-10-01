// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomergatewayassociationsrequest.h"
#include "getcustomergatewayassociationsrequest_p.h"
#include "getcustomergatewayassociationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetCustomerGatewayAssociationsRequest
 * \brief The GetCustomerGatewayAssociationsRequest class provides an interface for NetworkManager GetCustomerGatewayAssociations requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getCustomerGatewayAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomerGatewayAssociationsRequest::GetCustomerGatewayAssociationsRequest(const GetCustomerGatewayAssociationsRequest &other)
    : NetworkManagerRequest(new GetCustomerGatewayAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomerGatewayAssociationsRequest object.
 */
GetCustomerGatewayAssociationsRequest::GetCustomerGatewayAssociationsRequest()
    : NetworkManagerRequest(new GetCustomerGatewayAssociationsRequestPrivate(NetworkManagerRequest::GetCustomerGatewayAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCustomerGatewayAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCustomerGatewayAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCustomerGatewayAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetCustomerGatewayAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetCustomerGatewayAssociationsRequestPrivate
 * \brief The GetCustomerGatewayAssociationsRequestPrivate class provides private implementation for GetCustomerGatewayAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetCustomerGatewayAssociationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetCustomerGatewayAssociationsRequestPrivate::GetCustomerGatewayAssociationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetCustomerGatewayAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCustomerGatewayAssociationsRequest
 * class' copy constructor.
 */
GetCustomerGatewayAssociationsRequestPrivate::GetCustomerGatewayAssociationsRequestPrivate(
    const GetCustomerGatewayAssociationsRequestPrivate &other, GetCustomerGatewayAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
