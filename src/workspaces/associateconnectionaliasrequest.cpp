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

#include "associateconnectionaliasrequest.h"
#include "associateconnectionaliasrequest_p.h"
#include "associateconnectionaliasresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AssociateConnectionAliasRequest
 * \brief The AssociateConnectionAliasRequest class provides an interface for WorkSpaces AssociateConnectionAlias requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::associateConnectionAlias
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateConnectionAliasRequest::AssociateConnectionAliasRequest(const AssociateConnectionAliasRequest &other)
    : WorkSpacesRequest(new AssociateConnectionAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateConnectionAliasRequest object.
 */
AssociateConnectionAliasRequest::AssociateConnectionAliasRequest()
    : WorkSpacesRequest(new AssociateConnectionAliasRequestPrivate(WorkSpacesRequest::AssociateConnectionAliasAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateConnectionAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateConnectionAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateConnectionAliasRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConnectionAliasResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::AssociateConnectionAliasRequestPrivate
 * \brief The AssociateConnectionAliasRequestPrivate class provides private implementation for AssociateConnectionAliasRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AssociateConnectionAliasRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
AssociateConnectionAliasRequestPrivate::AssociateConnectionAliasRequestPrivate(
    const WorkSpacesRequest::Action action, AssociateConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateConnectionAliasRequest
 * class' copy constructor.
 */
AssociateConnectionAliasRequestPrivate::AssociateConnectionAliasRequestPrivate(
    const AssociateConnectionAliasRequestPrivate &other, AssociateConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
