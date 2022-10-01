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

#include "deletereportplanrequest.h"
#include "deletereportplanrequest_p.h"
#include "deletereportplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteReportPlanRequest
 * \brief The DeleteReportPlanRequest class provides an interface for Backup DeleteReportPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteReportPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReportPlanRequest::DeleteReportPlanRequest(const DeleteReportPlanRequest &other)
    : BackupRequest(new DeleteReportPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReportPlanRequest object.
 */
DeleteReportPlanRequest::DeleteReportPlanRequest()
    : BackupRequest(new DeleteReportPlanRequestPrivate(BackupRequest::DeleteReportPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReportPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteReportPlanRequestPrivate
 * \brief The DeleteReportPlanRequestPrivate class provides private implementation for DeleteReportPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteReportPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteReportPlanRequestPrivate::DeleteReportPlanRequestPrivate(
    const BackupRequest::Action action, DeleteReportPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportPlanRequest
 * class' copy constructor.
 */
DeleteReportPlanRequestPrivate::DeleteReportPlanRequestPrivate(
    const DeleteReportPlanRequestPrivate &other, DeleteReportPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
