// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
