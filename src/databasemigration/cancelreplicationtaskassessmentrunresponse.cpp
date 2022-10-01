// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelreplicationtaskassessmentrunresponse.h"
#include "cancelreplicationtaskassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::CancelReplicationTaskAssessmentRunResponse
 * \brief The CancelReplicationTaskAssessmentRunResponse class provides an interace for DatabaseMigration CancelReplicationTaskAssessmentRun responses.
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
 * \sa DatabaseMigrationClient::cancelReplicationTaskAssessmentRun
 */

/*!
 * Constructs a CancelReplicationTaskAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
CancelReplicationTaskAssessmentRunResponse::CancelReplicationTaskAssessmentRunResponse(
        const CancelReplicationTaskAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new CancelReplicationTaskAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new CancelReplicationTaskAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelReplicationTaskAssessmentRunRequest * CancelReplicationTaskAssessmentRunResponse::request() const
{
    Q_D(const CancelReplicationTaskAssessmentRunResponse);
    return static_cast<const CancelReplicationTaskAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration CancelReplicationTaskAssessmentRun \a response.
 */
void CancelReplicationTaskAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelReplicationTaskAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::CancelReplicationTaskAssessmentRunResponsePrivate
 * \brief The CancelReplicationTaskAssessmentRunResponsePrivate class provides private implementation for CancelReplicationTaskAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a CancelReplicationTaskAssessmentRunResponsePrivate object with public implementation \a q.
 */
CancelReplicationTaskAssessmentRunResponsePrivate::CancelReplicationTaskAssessmentRunResponsePrivate(
    CancelReplicationTaskAssessmentRunResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration CancelReplicationTaskAssessmentRun response element from \a xml.
 */
void CancelReplicationTaskAssessmentRunResponsePrivate::parseCancelReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelReplicationTaskAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
