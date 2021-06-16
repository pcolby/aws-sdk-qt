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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
