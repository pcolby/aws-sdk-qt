// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportplanrequest.h"
#include "describereportplanrequest_p.h"
#include "describereportplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportPlanRequest
 * \brief The DescribeReportPlanRequest class provides an interface for Backup DescribeReportPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportPlanRequest::DescribeReportPlanRequest(const DescribeReportPlanRequest &other)
    : BackupRequest(new DescribeReportPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportPlanRequest object.
 */
DescribeReportPlanRequest::DescribeReportPlanRequest()
    : BackupRequest(new DescribeReportPlanRequestPrivate(BackupRequest::DescribeReportPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportPlanRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeReportPlanRequestPrivate
 * \brief The DescribeReportPlanRequestPrivate class provides private implementation for DescribeReportPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeReportPlanRequestPrivate::DescribeReportPlanRequestPrivate(
    const BackupRequest::Action action, DescribeReportPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportPlanRequest
 * class' copy constructor.
 */
DescribeReportPlanRequestPrivate::DescribeReportPlanRequestPrivate(
    const DescribeReportPlanRequestPrivate &other, DescribeReportPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
