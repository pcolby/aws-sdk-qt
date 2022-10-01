// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listordersrequest.h"
#include "listordersrequest_p.h"
#include "listordersresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListOrdersRequest
 * \brief The ListOrdersRequest class provides an interface for PrivateNetworks ListOrders requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listOrders
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrdersRequest::ListOrdersRequest(const ListOrdersRequest &other)
    : PrivateNetworksRequest(new ListOrdersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrdersRequest object.
 */
ListOrdersRequest::ListOrdersRequest()
    : PrivateNetworksRequest(new ListOrdersRequestPrivate(PrivateNetworksRequest::ListOrdersAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrdersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrdersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrdersRequest::response(QNetworkReply * const reply) const
{
    return new ListOrdersResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListOrdersRequestPrivate
 * \brief The ListOrdersRequestPrivate class provides private implementation for ListOrdersRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListOrdersRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const PrivateNetworksRequest::Action action, ListOrdersRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrdersRequest
 * class' copy constructor.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const ListOrdersRequestPrivate &other, ListOrdersRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
