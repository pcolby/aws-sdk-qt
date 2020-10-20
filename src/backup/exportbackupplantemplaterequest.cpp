/*
    Copyright 2013-2020 Paul Colby

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

#include "exportbackupplantemplaterequest.h"
#include "exportbackupplantemplaterequest_p.h"
#include "exportbackupplantemplateresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ExportBackupPlanTemplateRequest
 * \brief The ExportBackupPlanTemplateRequest class provides an interface for Backup ExportBackupPlanTemplate requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::exportBackupPlanTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
ExportBackupPlanTemplateRequest::ExportBackupPlanTemplateRequest(const ExportBackupPlanTemplateRequest &other)
    : BackupRequest(new ExportBackupPlanTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportBackupPlanTemplateRequest object.
 */
ExportBackupPlanTemplateRequest::ExportBackupPlanTemplateRequest()
    : BackupRequest(new ExportBackupPlanTemplateRequestPrivate(BackupRequest::ExportBackupPlanTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool ExportBackupPlanTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportBackupPlanTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportBackupPlanTemplateRequest::response(QNetworkReply * const reply) const
{
    return new ExportBackupPlanTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ExportBackupPlanTemplateRequestPrivate
 * \brief The ExportBackupPlanTemplateRequestPrivate class provides private implementation for ExportBackupPlanTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ExportBackupPlanTemplateRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ExportBackupPlanTemplateRequestPrivate::ExportBackupPlanTemplateRequestPrivate(
    const BackupRequest::Action action, ExportBackupPlanTemplateRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportBackupPlanTemplateRequest
 * class' copy constructor.
 */
ExportBackupPlanTemplateRequestPrivate::ExportBackupPlanTemplateRequestPrivate(
    const ExportBackupPlanTemplateRequestPrivate &other, ExportBackupPlanTemplateRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
