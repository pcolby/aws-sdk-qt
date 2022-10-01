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
