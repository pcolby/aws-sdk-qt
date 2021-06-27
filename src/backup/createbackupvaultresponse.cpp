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

#include "createbackupvaultresponse.h"
#include "createbackupvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupVaultResponse
 * \brief The CreateBackupVaultResponse class provides an interace for Backup CreateBackupVault responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupVault
 */

/*!
 * Constructs a CreateBackupVaultResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackupVaultResponse::CreateBackupVaultResponse(
        const CreateBackupVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateBackupVaultResponsePrivate(this), parent)
{
    setRequest(new CreateBackupVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackupVaultRequest * CreateBackupVaultResponse::request() const
{
    return static_cast<const CreateBackupVaultRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup CreateBackupVault \a response.
 */
void CreateBackupVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackupVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateBackupVaultResponsePrivate
 * \brief The CreateBackupVaultResponsePrivate class provides private implementation for CreateBackupVaultResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupVaultResponsePrivate object with public implementation \a q.
 */
CreateBackupVaultResponsePrivate::CreateBackupVaultResponsePrivate(
    CreateBackupVaultResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateBackupVault response element from \a xml.
 */
void CreateBackupVaultResponsePrivate::parseCreateBackupVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackupVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
