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

#include "describecopyjobrequest.h"
#include "describecopyjobrequest_p.h"
#include "describecopyjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeCopyJobRequest
 * \brief The DescribeCopyJobRequest class provides an interface for Backup DescribeCopyJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeCopyJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCopyJobRequest::DescribeCopyJobRequest(const DescribeCopyJobRequest &other)
    : BackupRequest(new DescribeCopyJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCopyJobRequest object.
 */
DescribeCopyJobRequest::DescribeCopyJobRequest()
    : BackupRequest(new DescribeCopyJobRequestPrivate(BackupRequest::DescribeCopyJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCopyJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCopyJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCopyJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCopyJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeCopyJobRequestPrivate
 * \brief The DescribeCopyJobRequestPrivate class provides private implementation for DescribeCopyJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeCopyJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeCopyJobRequestPrivate::DescribeCopyJobRequestPrivate(
    const BackupRequest::Action action, DescribeCopyJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCopyJobRequest
 * class' copy constructor.
 */
DescribeCopyJobRequestPrivate::DescribeCopyJobRequestPrivate(
    const DescribeCopyJobRequestPrivate &other, DescribeCopyJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
