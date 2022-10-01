// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopreplicationtaskresponse.h"
#include "stopreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StopReplicationTaskResponse
 * \brief The StopReplicationTaskResponse class provides an interace for DatabaseMigration StopReplicationTask responses.
 *
 * \inmodule QtAwsDatabaseMigration
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
 * \sa DatabaseMigrationClient::stopReplicationTask
 */

/*!
 * Constructs a StopReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StopReplicationTaskResponse::StopReplicationTaskResponse(
        const StopReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new StopReplicationTaskResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration StopReplicationTask \a response.
 */
void StopReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::StopReplicationTaskResponsePrivate
 * \brief The StopReplicationTaskResponsePrivate class provides private implementation for StopReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StopReplicationTaskResponsePrivate object with public implementation \a q.
 */
StopReplicationTaskResponsePrivate::StopReplicationTaskResponsePrivate(
    StopReplicationTaskResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration StopReplicationTask response element from \a xml.
 */
void StopReplicationTaskResponsePrivate::parseStopReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
