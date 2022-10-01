// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
