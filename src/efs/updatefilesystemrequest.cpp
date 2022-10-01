// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefilesystemrequest.h"
#include "updatefilesystemrequest_p.h"
#include "updatefilesystemresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::UpdateFileSystemRequest
 * \brief The UpdateFileSystemRequest class provides an interface for Efs UpdateFileSystem requests.
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
 * \class QtAws::Efs::UpdateFileSystemRequestPrivate
 * \brief The UpdateFileSystemRequestPrivate class provides private implementation for UpdateFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
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

} // namespace Efs
} // namespace QtAws
