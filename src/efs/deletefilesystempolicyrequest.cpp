// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilesystempolicyrequest.h"
#include "deletefilesystempolicyrequest_p.h"
#include "deletefilesystempolicyresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteFileSystemPolicyRequest
 * \brief The DeleteFileSystemPolicyRequest class provides an interface for Efs DeleteFileSystemPolicy requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
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
 * \class QtAws::Efs::DeleteFileSystemPolicyRequestPrivate
 * \brief The DeleteFileSystemPolicyRequestPrivate class provides private implementation for DeleteFileSystemPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
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

} // namespace Efs
} // namespace QtAws
