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

#include "deletefilesystemrequest.h"
#include "deletefilesystemrequest_p.h"
#include "deletefilesystemresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteFileSystemRequest
 * \brief The DeleteFileSystemRequest class provides an interface for FSx DeleteFileSystem requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteFileSystem
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest(const DeleteFileSystemRequest &other)
    : FSxRequest(new DeleteFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFileSystemRequest object.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest()
    : FSxRequest(new DeleteFileSystemRequestPrivate(FSxRequest::DeleteFileSystemAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFileSystemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFileSystemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFileSystemResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteFileSystemRequestPrivate
 * \brief The DeleteFileSystemRequestPrivate class provides private implementation for DeleteFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteFileSystemRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteFileSystemRequestPrivate::DeleteFileSystemRequestPrivate(
    const FSxRequest::Action action, DeleteFileSystemRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFileSystemRequest
 * class' copy constructor.
 */
DeleteFileSystemRequestPrivate::DeleteFileSystemRequestPrivate(
    const DeleteFileSystemRequestPrivate &other, DeleteFileSystemRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
