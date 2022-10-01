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

#include "getbackupselectionresponse.h"
#include "getbackupselectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupSelectionResponse
 * \brief The GetBackupSelectionResponse class provides an interace for Backup GetBackupSelection responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupSelection
 */

/*!
 * Constructs a GetBackupSelectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupSelectionResponse::GetBackupSelectionResponse(
        const GetBackupSelectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupSelectionResponsePrivate(this), parent)
{
    setRequest(new GetBackupSelectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupSelectionRequest * GetBackupSelectionResponse::request() const
{
    Q_D(const GetBackupSelectionResponse);
    return static_cast<const GetBackupSelectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupSelection \a response.
 */
void GetBackupSelectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupSelectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupSelectionResponsePrivate
 * \brief The GetBackupSelectionResponsePrivate class provides private implementation for GetBackupSelectionResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupSelectionResponsePrivate object with public implementation \a q.
 */
GetBackupSelectionResponsePrivate::GetBackupSelectionResponsePrivate(
    GetBackupSelectionResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupSelection response element from \a xml.
 */
void GetBackupSelectionResponsePrivate::parseGetBackupSelectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupSelectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
