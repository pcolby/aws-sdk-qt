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

#include "putbackupvaultnotificationsresponse.h"
#include "putbackupvaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultNotificationsResponse
 * \brief The PutBackupVaultNotificationsResponse class provides an interace for Backup PutBackupVaultNotifications responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultNotifications
 */

/*!
 * Constructs a PutBackupVaultNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
PutBackupVaultNotificationsResponse::PutBackupVaultNotificationsResponse(
        const PutBackupVaultNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new PutBackupVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new PutBackupVaultNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBackupVaultNotificationsRequest * PutBackupVaultNotificationsResponse::request() const
{
    Q_D(const PutBackupVaultNotificationsResponse);
    return static_cast<const PutBackupVaultNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup PutBackupVaultNotifications \a response.
 */
void PutBackupVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBackupVaultNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::PutBackupVaultNotificationsResponsePrivate
 * \brief The PutBackupVaultNotificationsResponsePrivate class provides private implementation for PutBackupVaultNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultNotificationsResponsePrivate object with public implementation \a q.
 */
PutBackupVaultNotificationsResponsePrivate::PutBackupVaultNotificationsResponsePrivate(
    PutBackupVaultNotificationsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup PutBackupVaultNotifications response element from \a xml.
 */
void PutBackupVaultNotificationsResponsePrivate::parsePutBackupVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBackupVaultNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
