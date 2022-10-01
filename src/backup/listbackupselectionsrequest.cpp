// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupselectionsrequest.h"
#include "listbackupselectionsrequest_p.h"
#include "listbackupselectionsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupSelectionsRequest
 * \brief The ListBackupSelectionsRequest class provides an interface for Backup ListBackupSelections requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupSelections
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupSelectionsRequest::ListBackupSelectionsRequest(const ListBackupSelectionsRequest &other)
    : BackupRequest(new ListBackupSelectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupSelectionsRequest object.
 */
ListBackupSelectionsRequest::ListBackupSelectionsRequest()
    : BackupRequest(new ListBackupSelectionsRequestPrivate(BackupRequest::ListBackupSelectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupSelectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupSelectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupSelectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupSelectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupSelectionsRequestPrivate
 * \brief The ListBackupSelectionsRequestPrivate class provides private implementation for ListBackupSelectionsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupSelectionsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupSelectionsRequestPrivate::ListBackupSelectionsRequestPrivate(
    const BackupRequest::Action action, ListBackupSelectionsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupSelectionsRequest
 * class' copy constructor.
 */
ListBackupSelectionsRequestPrivate::ListBackupSelectionsRequestPrivate(
    const ListBackupSelectionsRequestPrivate &other, ListBackupSelectionsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
