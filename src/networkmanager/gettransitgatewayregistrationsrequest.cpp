// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewayregistrationsrequest.h"
#include "gettransitgatewayregistrationsrequest_p.h"
#include "gettransitgatewayregistrationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsRequest
 * \brief The GetTransitGatewayRegistrationsRequest class provides an interface for NetworkManager GetTransitGatewayRegistrations requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayRegistrations
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayRegistrationsRequest::GetTransitGatewayRegistrationsRequest(const GetTransitGatewayRegistrationsRequest &other)
    : NetworkManagerRequest(new GetTransitGatewayRegistrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayRegistrationsRequest object.
 */
GetTransitGatewayRegistrationsRequest::GetTransitGatewayRegistrationsRequest()
    : NetworkManagerRequest(new GetTransitGatewayRegistrationsRequestPrivate(NetworkManagerRequest::GetTransitGatewayRegistrationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayRegistrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayRegistrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayRegistrationsRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayRegistrationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRegistrationsRequestPrivate
 * \brief The GetTransitGatewayRegistrationsRequestPrivate class provides private implementation for GetTransitGatewayRegistrationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRegistrationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetTransitGatewayRegistrationsRequestPrivate::GetTransitGatewayRegistrationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetTransitGatewayRegistrationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayRegistrationsRequest
 * class' copy constructor.
 */
GetTransitGatewayRegistrationsRequestPrivate::GetTransitGatewayRegistrationsRequestPrivate(
    const GetTransitGatewayRegistrationsRequestPrivate &other, GetTransitGatewayRegistrationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
