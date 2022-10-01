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

#include "deletepeeringrequest.h"
#include "deletepeeringrequest_p.h"
#include "deletepeeringresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeletePeeringRequest
 * \brief The DeletePeeringRequest class provides an interface for NetworkManager DeletePeering requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deletePeering
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePeeringRequest::DeletePeeringRequest(const DeletePeeringRequest &other)
    : NetworkManagerRequest(new DeletePeeringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePeeringRequest object.
 */
DeletePeeringRequest::DeletePeeringRequest()
    : NetworkManagerRequest(new DeletePeeringRequestPrivate(NetworkManagerRequest::DeletePeeringAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePeeringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePeeringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePeeringRequest::response(QNetworkReply * const reply) const
{
    return new DeletePeeringResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeletePeeringRequestPrivate
 * \brief The DeletePeeringRequestPrivate class provides private implementation for DeletePeeringRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeletePeeringRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeletePeeringRequestPrivate::DeletePeeringRequestPrivate(
    const NetworkManagerRequest::Action action, DeletePeeringRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePeeringRequest
 * class' copy constructor.
 */
DeletePeeringRequestPrivate::DeletePeeringRequestPrivate(
    const DeletePeeringRequestPrivate &other, DeletePeeringRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
