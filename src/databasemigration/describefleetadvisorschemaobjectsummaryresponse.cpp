// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorschemaobjectsummaryresponse.h"
#include "describefleetadvisorschemaobjectsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemaObjectSummaryResponse
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryResponse class provides an interace for DatabaseMigration DescribeFleetAdvisorSchemaObjectSummary responses.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorSchemaObjectSummary
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorSchemaObjectSummaryResponse::DescribeFleetAdvisorSchemaObjectSummaryResponse(
        const DescribeFleetAdvisorSchemaObjectSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAdvisorSchemaObjectSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetAdvisorSchemaObjectSummaryRequest * DescribeFleetAdvisorSchemaObjectSummaryResponse::request() const
{
    Q_D(const DescribeFleetAdvisorSchemaObjectSummaryResponse);
    return static_cast<const DescribeFleetAdvisorSchemaObjectSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeFleetAdvisorSchemaObjectSummary \a response.
 */
void DescribeFleetAdvisorSchemaObjectSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorSchemaObjectSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate
 * \brief The DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate class provides private implementation for DescribeFleetAdvisorSchemaObjectSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate::DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate(
    DescribeFleetAdvisorSchemaObjectSummaryResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeFleetAdvisorSchemaObjectSummary response element from \a xml.
 */
void DescribeFleetAdvisorSchemaObjectSummaryResponsePrivate::parseDescribeFleetAdvisorSchemaObjectSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorSchemaObjectSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
