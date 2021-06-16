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

#include "getbackupvaultnotificationsresponse.h"
#include "getbackupvaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupVaultNotificationsResponse
 * \brief The GetBackupVaultNotificationsResponse class provides an interace for Backup GetBackupVaultNotifications responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupVaultNotifications
 */

/*!
 * Constructs a GetBackupVaultNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupVaultNotificationsResponse::GetBackupVaultNotificationsResponse(
        const GetBackupVaultNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new GetBackupVaultNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupVaultNotificationsRequest * GetBackupVaultNotificationsResponse::request() const
{
    Q_D(const GetBackupVaultNotificationsResponse);
    return static_cast<const GetBackupVaultNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupVaultNotifications \a response.
 */
void GetBackupVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupVaultNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupVaultNotificationsResponsePrivate
 * \brief The GetBackupVaultNotificationsResponsePrivate class provides private implementation for GetBackupVaultNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupVaultNotificationsResponsePrivate object with public implementation \a q.
 */
GetBackupVaultNotificationsResponsePrivate::GetBackupVaultNotificationsResponsePrivate(
    GetBackupVaultNotificationsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupVaultNotifications response element from \a xml.
 */
void GetBackupVaultNotificationsResponsePrivate::parseGetBackupVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupVaultNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
