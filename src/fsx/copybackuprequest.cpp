// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copybackuprequest.h"
#include "copybackuprequest_p.h"
#include "copybackupresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CopyBackupRequest
 * \brief The CopyBackupRequest class provides an interface for FSx CopyBackup requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::copyBackup
 */

/*!
 * Constructs a copy of \a other.
 */
CopyBackupRequest::CopyBackupRequest(const CopyBackupRequest &other)
    : FSxRequest(new CopyBackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyBackupRequest object.
 */
CopyBackupRequest::CopyBackupRequest()
    : FSxRequest(new CopyBackupRequestPrivate(FSxRequest::CopyBackupAction, this))
{

}

/*!
 * \reimp
 */
bool CopyBackupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyBackupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyBackupRequest::response(QNetworkReply * const reply) const
{
    return new CopyBackupResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CopyBackupRequestPrivate
 * \brief The CopyBackupRequestPrivate class provides private implementation for CopyBackupRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CopyBackupRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CopyBackupRequestPrivate::CopyBackupRequestPrivate(
    const FSxRequest::Action action, CopyBackupRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyBackupRequest
 * class' copy constructor.
 */
CopyBackupRequestPrivate::CopyBackupRequestPrivate(
    const CopyBackupRequestPrivate &other, CopyBackupRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
