// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecopyjobrequest.h"
#include "describecopyjobrequest_p.h"
#include "describecopyjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeCopyJobRequest
 * \brief The DescribeCopyJobRequest class provides an interface for Backup DescribeCopyJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeCopyJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCopyJobRequest::DescribeCopyJobRequest(const DescribeCopyJobRequest &other)
    : BackupRequest(new DescribeCopyJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCopyJobRequest object.
 */
DescribeCopyJobRequest::DescribeCopyJobRequest()
    : BackupRequest(new DescribeCopyJobRequestPrivate(BackupRequest::DescribeCopyJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCopyJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCopyJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCopyJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCopyJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeCopyJobRequestPrivate
 * \brief The DescribeCopyJobRequestPrivate class provides private implementation for DescribeCopyJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeCopyJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeCopyJobRequestPrivate::DescribeCopyJobRequestPrivate(
    const BackupRequest::Action action, DescribeCopyJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCopyJobRequest
 * class' copy constructor.
 */
DescribeCopyJobRequestPrivate::DescribeCopyJobRequestPrivate(
    const DescribeCopyJobRequestPrivate &other, DescribeCopyJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
