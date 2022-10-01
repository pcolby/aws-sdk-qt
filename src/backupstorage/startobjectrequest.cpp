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

#include "startobjectrequest.h"
#include "startobjectrequest_p.h"
#include "startobjectresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::StartObjectRequest
 * \brief The StartObjectRequest class provides an interface for BackupStorage StartObject requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::startObject
 */

/*!
 * Constructs a copy of \a other.
 */
StartObjectRequest::StartObjectRequest(const StartObjectRequest &other)
    : BackupStorageRequest(new StartObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartObjectRequest object.
 */
StartObjectRequest::StartObjectRequest()
    : BackupStorageRequest(new StartObjectRequestPrivate(BackupStorageRequest::StartObjectAction, this))
{

}

/*!
 * \reimp
 */
bool StartObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartObjectRequest::response(QNetworkReply * const reply) const
{
    return new StartObjectResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::StartObjectRequestPrivate
 * \brief The StartObjectRequestPrivate class provides private implementation for StartObjectRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a StartObjectRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
StartObjectRequestPrivate::StartObjectRequestPrivate(
    const BackupStorageRequest::Action action, StartObjectRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartObjectRequest
 * class' copy constructor.
 */
StartObjectRequestPrivate::StartObjectRequestPrivate(
    const StartObjectRequestPrivate &other, StartObjectRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws
