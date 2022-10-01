// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreportplanrequest.h"
#include "createreportplanrequest_p.h"
#include "createreportplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateReportPlanRequest
 * \brief The CreateReportPlanRequest class provides an interface for Backup CreateReportPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createReportPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReportPlanRequest::CreateReportPlanRequest(const CreateReportPlanRequest &other)
    : BackupRequest(new CreateReportPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReportPlanRequest object.
 */
CreateReportPlanRequest::CreateReportPlanRequest()
    : BackupRequest(new CreateReportPlanRequestPrivate(BackupRequest::CreateReportPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReportPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReportPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReportPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateReportPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::CreateReportPlanRequestPrivate
 * \brief The CreateReportPlanRequestPrivate class provides private implementation for CreateReportPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateReportPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
CreateReportPlanRequestPrivate::CreateReportPlanRequestPrivate(
    const BackupRequest::Action action, CreateReportPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReportPlanRequest
 * class' copy constructor.
 */
CreateReportPlanRequestPrivate::CreateReportPlanRequestPrivate(
    const CreateReportPlanRequestPrivate &other, CreateReportPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
