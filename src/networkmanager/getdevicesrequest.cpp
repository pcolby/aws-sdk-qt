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

#include "getdevicesrequest.h"
#include "getdevicesrequest_p.h"
#include "getdevicesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetDevicesRequest
 * \brief The GetDevicesRequest class provides an interface for NetworkManager GetDevices requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::getDevices
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicesRequest::GetDevicesRequest(const GetDevicesRequest &other)
    : NetworkManagerRequest(new GetDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicesRequest object.
 */
GetDevicesRequest::GetDevicesRequest()
    : NetworkManagerRequest(new GetDevicesRequestPrivate(NetworkManagerRequest::GetDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicesRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetDevicesRequestPrivate
 * \brief The GetDevicesRequestPrivate class provides private implementation for GetDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetDevicesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetDevicesRequestPrivate::GetDevicesRequestPrivate(
    const NetworkManagerRequest::Action action, GetDevicesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicesRequest
 * class' copy constructor.
 */
GetDevicesRequestPrivate::GetDevicesRequestPrivate(
    const GetDevicesRequestPrivate &other, GetDevicesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
