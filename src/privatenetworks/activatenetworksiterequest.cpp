// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activatenetworksiterequest.h"
#include "activatenetworksiterequest_p.h"
#include "activatenetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteRequest
 * \brief The ActivateNetworkSiteRequest class provides an interface for PrivateNetworks ActivateNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::activateNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateNetworkSiteRequest::ActivateNetworkSiteRequest(const ActivateNetworkSiteRequest &other)
    : PrivateNetworksRequest(new ActivateNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateNetworkSiteRequest object.
 */
ActivateNetworkSiteRequest::ActivateNetworkSiteRequest()
    : PrivateNetworksRequest(new ActivateNetworkSiteRequestPrivate(PrivateNetworksRequest::ActivateNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new ActivateNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ActivateNetworkSiteRequestPrivate
 * \brief The ActivateNetworkSiteRequestPrivate class provides private implementation for ActivateNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ActivateNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ActivateNetworkSiteRequestPrivate::ActivateNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, ActivateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateNetworkSiteRequest
 * class' copy constructor.
 */
ActivateNetworkSiteRequestPrivate::ActivateNetworkSiteRequestPrivate(
    const ActivateNetworkSiteRequestPrivate &other, ActivateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
