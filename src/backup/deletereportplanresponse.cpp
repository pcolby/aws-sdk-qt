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

#include "deletereportplanresponse.h"
#include "deletereportplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteReportPlanResponse
 * \brief The DeleteReportPlanResponse class provides an interace for Backup DeleteReportPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteReportPlan
 */

/*!
 * Constructs a DeleteReportPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReportPlanResponse::DeleteReportPlanResponse(
        const DeleteReportPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteReportPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteReportPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReportPlanRequest * DeleteReportPlanResponse::request() const
{
    Q_D(const DeleteReportPlanResponse);
    return static_cast<const DeleteReportPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteReportPlan \a response.
 */
void DeleteReportPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteReportPlanResponsePrivate
 * \brief The DeleteReportPlanResponsePrivate class provides private implementation for DeleteReportPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteReportPlanResponsePrivate object with public implementation \a q.
 */
DeleteReportPlanResponsePrivate::DeleteReportPlanResponsePrivate(
    DeleteReportPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteReportPlan response element from \a xml.
 */
void DeleteReportPlanResponsePrivate::parseDeleteReportPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
