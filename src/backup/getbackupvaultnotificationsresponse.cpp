// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
