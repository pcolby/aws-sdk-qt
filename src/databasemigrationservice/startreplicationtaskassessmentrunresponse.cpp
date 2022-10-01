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

#include "startreplicationtaskassessmentrunresponse.h"
#include "startreplicationtaskassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::StartReplicationTaskAssessmentRunResponse
 * \brief The StartReplicationTaskAssessmentRunResponse class provides an interace for DatabaseMigrationService StartReplicationTaskAssessmentRun responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::startReplicationTaskAssessmentRun
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplicationTaskAssessmentRunResponse::StartReplicationTaskAssessmentRunResponse(
        const StartReplicationTaskAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StartReplicationTaskAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new StartReplicationTaskAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReplicationTaskAssessmentRunRequest * StartReplicationTaskAssessmentRunResponse::request() const
{
    Q_D(const StartReplicationTaskAssessmentRunResponse);
    return static_cast<const StartReplicationTaskAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService StartReplicationTaskAssessmentRun \a response.
 */
void StartReplicationTaskAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplicationTaskAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::StartReplicationTaskAssessmentRunResponsePrivate
 * \brief The StartReplicationTaskAssessmentRunResponsePrivate class provides private implementation for StartReplicationTaskAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRunResponsePrivate object with public implementation \a q.
 */
StartReplicationTaskAssessmentRunResponsePrivate::StartReplicationTaskAssessmentRunResponsePrivate(
    StartReplicationTaskAssessmentRunResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService StartReplicationTaskAssessmentRun response element from \a xml.
 */
void StartReplicationTaskAssessmentRunResponsePrivate::parseStartReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
