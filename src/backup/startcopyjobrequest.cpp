// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcopyjobrequest.h"
#include "startcopyjobrequest_p.h"
#include "startcopyjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartCopyJobRequest
 * \brief The StartCopyJobRequest class provides an interface for Backup StartCopyJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startCopyJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartCopyJobRequest::StartCopyJobRequest(const StartCopyJobRequest &other)
    : BackupRequest(new StartCopyJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCopyJobRequest object.
 */
StartCopyJobRequest::StartCopyJobRequest()
    : BackupRequest(new StartCopyJobRequestPrivate(BackupRequest::StartCopyJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartCopyJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCopyJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCopyJobRequest::response(QNetworkReply * const reply) const
{
    return new StartCopyJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StartCopyJobRequestPrivate
 * \brief The StartCopyJobRequestPrivate class provides private implementation for StartCopyJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartCopyJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StartCopyJobRequestPrivate::StartCopyJobRequestPrivate(
    const BackupRequest::Action action, StartCopyJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCopyJobRequest
 * class' copy constructor.
 */
StartCopyJobRequestPrivate::StartCopyJobRequestPrivate(
    const StartCopyJobRequestPrivate &other, StartCopyJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
