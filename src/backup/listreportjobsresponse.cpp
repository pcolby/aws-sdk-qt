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

#include "listreportjobsresponse.h"
#include "listreportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportJobsResponse
 * \brief The ListReportJobsResponse class provides an interace for Backup ListReportJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportJobs
 */

/*!
 * Constructs a ListReportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportJobsResponse::ListReportJobsResponse(
        const ListReportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListReportJobsResponsePrivate(this), parent)
{
    setRequest(new ListReportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportJobsRequest * ListReportJobsResponse::request() const
{
    Q_D(const ListReportJobsResponse);
    return static_cast<const ListReportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListReportJobs \a response.
 */
void ListReportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListReportJobsResponsePrivate
 * \brief The ListReportJobsResponsePrivate class provides private implementation for ListReportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportJobsResponsePrivate object with public implementation \a q.
 */
ListReportJobsResponsePrivate::ListReportJobsResponsePrivate(
    ListReportJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListReportJobs response element from \a xml.
 */
void ListReportJobsResponsePrivate::parseListReportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
