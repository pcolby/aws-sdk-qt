// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworkrequest.h"
#include "deletenetworkrequest_p.h"
#include "deletenetworkresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkRequest
 * \brief The DeleteNetworkRequest class provides an interface for PrivateNetworks DeleteNetwork requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkRequest::DeleteNetworkRequest(const DeleteNetworkRequest &other)
    : PrivateNetworksRequest(new DeleteNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkRequest object.
 */
DeleteNetworkRequest::DeleteNetworkRequest()
    : PrivateNetworksRequest(new DeleteNetworkRequestPrivate(PrivateNetworksRequest::DeleteNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkRequestPrivate
 * \brief The DeleteNetworkRequestPrivate class provides private implementation for DeleteNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
DeleteNetworkRequestPrivate::DeleteNetworkRequestPrivate(
    const PrivateNetworksRequest::Action action, DeleteNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkRequest
 * class' copy constructor.
 */
DeleteNetworkRequestPrivate::DeleteNetworkRequestPrivate(
    const DeleteNetworkRequestPrivate &other, DeleteNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
