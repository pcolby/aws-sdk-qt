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

#include "disassociatefilesystemaliasesrequest.h"
#include "disassociatefilesystemaliasesrequest_p.h"
#include "disassociatefilesystemaliasesresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesRequest
 * \brief The DisassociateFileSystemAliasesRequest class provides an interface for FSx DisassociateFileSystemAliases requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::disassociateFileSystemAliases
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateFileSystemAliasesRequest::DisassociateFileSystemAliasesRequest(const DisassociateFileSystemAliasesRequest &other)
    : FSxRequest(new DisassociateFileSystemAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateFileSystemAliasesRequest object.
 */
DisassociateFileSystemAliasesRequest::DisassociateFileSystemAliasesRequest()
    : FSxRequest(new DisassociateFileSystemAliasesRequestPrivate(FSxRequest::DisassociateFileSystemAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateFileSystemAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateFileSystemAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateFileSystemAliasesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFileSystemAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesRequestPrivate
 * \brief The DisassociateFileSystemAliasesRequestPrivate class provides private implementation for DisassociateFileSystemAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DisassociateFileSystemAliasesRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DisassociateFileSystemAliasesRequestPrivate::DisassociateFileSystemAliasesRequestPrivate(
    const FSxRequest::Action action, DisassociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFileSystemAliasesRequest
 * class' copy constructor.
 */
DisassociateFileSystemAliasesRequestPrivate::DisassociateFileSystemAliasesRequestPrivate(
    const DisassociateFileSystemAliasesRequestPrivate &other, DisassociateFileSystemAliasesRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
