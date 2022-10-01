// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::PutObjectRequest
 * \brief The PutObjectRequest class provides an interface for BackupStorage PutObject requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::putObject
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : BackupStorageRequest(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : BackupStorageRequest(new PutObjectRequestPrivate(BackupStorageRequest::PutObjectAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::PutObjectRequestPrivate
 * \brief The PutObjectRequestPrivate class provides private implementation for PutObjectRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a PutObjectRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const BackupStorageRequest::Action action, PutObjectRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws
