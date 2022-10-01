// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworksiterequest.h"
#include "deletenetworksiterequest_p.h"
#include "deletenetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteRequest
 * \brief The DeleteNetworkSiteRequest class provides an interface for PrivateNetworks DeleteNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkSiteRequest::DeleteNetworkSiteRequest(const DeleteNetworkSiteRequest &other)
    : PrivateNetworksRequest(new DeleteNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkSiteRequest object.
 */
DeleteNetworkSiteRequest::DeleteNetworkSiteRequest()
    : PrivateNetworksRequest(new DeleteNetworkSiteRequestPrivate(PrivateNetworksRequest::DeleteNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkSiteRequestPrivate
 * \brief The DeleteNetworkSiteRequestPrivate class provides private implementation for DeleteNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
DeleteNetworkSiteRequestPrivate::DeleteNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, DeleteNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkSiteRequest
 * class' copy constructor.
 */
DeleteNetworkSiteRequestPrivate::DeleteNetworkSiteRequestPrivate(
    const DeleteNetworkSiteRequestPrivate &other, DeleteNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
