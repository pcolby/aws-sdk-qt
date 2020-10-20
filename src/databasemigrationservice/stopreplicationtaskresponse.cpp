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

#include "stopreplicationtaskresponse.h"
#include "stopreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::StopReplicationTaskResponse
 * \brief The StopReplicationTaskResponse class provides an interace for DatabaseMigrationService StopReplicationTask responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::stopReplicationTask
 */

/*!
 * Constructs a StopReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StopReplicationTaskResponse::StopReplicationTaskResponse(
        const StopReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StopReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new StopReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopReplicationTaskRequest * StopReplicationTaskResponse::request() const
{
    Q_D(const StopReplicationTaskResponse);
    return static_cast<const StopReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService StopReplicationTask \a response.
 */
void StopReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::StopReplicationTaskResponsePrivate
 * \brief The StopReplicationTaskResponsePrivate class provides private implementation for StopReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a StopReplicationTaskResponsePrivate object with public implementation \a q.
 */
StopReplicationTaskResponsePrivate::StopReplicationTaskResponsePrivate(
    StopReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService StopReplicationTask response element from \a xml.
 */
void StopReplicationTaskResponsePrivate::parseStopReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
