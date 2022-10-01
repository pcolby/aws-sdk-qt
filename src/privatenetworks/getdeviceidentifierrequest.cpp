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

#include "getdeviceidentifierrequest.h"
#include "getdeviceidentifierrequest_p.h"
#include "getdeviceidentifierresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetDeviceIdentifierRequest
 * \brief The GetDeviceIdentifierRequest class provides an interface for PrivateNetworks GetDeviceIdentifier requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getDeviceIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceIdentifierRequest::GetDeviceIdentifierRequest(const GetDeviceIdentifierRequest &other)
    : PrivateNetworksRequest(new GetDeviceIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceIdentifierRequest object.
 */
GetDeviceIdentifierRequest::GetDeviceIdentifierRequest()
    : PrivateNetworksRequest(new GetDeviceIdentifierRequestPrivate(PrivateNetworksRequest::GetDeviceIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::GetDeviceIdentifierRequestPrivate
 * \brief The GetDeviceIdentifierRequestPrivate class provides private implementation for GetDeviceIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetDeviceIdentifierRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
GetDeviceIdentifierRequestPrivate::GetDeviceIdentifierRequestPrivate(
    const PrivateNetworksRequest::Action action, GetDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceIdentifierRequest
 * class' copy constructor.
 */
GetDeviceIdentifierRequestPrivate::GetDeviceIdentifierRequestPrivate(
    const GetDeviceIdentifierRequestPrivate &other, GetDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
