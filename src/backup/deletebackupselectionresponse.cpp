// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupselectionresponse.h"
#include "deletebackupselectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupSelectionResponse
 * \brief The DeleteBackupSelectionResponse class provides an interace for Backup DeleteBackupSelection responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupSelection
 */

/*!
 * Constructs a DeleteBackupSelectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupSelectionResponse::DeleteBackupSelectionResponse(
        const DeleteBackupSelectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupSelectionResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupSelectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupSelectionRequest * DeleteBackupSelectionResponse::request() const
{
    Q_D(const DeleteBackupSelectionResponse);
    return static_cast<const DeleteBackupSelectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupSelection \a response.
 */
void DeleteBackupSelectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupSelectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupSelectionResponsePrivate
 * \brief The DeleteBackupSelectionResponsePrivate class provides private implementation for DeleteBackupSelectionResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupSelectionResponsePrivate object with public implementation \a q.
 */
DeleteBackupSelectionResponsePrivate::DeleteBackupSelectionResponsePrivate(
    DeleteBackupSelectionResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupSelection response element from \a xml.
 */
void DeleteBackupSelectionResponsePrivate::parseDeleteBackupSelectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupSelectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
