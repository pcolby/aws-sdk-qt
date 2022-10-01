// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
