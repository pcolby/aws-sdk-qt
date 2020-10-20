/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
