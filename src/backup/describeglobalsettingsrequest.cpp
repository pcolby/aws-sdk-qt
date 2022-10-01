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

#include "describeglobalsettingsrequest.h"
#include "describeglobalsettingsrequest_p.h"
#include "describeglobalsettingsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeGlobalSettingsRequest
 * \brief The DescribeGlobalSettingsRequest class provides an interface for Backup DescribeGlobalSettings requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeGlobalSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalSettingsRequest::DescribeGlobalSettingsRequest(const DescribeGlobalSettingsRequest &other)
    : BackupRequest(new DescribeGlobalSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalSettingsRequest object.
 */
DescribeGlobalSettingsRequest::DescribeGlobalSettingsRequest()
    : BackupRequest(new DescribeGlobalSettingsRequestPrivate(BackupRequest::DescribeGlobalSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeGlobalSettingsRequestPrivate
 * \brief The DescribeGlobalSettingsRequestPrivate class provides private implementation for DescribeGlobalSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeGlobalSettingsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeGlobalSettingsRequestPrivate::DescribeGlobalSettingsRequestPrivate(
    const BackupRequest::Action action, DescribeGlobalSettingsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalSettingsRequest
 * class' copy constructor.
 */
DescribeGlobalSettingsRequestPrivate::DescribeGlobalSettingsRequestPrivate(
    const DescribeGlobalSettingsRequestPrivate &other, DescribeGlobalSettingsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
