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

#include "listbackupselectionsresponse.h"
#include "listbackupselectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupSelectionsResponse
 * \brief The ListBackupSelectionsResponse class provides an interace for Backup ListBackupSelections responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupSelections
 */

/*!
 * Constructs a ListBackupSelectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupSelectionsResponse::ListBackupSelectionsResponse(
        const ListBackupSelectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupSelectionsResponsePrivate(this), parent)
{
    setRequest(new ListBackupSelectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupSelectionsRequest * ListBackupSelectionsResponse::request() const
{
    Q_D(const ListBackupSelectionsResponse);
    return static_cast<const ListBackupSelectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupSelections \a response.
 */
void ListBackupSelectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupSelectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupSelectionsResponsePrivate
 * \brief The ListBackupSelectionsResponsePrivate class provides private implementation for ListBackupSelectionsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupSelectionsResponsePrivate object with public implementation \a q.
 */
ListBackupSelectionsResponsePrivate::ListBackupSelectionsResponsePrivate(
    ListBackupSelectionsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupSelections response element from \a xml.
 */
void ListBackupSelectionsResponsePrivate::parseListBackupSelectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupSelectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
