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

#include "associatefilesystemaliasesrequest.h"
#include "associatefilesystemaliasesrequest_p.h"
#include "associatefilesystemaliasesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesRequest
 * \brief The AssociateFileSystemAliasesRequest class provides an interface for FSx AssociateFileSystemAliases requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::associateFileSystemAliases
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateFileSystemAliasesRequest::AssociateFileSystemAliasesRequest(const AssociateFileSystemAliasesRequest &other)
    : FSxRequest(new AssociateFileSystemAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateFileSystemAliasesRequest object.
 */
AssociateFileSystemAliasesRequest::AssociateFileSystemAliasesRequest()
    : FSxRequest(new AssociateFileSystemAliasesRequestPrivate(FSxRequest::AssociateFileSystemAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateFileSystemAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateFileSystemAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateFileSystemAliasesRequest::response(QNetworkReply * const reply) const
{
    return new AssociateFileSystemAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesRequestPrivate
 * \brief The AssociateFileSystemAliasesRequestPrivate class provides private implementation for AssociateFileSystemAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a AssociateFileSystemAliasesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
AssociateFileSystemAliasesRequestPrivate::AssociateFileSystemAliasesRequestPrivate(
    const FSxRequest::Action action, AssociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateFileSystemAliasesRequest
 * class' copy constructor.
 */
AssociateFileSystemAliasesRequestPrivate::AssociateFileSystemAliasesRequestPrivate(
    const AssociateFileSystemAliasesRequestPrivate &other, AssociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
