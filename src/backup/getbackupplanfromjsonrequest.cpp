// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupplanfromjsonrequest.h"
#include "getbackupplanfromjsonrequest_p.h"
#include "getbackupplanfromjsonresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONRequest
 * \brief The GetBackupPlanFromJSONRequest class provides an interface for Backup GetBackupPlanFromJSON requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlanFromJSON
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupPlanFromJSONRequest::GetBackupPlanFromJSONRequest(const GetBackupPlanFromJSONRequest &other)
    : BackupRequest(new GetBackupPlanFromJSONRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupPlanFromJSONRequest object.
 */
GetBackupPlanFromJSONRequest::GetBackupPlanFromJSONRequest()
    : BackupRequest(new GetBackupPlanFromJSONRequestPrivate(BackupRequest::GetBackupPlanFromJSONAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupPlanFromJSONRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupPlanFromJSONResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupPlanFromJSONRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupPlanFromJSONResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONRequestPrivate
 * \brief The GetBackupPlanFromJSONRequestPrivate class provides private implementation for GetBackupPlanFromJSONRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanFromJSONRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupPlanFromJSONRequestPrivate::GetBackupPlanFromJSONRequestPrivate(
    const BackupRequest::Action action, GetBackupPlanFromJSONRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupPlanFromJSONRequest
 * class' copy constructor.
 */
GetBackupPlanFromJSONRequestPrivate::GetBackupPlanFromJSONRequestPrivate(
    const GetBackupPlanFromJSONRequestPrivate &other, GetBackupPlanFromJSONRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
