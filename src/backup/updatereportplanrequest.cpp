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

#include "updatereportplanrequest.h"
#include "updatereportplanrequest_p.h"
#include "updatereportplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateReportPlanRequest
 * \brief The UpdateReportPlanRequest class provides an interface for Backup UpdateReportPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateReportPlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReportPlanRequest::UpdateReportPlanRequest(const UpdateReportPlanRequest &other)
    : BackupRequest(new UpdateReportPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReportPlanRequest object.
 */
UpdateReportPlanRequest::UpdateReportPlanRequest()
    : BackupRequest(new UpdateReportPlanRequestPrivate(BackupRequest::UpdateReportPlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReportPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReportPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReportPlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReportPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateReportPlanRequestPrivate
 * \brief The UpdateReportPlanRequestPrivate class provides private implementation for UpdateReportPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateReportPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateReportPlanRequestPrivate::UpdateReportPlanRequestPrivate(
    const BackupRequest::Action action, UpdateReportPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReportPlanRequest
 * class' copy constructor.
 */
UpdateReportPlanRequestPrivate::UpdateReportPlanRequestPrivate(
    const UpdateReportPlanRequestPrivate &other, UpdateReportPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
