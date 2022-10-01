// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsbybackupvaultresponse.h"
#include "listrecoverypointsbybackupvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultResponse
 * \brief The ListRecoveryPointsByBackupVaultResponse class provides an interace for Backup ListRecoveryPointsByBackupVault responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByBackupVault
 */

/*!
 * Constructs a ListRecoveryPointsByBackupVaultResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryPointsByBackupVaultResponse::ListRecoveryPointsByBackupVaultResponse(
        const ListRecoveryPointsByBackupVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListRecoveryPointsByBackupVaultResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryPointsByBackupVaultRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryPointsByBackupVaultRequest * ListRecoveryPointsByBackupVaultResponse::request() const
{
    Q_D(const ListRecoveryPointsByBackupVaultResponse);
    return static_cast<const ListRecoveryPointsByBackupVaultRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListRecoveryPointsByBackupVault \a response.
 */
void ListRecoveryPointsByBackupVaultResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryPointsByBackupVaultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultResponsePrivate
 * \brief The ListRecoveryPointsByBackupVaultResponsePrivate class provides private implementation for ListRecoveryPointsByBackupVaultResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByBackupVaultResponsePrivate object with public implementation \a q.
 */
ListRecoveryPointsByBackupVaultResponsePrivate::ListRecoveryPointsByBackupVaultResponsePrivate(
    ListRecoveryPointsByBackupVaultResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListRecoveryPointsByBackupVault response element from \a xml.
 */
void ListRecoveryPointsByBackupVaultResponsePrivate::parseListRecoveryPointsByBackupVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryPointsByBackupVaultResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
