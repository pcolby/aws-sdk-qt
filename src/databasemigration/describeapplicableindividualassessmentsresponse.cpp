// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicableindividualassessmentsresponse.h"
#include "describeapplicableindividualassessmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeApplicableIndividualAssessmentsResponse
 * \brief The DescribeApplicableIndividualAssessmentsResponse class provides an interace for DatabaseMigration DescribeApplicableIndividualAssessments responses.
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
 * \sa DatabaseMigrationClient::describeApplicableIndividualAssessments
 */

/*!
 * Constructs a DescribeApplicableIndividualAssessmentsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicableIndividualAssessmentsResponse::DescribeApplicableIndividualAssessmentsResponse(
        const DescribeApplicableIndividualAssessmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeApplicableIndividualAssessmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicableIndividualAssessmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicableIndividualAssessmentsRequest * DescribeApplicableIndividualAssessmentsResponse::request() const
{
    Q_D(const DescribeApplicableIndividualAssessmentsResponse);
    return static_cast<const DescribeApplicableIndividualAssessmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeApplicableIndividualAssessments \a response.
 */
void DescribeApplicableIndividualAssessmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicableIndividualAssessmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeApplicableIndividualAssessmentsResponsePrivate
 * \brief The DescribeApplicableIndividualAssessmentsResponsePrivate class provides private implementation for DescribeApplicableIndividualAssessmentsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeApplicableIndividualAssessmentsResponsePrivate object with public implementation \a q.
 */
DescribeApplicableIndividualAssessmentsResponsePrivate::DescribeApplicableIndividualAssessmentsResponsePrivate(
    DescribeApplicableIndividualAssessmentsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeApplicableIndividualAssessments response element from \a xml.
 */
void DescribeApplicableIndividualAssessmentsResponsePrivate::parseDescribeApplicableIndividualAssessmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicableIndividualAssessmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
