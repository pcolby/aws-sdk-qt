// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworkresourcesrequest.h"
#include "listnetworkresourcesrequest_p.h"
#include "listnetworkresourcesresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworkResourcesRequest
 * \brief The ListNetworkResourcesRequest class provides an interface for PrivateNetworks ListNetworkResources requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworkResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworkResourcesRequest::ListNetworkResourcesRequest(const ListNetworkResourcesRequest &other)
    : PrivateNetworksRequest(new ListNetworkResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworkResourcesRequest object.
 */
ListNetworkResourcesRequest::ListNetworkResourcesRequest()
    : PrivateNetworksRequest(new ListNetworkResourcesRequestPrivate(PrivateNetworksRequest::ListNetworkResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworkResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworkResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworkResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworkResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworkResourcesRequestPrivate
 * \brief The ListNetworkResourcesRequestPrivate class provides private implementation for ListNetworkResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworkResourcesRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListNetworkResourcesRequestPrivate::ListNetworkResourcesRequestPrivate(
    const PrivateNetworksRequest::Action action, ListNetworkResourcesRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworkResourcesRequest
 * class' copy constructor.
 */
ListNetworkResourcesRequestPrivate::ListNetworkResourcesRequestPrivate(
    const ListNetworkResourcesRequestPrivate &other, ListNetworkResourcesRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
