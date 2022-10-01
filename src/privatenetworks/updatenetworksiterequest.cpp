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
