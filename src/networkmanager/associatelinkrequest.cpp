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

#include "associatelinkrequest.h"
#include "associatelinkrequest_p.h"
#include "associatelinkresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateLinkRequest
 * \brief The AssociateLinkRequest class provides an interface for NetworkManager AssociateLink requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateLink
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateLinkRequest::AssociateLinkRequest(const AssociateLinkRequest &other)
    : NetworkManagerRequest(new AssociateLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateLinkRequest object.
 */
AssociateLinkRequest::AssociateLinkRequest()
    : NetworkManagerRequest(new AssociateLinkRequestPrivate(NetworkManagerRequest::AssociateLinkAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateLinkRequest::response(QNetworkReply * const reply) const
{
    return new AssociateLinkResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateLinkRequestPrivate
 * \brief The AssociateLinkRequestPrivate class provides private implementation for AssociateLinkRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateLinkRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateLinkRequestPrivate::AssociateLinkRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateLinkRequest
 * class' copy constructor.
 */
AssociateLinkRequestPrivate::AssociateLinkRequestPrivate(
    const AssociateLinkRequestPrivate &other, AssociateLinkRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
