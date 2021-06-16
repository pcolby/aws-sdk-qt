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

#include "updatedevicerequest.h"
#include "updatedevicerequest_p.h"
#include "updatedeviceresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateDeviceRequest
 * \brief The UpdateDeviceRequest class provides an interface for NetworkManager UpdateDevice requests.
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
 * \sa NetworkManagerClient::updateDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceRequest::UpdateDeviceRequest(const UpdateDeviceRequest &other)
    : NetworkManagerRequest(new UpdateDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceRequest object.
 */
UpdateDeviceRequest::UpdateDeviceRequest()
    : NetworkManagerRequest(new UpdateDeviceRequestPrivate(NetworkManagerRequest::UpdateDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateDeviceRequestPrivate
 * \brief The UpdateDeviceRequestPrivate class provides private implementation for UpdateDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateDeviceRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateDeviceRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceRequest
 * class' copy constructor.
 */
UpdateDeviceRequestPrivate::UpdateDeviceRequestPrivate(
    const UpdateDeviceRequestPrivate &other, UpdateDeviceRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
