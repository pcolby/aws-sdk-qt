// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationtaskassessmentrunresponse.h"
#include "startreplicationtaskassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRunResponse
 * \brief The StartReplicationTaskAssessmentRunResponse class provides an interace for DatabaseMigration StartReplicationTaskAssessmentRun responses.
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
 * \sa DatabaseMigrationClient::startReplicationTaskAssessmentRun
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplicationTaskAssessmentRunResponse::StartReplicationTaskAssessmentRunResponse(
        const StartReplicationTaskAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new StartReplicationTaskAssessmentRunResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration StartReplicationTaskAssessmentRun \a response.
 */
void StartReplicationTaskAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplicationTaskAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::StartReplicationTaskAssessmentRunResponsePrivate
 * \brief The StartReplicationTaskAssessmentRunResponsePrivate class provides private implementation for StartReplicationTaskAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a StartReplicationTaskAssessmentRunResponsePrivate object with public implementation \a q.
 */
StartReplicationTaskAssessmentRunResponsePrivate::StartReplicationTaskAssessmentRunResponsePrivate(
    StartReplicationTaskAssessmentRunResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration StartReplicationTaskAssessmentRun response element from \a xml.
 */
void StartReplicationTaskAssessmentRunResponsePrivate::parseStartReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
