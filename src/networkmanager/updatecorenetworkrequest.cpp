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

#include "updatecorenetworkrequest.h"
#include "updatecorenetworkrequest_p.h"
#include "updatecorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkRequest
 * \brief The UpdateCoreNetworkRequest class provides an interface for NetworkManager UpdateCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCoreNetworkRequest::UpdateCoreNetworkRequest(const UpdateCoreNetworkRequest &other)
    : NetworkManagerRequest(new UpdateCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCoreNetworkRequest object.
 */
UpdateCoreNetworkRequest::UpdateCoreNetworkRequest()
    : NetworkManagerRequest(new UpdateCoreNetworkRequestPrivate(NetworkManagerRequest::UpdateCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::UpdateCoreNetworkRequestPrivate
 * \brief The UpdateCoreNetworkRequestPrivate class provides private implementation for UpdateCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
UpdateCoreNetworkRequestPrivate::UpdateCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, UpdateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCoreNetworkRequest
 * class' copy constructor.
 */
UpdateCoreNetworkRequestPrivate::UpdateCoreNetworkRequestPrivate(
    const UpdateCoreNetworkRequestPrivate &other, UpdateCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
