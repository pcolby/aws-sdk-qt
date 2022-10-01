// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
