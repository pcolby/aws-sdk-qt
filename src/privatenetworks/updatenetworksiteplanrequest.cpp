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

#include "updatenetworksiteplanrequest.h"
#include "updatenetworksiteplanrequest_p.h"
#include "updatenetworksiteplanresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanRequest
 * \brief The UpdateNetworkSitePlanRequest class provides an interface for PrivateNetworks UpdateNetworkSitePlan requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::updateNetworkSitePlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkSitePlanRequest::UpdateNetworkSitePlanRequest(const UpdateNetworkSitePlanRequest &other)
    : PrivateNetworksRequest(new UpdateNetworkSitePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkSitePlanRequest object.
 */
UpdateNetworkSitePlanRequest::UpdateNetworkSitePlanRequest()
    : PrivateNetworksRequest(new UpdateNetworkSitePlanRequestPrivate(PrivateNetworksRequest::UpdateNetworkSitePlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkSitePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkSitePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkSitePlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkSitePlanResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::UpdateNetworkSitePlanRequestPrivate
 * \brief The UpdateNetworkSitePlanRequestPrivate class provides private implementation for UpdateNetworkSitePlanRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a UpdateNetworkSitePlanRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
UpdateNetworkSitePlanRequestPrivate::UpdateNetworkSitePlanRequestPrivate(
    const PrivateNetworksRequest::Action action, UpdateNetworkSitePlanRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkSitePlanRequest
 * class' copy constructor.
 */
UpdateNetworkSitePlanRequestPrivate::UpdateNetworkSitePlanRequestPrivate(
    const UpdateNetworkSitePlanRequestPrivate &other, UpdateNetworkSitePlanRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
