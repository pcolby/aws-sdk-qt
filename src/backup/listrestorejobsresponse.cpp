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

#include "listrestorejobsresponse.h"
#include "listrestorejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRestoreJobsResponse
 * \brief The ListRestoreJobsResponse class provides an interace for Backup ListRestoreJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRestoreJobs
 */

/*!
 * Constructs a ListRestoreJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRestoreJobsResponse::ListRestoreJobsResponse(
        const ListRestoreJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListRestoreJobsResponsePrivate(this), parent)
{
    setRequest(new ListRestoreJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRestoreJobsRequest * ListRestoreJobsResponse::request() const
{
    Q_D(const ListRestoreJobsResponse);
    return static_cast<const ListRestoreJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListRestoreJobs \a response.
 */
void ListRestoreJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRestoreJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListRestoreJobsResponsePrivate
 * \brief The ListRestoreJobsResponsePrivate class provides private implementation for ListRestoreJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRestoreJobsResponsePrivate object with public implementation \a q.
 */
ListRestoreJobsResponsePrivate::ListRestoreJobsResponsePrivate(
    ListRestoreJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListRestoreJobs response element from \a xml.
 */
void ListRestoreJobsResponsePrivate::parseListRestoreJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRestoreJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
