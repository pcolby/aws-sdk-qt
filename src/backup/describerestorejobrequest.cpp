/*
    Copyright 2013-2019 Paul Colby

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

#include "describerestorejobrequest.h"
#include "describerestorejobrequest_p.h"
#include "describerestorejobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRestoreJobRequest
 * \brief The DescribeRestoreJobRequest class provides an interface for Backup DescribeRestoreJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRestoreJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRestoreJobRequest::DescribeRestoreJobRequest(const DescribeRestoreJobRequest &other)
    : BackupRequest(new DescribeRestoreJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRestoreJobRequest object.
 */
DescribeRestoreJobRequest::DescribeRestoreJobRequest()
    : BackupRequest(new DescribeRestoreJobRequestPrivate(BackupRequest::DescribeRestoreJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRestoreJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRestoreJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRestoreJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRestoreJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeRestoreJobRequestPrivate
 * \brief The DescribeRestoreJobRequestPrivate class provides private implementation for DescribeRestoreJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRestoreJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeRestoreJobRequestPrivate::DescribeRestoreJobRequestPrivate(
    const BackupRequest::Action action, DescribeRestoreJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRestoreJobRequest
 * class' copy constructor.
 */
DescribeRestoreJobRequestPrivate::DescribeRestoreJobRequestPrivate(
    const DescribeRestoreJobRequestPrivate &other, DescribeRestoreJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
