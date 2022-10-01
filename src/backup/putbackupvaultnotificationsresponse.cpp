// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
