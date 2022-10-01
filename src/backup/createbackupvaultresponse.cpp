// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    Q_D(const CreateBackupVaultResponse);
    return static_cast<const CreateBackupVaultRequest *>(d->request);
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
