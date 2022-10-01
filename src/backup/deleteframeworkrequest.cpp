// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteframeworkrequest.h"
#include "deleteframeworkrequest_p.h"
#include "deleteframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteFrameworkRequest
 * \brief The DeleteFrameworkRequest class provides an interface for Backup DeleteFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteFramework
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFrameworkRequest::DeleteFrameworkRequest(const DeleteFrameworkRequest &other)
    : BackupRequest(new DeleteFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFrameworkRequest object.
 */
DeleteFrameworkRequest::DeleteFrameworkRequest()
    : BackupRequest(new DeleteFrameworkRequestPrivate(BackupRequest::DeleteFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteFrameworkRequestPrivate
 * \brief The DeleteFrameworkRequestPrivate class provides private implementation for DeleteFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteFrameworkRequestPrivate::DeleteFrameworkRequestPrivate(
    const BackupRequest::Action action, DeleteFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFrameworkRequest
 * class' copy constructor.
 */
DeleteFrameworkRequestPrivate::DeleteFrameworkRequestPrivate(
    const DeleteFrameworkRequestPrivate &other, DeleteFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
