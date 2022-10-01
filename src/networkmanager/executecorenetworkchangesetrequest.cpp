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

#include "executecorenetworkchangesetrequest.h"
#include "executecorenetworkchangesetrequest_p.h"
#include "executecorenetworkchangesetresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetRequest
 * \brief The ExecuteCoreNetworkChangeSetRequest class provides an interface for NetworkManager ExecuteCoreNetworkChangeSet requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::executeCoreNetworkChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteCoreNetworkChangeSetRequest::ExecuteCoreNetworkChangeSetRequest(const ExecuteCoreNetworkChangeSetRequest &other)
    : NetworkManagerRequest(new ExecuteCoreNetworkChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteCoreNetworkChangeSetRequest object.
 */
ExecuteCoreNetworkChangeSetRequest::ExecuteCoreNetworkChangeSetRequest()
    : NetworkManagerRequest(new ExecuteCoreNetworkChangeSetRequestPrivate(NetworkManagerRequest::ExecuteCoreNetworkChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteCoreNetworkChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteCoreNetworkChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteCoreNetworkChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteCoreNetworkChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetRequestPrivate
 * \brief The ExecuteCoreNetworkChangeSetRequestPrivate class provides private implementation for ExecuteCoreNetworkChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
ExecuteCoreNetworkChangeSetRequestPrivate::ExecuteCoreNetworkChangeSetRequestPrivate(
    const NetworkManagerRequest::Action action, ExecuteCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteCoreNetworkChangeSetRequest
 * class' copy constructor.
 */
ExecuteCoreNetworkChangeSetRequestPrivate::ExecuteCoreNetworkChangeSetRequestPrivate(
    const ExecuteCoreNetworkChangeSetRequestPrivate &other, ExecuteCoreNetworkChangeSetRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
