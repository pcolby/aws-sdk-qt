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

#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsrequest_p.h"
#include "updateglobalsettingsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateGlobalSettingsRequest
 * \brief The UpdateGlobalSettingsRequest class provides an interface for Backup UpdateGlobalSettings requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateGlobalSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest(const UpdateGlobalSettingsRequest &other)
    : BackupRequest(new UpdateGlobalSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGlobalSettingsRequest object.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest()
    : BackupRequest(new UpdateGlobalSettingsRequestPrivate(BackupRequest::UpdateGlobalSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGlobalSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGlobalSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGlobalSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateGlobalSettingsRequestPrivate
 * \brief The UpdateGlobalSettingsRequestPrivate class provides private implementation for UpdateGlobalSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateGlobalSettingsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const BackupRequest::Action action, UpdateGlobalSettingsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalSettingsRequest
 * class' copy constructor.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const UpdateGlobalSettingsRequestPrivate &other, UpdateGlobalSettingsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
