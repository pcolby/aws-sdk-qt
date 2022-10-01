// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
