// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworksiterequest.h"
#include "getnetworksiterequest_p.h"
#include "getnetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteRequest
 * \brief The GetNetworkSiteRequest class provides an interface for PrivateNetworks GetNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkSiteRequest::GetNetworkSiteRequest(const GetNetworkSiteRequest &other)
    : PrivateNetworksRequest(new GetNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkSiteRequest object.
 */
GetNetworkSiteRequest::GetNetworkSiteRequest()
    : PrivateNetworksRequest(new GetNetworkSiteRequestPrivate(PrivateNetworksRequest::GetNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetNetworkSiteRequestPrivate
 * \brief The GetNetworkSiteRequestPrivate class provides private implementation for GetNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetNetworkSiteRequestPrivate::GetNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, GetNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkSiteRequest
 * class' copy constructor.
 */
GetNetworkSiteRequestPrivate::GetNetworkSiteRequestPrivate(
    const GetNetworkSiteRequestPrivate &other, GetNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
