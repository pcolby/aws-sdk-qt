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

#include "describeframeworkrequest.h"
#include "describeframeworkrequest_p.h"
#include "describeframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeFrameworkRequest
 * \brief The DescribeFrameworkRequest class provides an interface for Backup DescribeFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeFramework
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFrameworkRequest::DescribeFrameworkRequest(const DescribeFrameworkRequest &other)
    : BackupRequest(new DescribeFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFrameworkRequest object.
 */
DescribeFrameworkRequest::DescribeFrameworkRequest()
    : BackupRequest(new DescribeFrameworkRequestPrivate(BackupRequest::DescribeFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeFrameworkRequestPrivate
 * \brief The DescribeFrameworkRequestPrivate class provides private implementation for DescribeFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeFrameworkRequestPrivate::DescribeFrameworkRequestPrivate(
    const BackupRequest::Action action, DescribeFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFrameworkRequest
 * class' copy constructor.
 */
DescribeFrameworkRequestPrivate::DescribeFrameworkRequestPrivate(
    const DescribeFrameworkRequestPrivate &other, DescribeFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
