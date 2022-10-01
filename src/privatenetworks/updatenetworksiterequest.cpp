// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksiterequest.h"
#include "updatenetworksiterequest_p.h"
#include "updatenetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSiteRequest
 * \brief The UpdateNetworkSiteRequest class provides an interface for PrivateNetworks UpdateNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::updateNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkSiteRequest::UpdateNetworkSiteRequest(const UpdateNetworkSiteRequest &other)
    : PrivateNetworksRequest(new UpdateNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkSiteRequest object.
 */
UpdateNetworkSiteRequest::UpdateNetworkSiteRequest()
    : PrivateNetworksRequest(new UpdateNetworkSiteRequestPrivate(PrivateNetworksRequest::UpdateNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSiteRequestPrivate
 * \brief The UpdateNetworkSiteRequestPrivate class provides private implementation for UpdateNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a UpdateNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
UpdateNetworkSiteRequestPrivate::UpdateNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, UpdateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkSiteRequest
 * class' copy constructor.
 */
UpdateNetworkSiteRequestPrivate::UpdateNetworkSiteRequestPrivate(
    const UpdateNetworkSiteRequestPrivate &other, UpdateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
