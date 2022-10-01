// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackuprequest.h"
#include "deletebackuprequest_p.h"
#include "deletebackupresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteBackupRequest
 * \brief The DeleteBackupRequest class provides an interface for FSx DeleteBackup requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteBackup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupRequest::DeleteBackupRequest(const DeleteBackupRequest &other)
    : FSxRequest(new DeleteBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupRequest object.
 */
DeleteBackupRequest::DeleteBackupRequest()
    : FSxRequest(new DeleteBackupRequestPrivate(FSxRequest::DeleteBackupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteBackupRequestPrivate
 * \brief The DeleteBackupRequestPrivate class provides private implementation for DeleteBackupRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteBackupRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const FSxRequest::Action action, DeleteBackupRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupRequest
 * class' copy constructor.
 */
DeleteBackupRequestPrivate::DeleteBackupRequestPrivate(
    const DeleteBackupRequestPrivate &other, DeleteBackupRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
