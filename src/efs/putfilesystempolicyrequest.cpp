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

#include "putfilesystempolicyrequest.h"
#include "putfilesystempolicyrequest_p.h"
#include "putfilesystempolicyresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::PutFileSystemPolicyRequest
 * \brief The PutFileSystemPolicyRequest class provides an interface for EFS PutFileSystemPolicy requests.
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
 * \sa EfsClient::putFileSystemPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutFileSystemPolicyRequest::PutFileSystemPolicyRequest(const PutFileSystemPolicyRequest &other)
    : EfsRequest(new PutFileSystemPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutFileSystemPolicyRequest object.
 */
PutFileSystemPolicyRequest::PutFileSystemPolicyRequest()
    : EfsRequest(new PutFileSystemPolicyRequestPrivate(EfsRequest::PutFileSystemPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutFileSystemPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutFileSystemPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFileSystemPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutFileSystemPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::PutFileSystemPolicyRequestPrivate
 * \brief The PutFileSystemPolicyRequestPrivate class provides private implementation for PutFileSystemPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a PutFileSystemPolicyRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
PutFileSystemPolicyRequestPrivate::PutFileSystemPolicyRequestPrivate(
    const EfsRequest::Action action, PutFileSystemPolicyRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutFileSystemPolicyRequest
 * class' copy constructor.
 */
PutFileSystemPolicyRequestPrivate::PutFileSystemPolicyRequestPrivate(
    const PutFileSystemPolicyRequestPrivate &other, PutFileSystemPolicyRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
