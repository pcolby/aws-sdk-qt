// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorderrequest.h"
#include "getorderrequest_p.h"
#include "getorderresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetOrderRequest
 * \brief The GetOrderRequest class provides an interface for PrivateNetworks GetOrder requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getOrder
 */

/*!
 * Constructs a copy of \a other.
 */
GetOrderRequest::GetOrderRequest(const GetOrderRequest &other)
    : PrivateNetworksRequest(new GetOrderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOrderRequest object.
 */
GetOrderRequest::GetOrderRequest()
    : PrivateNetworksRequest(new GetOrderRequestPrivate(PrivateNetworksRequest::GetOrderAction, this))
{

}

/*!
 * \reimp
 */
bool GetOrderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOrderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOrderRequest::response(QNetworkReply * const reply) const
{
    return new GetOrderResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetOrderRequestPrivate
 * \brief The GetOrderRequestPrivate class provides private implementation for GetOrderRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetOrderRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetOrderRequestPrivate::GetOrderRequestPrivate(
    const PrivateNetworksRequest::Action action, GetOrderRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOrderRequest
 * class' copy constructor.
 */
GetOrderRequestPrivate::GetOrderRequestPrivate(
    const GetOrderRequestPrivate &other, GetOrderRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
