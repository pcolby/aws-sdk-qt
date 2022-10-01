// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackupselectionresponse.h"
#include "createbackupselectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupSelectionResponse
 * \brief The CreateBackupSelectionResponse class provides an interace for Backup CreateBackupSelection responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupSelection
 */

/*!
 * Constructs a CreateBackupSelectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackupSelectionResponse::CreateBackupSelectionResponse(
        const CreateBackupSelectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateBackupSelectionResponsePrivate(this), parent)
{
    setRequest(new CreateBackupSelectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackupSelectionRequest * CreateBackupSelectionResponse::request() const
{
    Q_D(const CreateBackupSelectionResponse);
    return static_cast<const CreateBackupSelectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup CreateBackupSelection \a response.
 */
void CreateBackupSelectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackupSelectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateBackupSelectionResponsePrivate
 * \brief The CreateBackupSelectionResponsePrivate class provides private implementation for CreateBackupSelectionResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupSelectionResponsePrivate object with public implementation \a q.
 */
CreateBackupSelectionResponsePrivate::CreateBackupSelectionResponsePrivate(
    CreateBackupSelectionResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateBackupSelection response element from \a xml.
 */
void CreateBackupSelectionResponsePrivate::parseCreateBackupSelectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackupSelectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
