// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
