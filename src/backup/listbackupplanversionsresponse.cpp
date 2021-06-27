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

#include "listbackupplanversionsresponse.h"
#include "listbackupplanversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsResponse
 * \brief The ListBackupPlanVersionsResponse class provides an interace for Backup ListBackupPlanVersions responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanVersions
 */

/*!
 * Constructs a ListBackupPlanVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupPlanVersionsResponse::ListBackupPlanVersionsResponse(
        const ListBackupPlanVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupPlanVersionsResponsePrivate(this), parent)
{
    setRequest(new ListBackupPlanVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupPlanVersionsRequest * ListBackupPlanVersionsResponse::request() const
{
    return static_cast<const ListBackupPlanVersionsRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupPlanVersions \a response.
 */
void ListBackupPlanVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupPlanVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsResponsePrivate
 * \brief The ListBackupPlanVersionsResponsePrivate class provides private implementation for ListBackupPlanVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanVersionsResponsePrivate object with public implementation \a q.
 */
ListBackupPlanVersionsResponsePrivate::ListBackupPlanVersionsResponsePrivate(
    ListBackupPlanVersionsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupPlanVersions response element from \a xml.
 */
void ListBackupPlanVersionsResponsePrivate::parseListBackupPlanVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupPlanVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
