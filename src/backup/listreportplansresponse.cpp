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

#include "listreportplansresponse.h"
#include "listreportplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportPlansResponse
 * \brief The ListReportPlansResponse class provides an interace for Backup ListReportPlans responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportPlans
 */

/*!
 * Constructs a ListReportPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportPlansResponse::ListReportPlansResponse(
        const ListReportPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListReportPlansResponsePrivate(this), parent)
{
    setRequest(new ListReportPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportPlansRequest * ListReportPlansResponse::request() const
{
    Q_D(const ListReportPlansResponse);
    return static_cast<const ListReportPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListReportPlans \a response.
 */
void ListReportPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListReportPlansResponsePrivate
 * \brief The ListReportPlansResponsePrivate class provides private implementation for ListReportPlansResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportPlansResponsePrivate object with public implementation \a q.
 */
ListReportPlansResponsePrivate::ListReportPlansResponsePrivate(
    ListReportPlansResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListReportPlans response element from \a xml.
 */
void ListReportPlansResponsePrivate::parseListReportPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
