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

#include "disassociateconnectionaliasrequest.h"
#include "disassociateconnectionaliasrequest_p.h"
#include "disassociateconnectionaliasresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DisassociateConnectionAliasRequest
 * \brief The DisassociateConnectionAliasRequest class provides an interface for WorkSpaces DisassociateConnectionAlias requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::disassociateConnectionAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateConnectionAliasRequest::DisassociateConnectionAliasRequest(const DisassociateConnectionAliasRequest &other)
    : WorkSpacesRequest(new DisassociateConnectionAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateConnectionAliasRequest object.
 */
DisassociateConnectionAliasRequest::DisassociateConnectionAliasRequest()
    : WorkSpacesRequest(new DisassociateConnectionAliasRequestPrivate(WorkSpacesRequest::DisassociateConnectionAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateConnectionAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateConnectionAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateConnectionAliasRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConnectionAliasResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::DisassociateConnectionAliasRequestPrivate
 * \brief The DisassociateConnectionAliasRequestPrivate class provides private implementation for DisassociateConnectionAliasRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DisassociateConnectionAliasRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
DisassociateConnectionAliasRequestPrivate::DisassociateConnectionAliasRequestPrivate(
    const WorkSpacesRequest::Action action, DisassociateConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConnectionAliasRequest
 * class' copy constructor.
 */
DisassociateConnectionAliasRequestPrivate::DisassociateConnectionAliasRequestPrivate(
    const DisassociateConnectionAliasRequestPrivate &other, DisassociateConnectionAliasRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
