// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilesystemrequest.h"
#include "deletefilesystemrequest_p.h"
#include "deletefilesystemresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteFileSystemRequest
 * \brief The DeleteFileSystemRequest class provides an interface for Efs DeleteFileSystem requests.
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
 * \sa EfsClient::deleteFileSystem
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest(const DeleteFileSystemRequest &other)
    : EfsRequest(new DeleteFileSystemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFileSystemRequest object.
 */
DeleteFileSystemRequest::DeleteFileSystemRequest()
    : EfsRequest(new DeleteFileSystemRequestPrivate(EfsRequest::DeleteFileSystemAction, this))
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
 * \class QtAws::Efs::DeleteFileSystemRequestPrivate
 * \brief The DeleteFileSystemRequestPrivate class provides private implementation for DeleteFileSystemRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteFileSystemRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DeleteFileSystemRequestPrivate::DeleteFileSystemRequestPrivate(
    const EfsRequest::Action action, DeleteFileSystemRequest * const q)
    : EfsRequestPrivate(action, q)
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
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
