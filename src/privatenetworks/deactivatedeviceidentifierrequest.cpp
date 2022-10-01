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

#include "deactivatedeviceidentifierrequest.h"
#include "deactivatedeviceidentifierrequest_p.h"
#include "deactivatedeviceidentifierresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierRequest
 * \brief The DeactivateDeviceIdentifierRequest class provides an interface for PrivateNetworks DeactivateDeviceIdentifier requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deactivateDeviceIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateDeviceIdentifierRequest::DeactivateDeviceIdentifierRequest(const DeactivateDeviceIdentifierRequest &other)
    : PrivateNetworksRequest(new DeactivateDeviceIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateDeviceIdentifierRequest object.
 */
DeactivateDeviceIdentifierRequest::DeactivateDeviceIdentifierRequest()
    : PrivateNetworksRequest(new DeactivateDeviceIdentifierRequestPrivate(PrivateNetworksRequest::DeactivateDeviceIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateDeviceIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateDeviceIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateDeviceIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateDeviceIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::DeactivateDeviceIdentifierRequestPrivate
 * \brief The DeactivateDeviceIdentifierRequestPrivate class provides private implementation for DeactivateDeviceIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeactivateDeviceIdentifierRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
DeactivateDeviceIdentifierRequestPrivate::DeactivateDeviceIdentifierRequestPrivate(
    const PrivateNetworksRequest::Action action, DeactivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateDeviceIdentifierRequest
 * class' copy constructor.
 */
DeactivateDeviceIdentifierRequestPrivate::DeactivateDeviceIdentifierRequestPrivate(
    const DeactivateDeviceIdentifierRequestPrivate &other, DeactivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
