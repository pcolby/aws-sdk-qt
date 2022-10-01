/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
