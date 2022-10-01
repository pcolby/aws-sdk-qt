// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsbyresourcerequest.h"
#include "listrecoverypointsbyresourcerequest_p.h"
#include "listrecoverypointsbyresourceresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceRequest
 * \brief The ListRecoveryPointsByResourceRequest class provides an interface for Backup ListRecoveryPointsByResource requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecoveryPointsByResourceRequest::ListRecoveryPointsByResourceRequest(const ListRecoveryPointsByResourceRequest &other)
    : BackupRequest(new ListRecoveryPointsByResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecoveryPointsByResourceRequest object.
 */
ListRecoveryPointsByResourceRequest::ListRecoveryPointsByResourceRequest()
    : BackupRequest(new ListRecoveryPointsByResourceRequestPrivate(BackupRequest::ListRecoveryPointsByResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecoveryPointsByResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecoveryPointsByResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecoveryPointsByResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListRecoveryPointsByResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceRequestPrivate
 * \brief The ListRecoveryPointsByResourceRequestPrivate class provides private implementation for ListRecoveryPointsByResourceRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByResourceRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListRecoveryPointsByResourceRequestPrivate::ListRecoveryPointsByResourceRequestPrivate(
    const BackupRequest::Action action, ListRecoveryPointsByResourceRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecoveryPointsByResourceRequest
 * class' copy constructor.
 */
ListRecoveryPointsByResourceRequestPrivate::ListRecoveryPointsByResourceRequestPrivate(
    const ListRecoveryPointsByResourceRequestPrivate &other, ListRecoveryPointsByResourceRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
