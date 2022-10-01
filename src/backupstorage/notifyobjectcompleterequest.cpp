// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyobjectcompleterequest.h"
#include "notifyobjectcompleterequest_p.h"
#include "notifyobjectcompleteresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteRequest
 * \brief The NotifyObjectCompleteRequest class provides an interface for BackupStorage NotifyObjectComplete requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::notifyObjectComplete
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyObjectCompleteRequest::NotifyObjectCompleteRequest(const NotifyObjectCompleteRequest &other)
    : BackupStorageRequest(new NotifyObjectCompleteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyObjectCompleteRequest object.
 */
NotifyObjectCompleteRequest::NotifyObjectCompleteRequest()
    : BackupStorageRequest(new NotifyObjectCompleteRequestPrivate(BackupStorageRequest::NotifyObjectCompleteAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyObjectCompleteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyObjectCompleteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyObjectCompleteRequest::response(QNetworkReply * const reply) const
{
    return new NotifyObjectCompleteResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteRequestPrivate
 * \brief The NotifyObjectCompleteRequestPrivate class provides private implementation for NotifyObjectCompleteRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a NotifyObjectCompleteRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
NotifyObjectCompleteRequestPrivate::NotifyObjectCompleteRequestPrivate(
    const BackupStorageRequest::Action action, NotifyObjectCompleteRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyObjectCompleteRequest
 * class' copy constructor.
 */
NotifyObjectCompleteRequestPrivate::NotifyObjectCompleteRequestPrivate(
    const NotifyObjectCompleteRequestPrivate &other, NotifyObjectCompleteRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws
