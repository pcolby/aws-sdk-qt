// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateregionsettingsrequest.h"
#include "updateregionsettingsrequest_p.h"
#include "updateregionsettingsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateRegionSettingsRequest
 * \brief The UpdateRegionSettingsRequest class provides an interface for Backup UpdateRegionSettings requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateRegionSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRegionSettingsRequest::UpdateRegionSettingsRequest(const UpdateRegionSettingsRequest &other)
    : BackupRequest(new UpdateRegionSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRegionSettingsRequest object.
 */
UpdateRegionSettingsRequest::UpdateRegionSettingsRequest()
    : BackupRequest(new UpdateRegionSettingsRequestPrivate(BackupRequest::UpdateRegionSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegionSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRegionSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegionSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegionSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateRegionSettingsRequestPrivate
 * \brief The UpdateRegionSettingsRequestPrivate class provides private implementation for UpdateRegionSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateRegionSettingsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateRegionSettingsRequestPrivate::UpdateRegionSettingsRequestPrivate(
    const BackupRequest::Action action, UpdateRegionSettingsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegionSettingsRequest
 * class' copy constructor.
 */
UpdateRegionSettingsRequestPrivate::UpdateRegionSettingsRequestPrivate(
    const UpdateRegionSettingsRequestPrivate &other, UpdateRegionSettingsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
