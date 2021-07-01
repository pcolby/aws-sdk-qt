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

#include "deletebackupvaultnotificationsresponse.h"
#include "deletebackupvaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultNotificationsResponse
 * \brief The DeleteBackupVaultNotificationsResponse class provides an interace for Backup DeleteBackupVaultNotifications responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultNotifications
 */

/*!
 * Constructs a DeleteBackupVaultNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupVaultNotificationsResponse::DeleteBackupVaultNotificationsResponse(
        const DeleteBackupVaultNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupVaultNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupVaultNotificationsRequest * DeleteBackupVaultNotificationsResponse::request() const
{
    Q_D(const DeleteBackupVaultNotificationsResponse);
    return static_cast<const DeleteBackupVaultNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupVaultNotifications \a response.
 */
void DeleteBackupVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupVaultNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultNotificationsResponsePrivate
 * \brief The DeleteBackupVaultNotificationsResponsePrivate class provides private implementation for DeleteBackupVaultNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultNotificationsResponsePrivate object with public implementation \a q.
 */
DeleteBackupVaultNotificationsResponsePrivate::DeleteBackupVaultNotificationsResponsePrivate(
    DeleteBackupVaultNotificationsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupVaultNotifications response element from \a xml.
 */
void DeleteBackupVaultNotificationsResponsePrivate::parseDeleteBackupVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupVaultNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
