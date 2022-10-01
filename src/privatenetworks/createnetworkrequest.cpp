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

#include "createnetworkrequest.h"
#include "createnetworkrequest_p.h"
#include "createnetworkresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkRequest
 * \brief The CreateNetworkRequest class provides an interface for PrivateNetworks CreateNetwork requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkRequest::CreateNetworkRequest(const CreateNetworkRequest &other)
    : PrivateNetworksRequest(new CreateNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkRequest object.
 */
CreateNetworkRequest::CreateNetworkRequest()
    : PrivateNetworksRequest(new CreateNetworkRequestPrivate(PrivateNetworksRequest::CreateNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkRequestPrivate
 * \brief The CreateNetworkRequestPrivate class provides private implementation for CreateNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const PrivateNetworksRequest::Action action, CreateNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkRequest
 * class' copy constructor.
 */
CreateNetworkRequestPrivate::CreateNetworkRequestPrivate(
    const CreateNetworkRequestPrivate &other, CreateNetworkRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
