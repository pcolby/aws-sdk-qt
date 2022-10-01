// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworksrequest.h"
#include "listnetworksrequest_p.h"
#include "listnetworksresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListNetworksRequest
 * \brief The ListNetworksRequest class provides an interface for PrivateNetworks ListNetworks requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listNetworks
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworksRequest::ListNetworksRequest(const ListNetworksRequest &other)
    : PrivateNetworksRequest(new ListNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworksRequest object.
 */
ListNetworksRequest::ListNetworksRequest()
    : PrivateNetworksRequest(new ListNetworksRequestPrivate(PrivateNetworksRequest::ListNetworksAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworksRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworksResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListNetworksRequestPrivate
 * \brief The ListNetworksRequestPrivate class provides private implementation for ListNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListNetworksRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const PrivateNetworksRequest::Action action, ListNetworksRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworksRequest
 * class' copy constructor.
 */
ListNetworksRequestPrivate::ListNetworksRequestPrivate(
    const ListNetworksRequestPrivate &other, ListNetworksRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
