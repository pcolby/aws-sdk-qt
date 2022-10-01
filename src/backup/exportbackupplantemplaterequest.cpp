// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
