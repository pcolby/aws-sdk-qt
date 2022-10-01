// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportjobrequest.h"
#include "describereportjobrequest_p.h"
#include "describereportjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportJobRequest
 * \brief The DescribeReportJobRequest class provides an interface for Backup DescribeReportJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportJobRequest::DescribeReportJobRequest(const DescribeReportJobRequest &other)
    : BackupRequest(new DescribeReportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportJobRequest object.
 */
DescribeReportJobRequest::DescribeReportJobRequest()
    : BackupRequest(new DescribeReportJobRequestPrivate(BackupRequest::DescribeReportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeReportJobRequestPrivate
 * \brief The DescribeReportJobRequestPrivate class provides private implementation for DescribeReportJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeReportJobRequestPrivate::DescribeReportJobRequestPrivate(
    const BackupRequest::Action action, DescribeReportJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportJobRequest
 * class' copy constructor.
 */
DescribeReportJobRequestPrivate::DescribeReportJobRequestPrivate(
    const DescribeReportJobRequestPrivate &other, DescribeReportJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
