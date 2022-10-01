// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicerequest.h"
#include "deletedevicerequest_p.h"
#include "deletedeviceresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteDeviceRequest
 * \brief The DeleteDeviceRequest class provides an interface for NetworkManager DeleteDevice requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceRequest::DeleteDeviceRequest(const DeleteDeviceRequest &other)
    : NetworkManagerRequest(new DeleteDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceRequest object.
 */
DeleteDeviceRequest::DeleteDeviceRequest()
    : NetworkManagerRequest(new DeleteDeviceRequestPrivate(NetworkManagerRequest::DeleteDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteDeviceRequestPrivate
 * \brief The DeleteDeviceRequestPrivate class provides private implementation for DeleteDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteDeviceRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteDeviceRequestPrivate::DeleteDeviceRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteDeviceRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceRequest
 * class' copy constructor.
 */
DeleteDeviceRequestPrivate::DeleteDeviceRequestPrivate(
    const DeleteDeviceRequestPrivate &other, DeleteDeviceRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
