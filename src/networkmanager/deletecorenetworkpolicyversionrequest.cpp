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

#include "deletecorenetworkpolicyversionrequest.h"
#include "deletecorenetworkpolicyversionrequest_p.h"
#include "deletecorenetworkpolicyversionresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionRequest
 * \brief The DeleteCoreNetworkPolicyVersionRequest class provides an interface for NetworkManager DeleteCoreNetworkPolicyVersion requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetworkPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCoreNetworkPolicyVersionRequest::DeleteCoreNetworkPolicyVersionRequest(const DeleteCoreNetworkPolicyVersionRequest &other)
    : NetworkManagerRequest(new DeleteCoreNetworkPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionRequest object.
 */
DeleteCoreNetworkPolicyVersionRequest::DeleteCoreNetworkPolicyVersionRequest()
    : NetworkManagerRequest(new DeleteCoreNetworkPolicyVersionRequestPrivate(NetworkManagerRequest::DeleteCoreNetworkPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCoreNetworkPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCoreNetworkPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCoreNetworkPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreNetworkPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionRequestPrivate
 * \brief The DeleteCoreNetworkPolicyVersionRequestPrivate class provides private implementation for DeleteCoreNetworkPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteCoreNetworkPolicyVersionRequestPrivate::DeleteCoreNetworkPolicyVersionRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreNetworkPolicyVersionRequest
 * class' copy constructor.
 */
DeleteCoreNetworkPolicyVersionRequestPrivate::DeleteCoreNetworkPolicyVersionRequestPrivate(
    const DeleteCoreNetworkPolicyVersionRequestPrivate &other, DeleteCoreNetworkPolicyVersionRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
