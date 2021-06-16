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

#include "deleteconnectionaliasrequest.h"
#include "deleteconnectionaliasrequest_p.h"
#include "deleteconnectionaliasresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DeleteConnectionAliasRequest
 * \brief The DeleteConnectionAliasRequest class provides an interface for WorkSpaces DeleteConnectionAlias requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::deleteConnectionAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectionAliasRequest::DeleteConnectionAliasRequest(const DeleteConnectionAliasRequest &other)
    : WorkSpacesRequest(new DeleteConnectionAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectionAliasRequest object.
 */
DeleteConnectionAliasRequest::DeleteConnectionAliasRequest()
    : WorkSpacesRequest(new DeleteConnectionAliasRequestPrivate(WorkSpacesRequest::DeleteConnectionAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectionAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectionAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectionAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectionAliasResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DeleteConnectionAliasRequestPrivate
 * \brief The DeleteConnectionAliasRequestPrivate class provides private implementation for DeleteConnectionAliasRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DeleteConnectionAliasRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DeleteConnectionAliasRequestPrivate::DeleteConnectionAliasRequestPrivate(
    const WorkSpacesRequest::Action action, DeleteConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectionAliasRequest
 * class' copy constructor.
 */
DeleteConnectionAliasRequestPrivate::DeleteConnectionAliasRequestPrivate(
    const DeleteConnectionAliasRequestPrivate &other, DeleteConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
