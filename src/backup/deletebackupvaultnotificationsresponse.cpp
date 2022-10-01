// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
