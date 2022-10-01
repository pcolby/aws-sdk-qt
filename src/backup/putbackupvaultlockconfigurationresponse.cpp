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

#include "putbackupvaultlockconfigurationresponse.h"
#include "putbackupvaultlockconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultLockConfigurationResponse
 * \brief The PutBackupVaultLockConfigurationResponse class provides an interace for Backup PutBackupVaultLockConfiguration responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultLockConfiguration
 */

/*!
 * Constructs a PutBackupVaultLockConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBackupVaultLockConfigurationResponse::PutBackupVaultLockConfigurationResponse(
        const PutBackupVaultLockConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new PutBackupVaultLockConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBackupVaultLockConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBackupVaultLockConfigurationRequest * PutBackupVaultLockConfigurationResponse::request() const
{
    Q_D(const PutBackupVaultLockConfigurationResponse);
    return static_cast<const PutBackupVaultLockConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup PutBackupVaultLockConfiguration \a response.
 */
void PutBackupVaultLockConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBackupVaultLockConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::PutBackupVaultLockConfigurationResponsePrivate
 * \brief The PutBackupVaultLockConfigurationResponsePrivate class provides private implementation for PutBackupVaultLockConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultLockConfigurationResponsePrivate object with public implementation \a q.
 */
PutBackupVaultLockConfigurationResponsePrivate::PutBackupVaultLockConfigurationResponsePrivate(
    PutBackupVaultLockConfigurationResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup PutBackupVaultLockConfiguration response element from \a xml.
 */
void PutBackupVaultLockConfigurationResponsePrivate::parsePutBackupVaultLockConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBackupVaultLockConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
