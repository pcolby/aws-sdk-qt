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

#include "listcopyjobsresponse.h"
#include "listcopyjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListCopyJobsResponse
 * \brief The ListCopyJobsResponse class provides an interace for Backup ListCopyJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listCopyJobs
 */

/*!
 * Constructs a ListCopyJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCopyJobsResponse::ListCopyJobsResponse(
        const ListCopyJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListCopyJobsResponsePrivate(this), parent)
{
    setRequest(new ListCopyJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCopyJobsRequest * ListCopyJobsResponse::request() const
{
    return static_cast<const ListCopyJobsRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup ListCopyJobs \a response.
 */
void ListCopyJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCopyJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListCopyJobsResponsePrivate
 * \brief The ListCopyJobsResponsePrivate class provides private implementation for ListCopyJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListCopyJobsResponsePrivate object with public implementation \a q.
 */
ListCopyJobsResponsePrivate::ListCopyJobsResponsePrivate(
    ListCopyJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListCopyJobs response element from \a xml.
 */
void ListCopyJobsResponsePrivate::parseListCopyJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCopyJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
