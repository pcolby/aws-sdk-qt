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

#include "deletebackupvaultlockconfigurationresponse.h"
#include "deletebackupvaultlockconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultLockConfigurationResponse
 * \brief The DeleteBackupVaultLockConfigurationResponse class provides an interace for Backup DeleteBackupVaultLockConfiguration responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultLockConfiguration
 */

/*!
 * Constructs a DeleteBackupVaultLockConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupVaultLockConfigurationResponse::DeleteBackupVaultLockConfigurationResponse(
        const DeleteBackupVaultLockConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupVaultLockConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupVaultLockConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupVaultLockConfigurationRequest * DeleteBackupVaultLockConfigurationResponse::request() const
{
    Q_D(const DeleteBackupVaultLockConfigurationResponse);
    return static_cast<const DeleteBackupVaultLockConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupVaultLockConfiguration \a response.
 */
void DeleteBackupVaultLockConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupVaultLockConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultLockConfigurationResponsePrivate
 * \brief The DeleteBackupVaultLockConfigurationResponsePrivate class provides private implementation for DeleteBackupVaultLockConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultLockConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBackupVaultLockConfigurationResponsePrivate::DeleteBackupVaultLockConfigurationResponsePrivate(
    DeleteBackupVaultLockConfigurationResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupVaultLockConfiguration response element from \a xml.
 */
void DeleteBackupVaultLockConfigurationResponsePrivate::parseDeleteBackupVaultLockConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupVaultLockConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
