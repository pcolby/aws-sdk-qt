/*
    Copyright 2013-2018 Paul Colby

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

#include "updatefilesystemrequest.h"
#include "updatefilesystemrequest_p.h"
#include "updatefilesystemresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateFileSystemRequest
 * \brief The UpdateFileSystemRequest class provides an interface for FSx UpdateFileSystem requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateFileSystem
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFileSystemRequest::UpdateFileSystemRequest(const UpdateFileSystemRequest &other)
    : FSxRequest(new UpdateFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFileSystemRequest object.
 */
UpdateFileSystemRequest::UpdateFileSystemRequest()
    : FSxRequest(new UpdateFileSystemRequestPrivate(FSxRequest::UpdateFileSystemAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFileSystemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFileSystemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFileSystemRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFileSystemResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::UpdateFileSystemRequestPrivate
 * \brief The UpdateFileSystemRequestPrivate class provides private implementation for UpdateFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateFileSystemRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
UpdateFileSystemRequestPrivate::UpdateFileSystemRequestPrivate(
    const FSxRequest::Action action, UpdateFileSystemRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFileSystemRequest
 * class' copy constructor.
 */
UpdateFileSystemRequestPrivate::UpdateFileSystemRequestPrivate(
    const UpdateFileSystemRequestPrivate &other, UpdateFileSystemRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
