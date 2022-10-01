// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateframeworkrequest.h"
#include "updateframeworkrequest_p.h"
#include "updateframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateFrameworkRequest
 * \brief The UpdateFrameworkRequest class provides an interface for Backup UpdateFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateFramework
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFrameworkRequest::UpdateFrameworkRequest(const UpdateFrameworkRequest &other)
    : BackupRequest(new UpdateFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFrameworkRequest object.
 */
UpdateFrameworkRequest::UpdateFrameworkRequest()
    : BackupRequest(new UpdateFrameworkRequestPrivate(BackupRequest::UpdateFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateFrameworkRequestPrivate
 * \brief The UpdateFrameworkRequestPrivate class provides private implementation for UpdateFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateFrameworkRequestPrivate::UpdateFrameworkRequestPrivate(
    const BackupRequest::Action action, UpdateFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFrameworkRequest
 * class' copy constructor.
 */
UpdateFrameworkRequestPrivate::UpdateFrameworkRequestPrivate(
    const UpdateFrameworkRequestPrivate &other, UpdateFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
