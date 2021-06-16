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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
