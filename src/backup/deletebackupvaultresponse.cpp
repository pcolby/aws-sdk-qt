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

#include "deletebackupvaultresponse.h"
#include "deletebackupvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultResponse
 * \brief The DeleteBackupVaultResponse class provides an interace for Backup DeleteBackupVault responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVault
 */

/*!
 * Constructs a DeleteBackupVaultResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupVaultResponse::DeleteBackupVaultResponse(
        const DeleteBackupVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupVaultResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupVaultRequest * DeleteBackupVaultResponse::request() const
{
    Q_D(const DeleteBackupVaultResponse);
    return static_cast<const DeleteBackupVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupVault \a response.
 */
void DeleteBackupVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultResponsePrivate
 * \brief The DeleteBackupVaultResponsePrivate class provides private implementation for DeleteBackupVaultResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultResponsePrivate object with public implementation \a q.
 */
DeleteBackupVaultResponsePrivate::DeleteBackupVaultResponsePrivate(
    DeleteBackupVaultResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupVault response element from \a xml.
 */
void DeleteBackupVaultResponsePrivate::parseDeleteBackupVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
