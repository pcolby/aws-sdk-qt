// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerestorejobrequest.h"
#include "describerestorejobrequest_p.h"
#include "describerestorejobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRestoreJobRequest
 * \brief The DescribeRestoreJobRequest class provides an interface for Backup DescribeRestoreJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRestoreJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRestoreJobRequest::DescribeRestoreJobRequest(const DescribeRestoreJobRequest &other)
    : BackupRequest(new DescribeRestoreJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRestoreJobRequest object.
 */
DescribeRestoreJobRequest::DescribeRestoreJobRequest()
    : BackupRequest(new DescribeRestoreJobRequestPrivate(BackupRequest::DescribeRestoreJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRestoreJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRestoreJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRestoreJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRestoreJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeRestoreJobRequestPrivate
 * \brief The DescribeRestoreJobRequestPrivate class provides private implementation for DescribeRestoreJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRestoreJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeRestoreJobRequestPrivate::DescribeRestoreJobRequestPrivate(
    const BackupRequest::Action action, DescribeRestoreJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRestoreJobRequest
 * class' copy constructor.
 */
DescribeRestoreJobRequestPrivate::DescribeRestoreJobRequestPrivate(
    const DescribeRestoreJobRequestPrivate &other, DescribeRestoreJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
