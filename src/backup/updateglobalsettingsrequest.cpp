// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
