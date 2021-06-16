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

#include "deletefilesystempolicyrequest.h"
#include "deletefilesystempolicyrequest_p.h"
#include "deletefilesystempolicyresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DeleteFileSystemPolicyRequest
 * \brief The DeleteFileSystemPolicyRequest class provides an interface for EFS DeleteFileSystemPolicy requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 *
 * \sa EfsClient::deleteFileSystemPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFileSystemPolicyRequest::DeleteFileSystemPolicyRequest(const DeleteFileSystemPolicyRequest &other)
    : EfsRequest(new DeleteFileSystemPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFileSystemPolicyRequest object.
 */
DeleteFileSystemPolicyRequest::DeleteFileSystemPolicyRequest()
    : EfsRequest(new DeleteFileSystemPolicyRequestPrivate(EfsRequest::DeleteFileSystemPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFileSystemPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFileSystemPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFileSystemPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFileSystemPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::DeleteFileSystemPolicyRequestPrivate
 * \brief The DeleteFileSystemPolicyRequestPrivate class provides private implementation for DeleteFileSystemPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DeleteFileSystemPolicyRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DeleteFileSystemPolicyRequestPrivate::DeleteFileSystemPolicyRequestPrivate(
    const EfsRequest::Action action, DeleteFileSystemPolicyRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFileSystemPolicyRequest
 * class' copy constructor.
 */
DeleteFileSystemPolicyRequestPrivate::DeleteFileSystemPolicyRequestPrivate(
    const DeleteFileSystemPolicyRequestPrivate &other, DeleteFileSystemPolicyRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
