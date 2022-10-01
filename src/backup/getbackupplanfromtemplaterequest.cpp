// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupplanfromtemplaterequest.h"
#include "getbackupplanfromtemplaterequest_p.h"
#include "getbackupplanfromtemplateresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanFromTemplateRequest
 * \brief The GetBackupPlanFromTemplateRequest class provides an interface for Backup GetBackupPlanFromTemplate requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlanFromTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupPlanFromTemplateRequest::GetBackupPlanFromTemplateRequest(const GetBackupPlanFromTemplateRequest &other)
    : BackupRequest(new GetBackupPlanFromTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupPlanFromTemplateRequest object.
 */
GetBackupPlanFromTemplateRequest::GetBackupPlanFromTemplateRequest()
    : BackupRequest(new GetBackupPlanFromTemplateRequestPrivate(BackupRequest::GetBackupPlanFromTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupPlanFromTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupPlanFromTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupPlanFromTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupPlanFromTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupPlanFromTemplateRequestPrivate
 * \brief The GetBackupPlanFromTemplateRequestPrivate class provides private implementation for GetBackupPlanFromTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanFromTemplateRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupPlanFromTemplateRequestPrivate::GetBackupPlanFromTemplateRequestPrivate(
    const BackupRequest::Action action, GetBackupPlanFromTemplateRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupPlanFromTemplateRequest
 * class' copy constructor.
 */
GetBackupPlanFromTemplateRequestPrivate::GetBackupPlanFromTemplateRequestPrivate(
    const GetBackupPlanFromTemplateRequestPrivate &other, GetBackupPlanFromTemplateRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
