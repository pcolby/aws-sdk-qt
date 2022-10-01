// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupvaultsrequest.h"
#include "listbackupvaultsrequest_p.h"
#include "listbackupvaultsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupVaultsRequest
 * \brief The ListBackupVaultsRequest class provides an interface for Backup ListBackupVaults requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupVaults
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupVaultsRequest::ListBackupVaultsRequest(const ListBackupVaultsRequest &other)
    : BackupRequest(new ListBackupVaultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupVaultsRequest object.
 */
ListBackupVaultsRequest::ListBackupVaultsRequest()
    : BackupRequest(new ListBackupVaultsRequestPrivate(BackupRequest::ListBackupVaultsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupVaultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupVaultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupVaultsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupVaultsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupVaultsRequestPrivate
 * \brief The ListBackupVaultsRequestPrivate class provides private implementation for ListBackupVaultsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupVaultsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupVaultsRequestPrivate::ListBackupVaultsRequestPrivate(
    const BackupRequest::Action action, ListBackupVaultsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupVaultsRequest
 * class' copy constructor.
 */
ListBackupVaultsRequestPrivate::ListBackupVaultsRequestPrivate(
    const ListBackupVaultsRequestPrivate &other, ListBackupVaultsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
