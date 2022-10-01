// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
