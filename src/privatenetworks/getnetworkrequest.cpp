// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkrequest.h"
#include "getnetworkrequest_p.h"
#include "getnetworkresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkRequest
 * \brief The GetNetworkRequest class provides an interface for PrivateNetworks GetNetwork requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkRequest::GetNetworkRequest(const GetNetworkRequest &other)
    : PrivateNetworksRequest(new GetNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkRequest object.
 */
GetNetworkRequest::GetNetworkRequest()
    : PrivateNetworksRequest(new GetNetworkRequestPrivate(PrivateNetworksRequest::GetNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkRequestPrivate
 * \brief The GetNetworkRequestPrivate class provides private implementation for GetNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const PrivateNetworksRequest::Action action, GetNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkRequest
 * class' copy constructor.
 */
GetNetworkRequestPrivate::GetNetworkRequestPrivate(
    const GetNetworkRequestPrivate &other, GetNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
