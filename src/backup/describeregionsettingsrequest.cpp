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

#include "describeregionsettingsrequest.h"
#include "describeregionsettingsrequest_p.h"
#include "describeregionsettingsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRegionSettingsRequest
 * \brief The DescribeRegionSettingsRequest class provides an interface for Backup DescribeRegionSettings requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRegionSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRegionSettingsRequest::DescribeRegionSettingsRequest(const DescribeRegionSettingsRequest &other)
    : BackupRequest(new DescribeRegionSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRegionSettingsRequest object.
 */
DescribeRegionSettingsRequest::DescribeRegionSettingsRequest()
    : BackupRequest(new DescribeRegionSettingsRequestPrivate(BackupRequest::DescribeRegionSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRegionSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRegionSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRegionSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRegionSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeRegionSettingsRequestPrivate
 * \brief The DescribeRegionSettingsRequestPrivate class provides private implementation for DescribeRegionSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRegionSettingsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeRegionSettingsRequestPrivate::DescribeRegionSettingsRequestPrivate(
    const BackupRequest::Action action, DescribeRegionSettingsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRegionSettingsRequest
 * class' copy constructor.
 */
DescribeRegionSettingsRequestPrivate::DescribeRegionSettingsRequestPrivate(
    const DescribeRegionSettingsRequestPrivate &other, DescribeRegionSettingsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
