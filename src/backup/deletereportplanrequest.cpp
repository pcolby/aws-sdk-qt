// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
