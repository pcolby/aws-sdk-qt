// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceidentifiersrequest.h"
#include "listdeviceidentifiersrequest_p.h"
#include "listdeviceidentifiersresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersRequest
 * \brief The ListDeviceIdentifiersRequest class provides an interface for PrivateNetworks ListDeviceIdentifiers requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::listDeviceIdentifiers
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceIdentifiersRequest::ListDeviceIdentifiersRequest(const ListDeviceIdentifiersRequest &other)
    : PrivateNetworksRequest(new ListDeviceIdentifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceIdentifiersRequest object.
 */
ListDeviceIdentifiersRequest::ListDeviceIdentifiersRequest()
    : PrivateNetworksRequest(new ListDeviceIdentifiersRequestPrivate(PrivateNetworksRequest::ListDeviceIdentifiersAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceIdentifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceIdentifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceIdentifiersRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceIdentifiersResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ListDeviceIdentifiersRequestPrivate
 * \brief The ListDeviceIdentifiersRequestPrivate class provides private implementation for ListDeviceIdentifiersRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ListDeviceIdentifiersRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ListDeviceIdentifiersRequestPrivate::ListDeviceIdentifiersRequestPrivate(
    const PrivateNetworksRequest::Action action, ListDeviceIdentifiersRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceIdentifiersRequest
 * class' copy constructor.
 */
ListDeviceIdentifiersRequestPrivate::ListDeviceIdentifiersRequestPrivate(
    const ListDeviceIdentifiersRequestPrivate &other, ListDeviceIdentifiersRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
