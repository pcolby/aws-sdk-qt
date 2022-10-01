// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupplantemplatesrequest.h"
#include "listbackupplantemplatesrequest_p.h"
#include "listbackupplantemplatesresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesRequest
 * \brief The ListBackupPlanTemplatesRequest class provides an interface for Backup ListBackupPlanTemplates requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupPlanTemplatesRequest::ListBackupPlanTemplatesRequest(const ListBackupPlanTemplatesRequest &other)
    : BackupRequest(new ListBackupPlanTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupPlanTemplatesRequest object.
 */
ListBackupPlanTemplatesRequest::ListBackupPlanTemplatesRequest()
    : BackupRequest(new ListBackupPlanTemplatesRequestPrivate(BackupRequest::ListBackupPlanTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupPlanTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupPlanTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupPlanTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupPlanTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesRequestPrivate
 * \brief The ListBackupPlanTemplatesRequestPrivate class provides private implementation for ListBackupPlanTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanTemplatesRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupPlanTemplatesRequestPrivate::ListBackupPlanTemplatesRequestPrivate(
    const BackupRequest::Action action, ListBackupPlanTemplatesRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupPlanTemplatesRequest
 * class' copy constructor.
 */
ListBackupPlanTemplatesRequestPrivate::ListBackupPlanTemplatesRequestPrivate(
    const ListBackupPlanTemplatesRequestPrivate &other, ListBackupPlanTemplatesRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
