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

#include "createnetworksiterequest.h"
#include "createnetworksiterequest_p.h"
#include "createnetworksiteresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteRequest
 * \brief The CreateNetworkSiteRequest class provides an interface for PrivateNetworks CreateNetworkSite requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetworkSite
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkSiteRequest::CreateNetworkSiteRequest(const CreateNetworkSiteRequest &other)
    : PrivateNetworksRequest(new CreateNetworkSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkSiteRequest object.
 */
CreateNetworkSiteRequest::CreateNetworkSiteRequest()
    : PrivateNetworksRequest(new CreateNetworkSiteRequestPrivate(PrivateNetworksRequest::CreateNetworkSiteAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkSiteRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkSiteResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkSiteRequestPrivate
 * \brief The CreateNetworkSiteRequestPrivate class provides private implementation for CreateNetworkSiteRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkSiteRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
CreateNetworkSiteRequestPrivate::CreateNetworkSiteRequestPrivate(
    const PrivateNetworksRequest::Action action, CreateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkSiteRequest
 * class' copy constructor.
 */
CreateNetworkSiteRequestPrivate::CreateNetworkSiteRequestPrivate(
    const CreateNetworkSiteRequestPrivate &other, CreateNetworkSiteRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
