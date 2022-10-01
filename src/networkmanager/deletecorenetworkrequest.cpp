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

#include "deletecorenetworkrequest.h"
#include "deletecorenetworkrequest_p.h"
#include "deletecorenetworkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkRequest
 * \brief The DeleteCoreNetworkRequest class provides an interface for NetworkManager DeleteCoreNetwork requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetwork
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCoreNetworkRequest::DeleteCoreNetworkRequest(const DeleteCoreNetworkRequest &other)
    : NetworkManagerRequest(new DeleteCoreNetworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCoreNetworkRequest object.
 */
DeleteCoreNetworkRequest::DeleteCoreNetworkRequest()
    : NetworkManagerRequest(new DeleteCoreNetworkRequestPrivate(NetworkManagerRequest::DeleteCoreNetworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCoreNetworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCoreNetworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCoreNetworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreNetworkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkRequestPrivate
 * \brief The DeleteCoreNetworkRequestPrivate class provides private implementation for DeleteCoreNetworkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteCoreNetworkRequestPrivate::DeleteCoreNetworkRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreNetworkRequest
 * class' copy constructor.
 */
DeleteCoreNetworkRequestPrivate::DeleteCoreNetworkRequestPrivate(
    const DeleteCoreNetworkRequestPrivate &other, DeleteCoreNetworkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
