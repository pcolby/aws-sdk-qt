/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
