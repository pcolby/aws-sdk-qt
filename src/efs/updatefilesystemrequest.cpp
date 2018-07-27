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
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::UpdateFileSystemRequest
 * \brief The UpdateFileSystemRequest class provides an interface for EFS UpdateFileSystem requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::updateFileSystem
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFileSystemRequest::UpdateFileSystemRequest(const UpdateFileSystemRequest &other)
    : EfsRequest(new UpdateFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFileSystemRequest object.
 */
UpdateFileSystemRequest::UpdateFileSystemRequest()
    : EfsRequest(new UpdateFileSystemRequestPrivate(EfsRequest::UpdateFileSystemAction, this))
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
 * \class QtAws::EFS::UpdateFileSystemRequestPrivate
 * \brief The UpdateFileSystemRequestPrivate class provides private implementation for UpdateFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a UpdateFileSystemRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
UpdateFileSystemRequestPrivate::UpdateFileSystemRequestPrivate(
    const EfsRequest::Action action, UpdateFileSystemRequest * const q)
    : EfsRequestPrivate(action, q)
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
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
