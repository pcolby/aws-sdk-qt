// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicerequest.h"
#include "createdevicerequest_p.h"
#include "createdeviceresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateDeviceRequest
 * \brief The CreateDeviceRequest class provides an interface for NetworkManager CreateDevice requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createDevice
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceRequest::CreateDeviceRequest(const CreateDeviceRequest &other)
    : NetworkManagerRequest(new CreateDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceRequest object.
 */
CreateDeviceRequest::CreateDeviceRequest()
    : NetworkManagerRequest(new CreateDeviceRequestPrivate(NetworkManagerRequest::CreateDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateDeviceRequestPrivate
 * \brief The CreateDeviceRequestPrivate class provides private implementation for CreateDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateDeviceRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateDeviceRequestPrivate::CreateDeviceRequestPrivate(
    const NetworkManagerRequest::Action action, CreateDeviceRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceRequest
 * class' copy constructor.
 */
CreateDeviceRequestPrivate::CreateDeviceRequestPrivate(
    const CreateDeviceRequestPrivate &other, CreateDeviceRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
