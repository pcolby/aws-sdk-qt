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

#include "startreportjobresponse.h"
#include "startreportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartReportJobResponse
 * \brief The StartReportJobResponse class provides an interace for Backup StartReportJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startReportJob
 */

/*!
 * Constructs a StartReportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartReportJobResponse::StartReportJobResponse(
        const StartReportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StartReportJobResponsePrivate(this), parent)
{
    setRequest(new StartReportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReportJobRequest * StartReportJobResponse::request() const
{
    Q_D(const StartReportJobResponse);
    return static_cast<const StartReportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StartReportJob \a response.
 */
void StartReportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StartReportJobResponsePrivate
 * \brief The StartReportJobResponsePrivate class provides private implementation for StartReportJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartReportJobResponsePrivate object with public implementation \a q.
 */
StartReportJobResponsePrivate::StartReportJobResponsePrivate(
    StartReportJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StartReportJob response element from \a xml.
 */
void StartReportJobResponsePrivate::parseStartReportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
