// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefleetadvisordatabasesresponse.h"
#include "deletefleetadvisordatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorDatabasesResponse
 * \brief The DeleteFleetAdvisorDatabasesResponse class provides an interace for DatabaseMigration DeleteFleetAdvisorDatabases responses.
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
 * \sa DatabaseMigrationClient::deleteFleetAdvisorDatabases
 */

/*!
 * Constructs a DeleteFleetAdvisorDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetAdvisorDatabasesResponse::DeleteFleetAdvisorDatabasesResponse(
        const DeleteFleetAdvisorDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteFleetAdvisorDatabasesResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetAdvisorDatabasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetAdvisorDatabasesRequest * DeleteFleetAdvisorDatabasesResponse::request() const
{
    Q_D(const DeleteFleetAdvisorDatabasesResponse);
    return static_cast<const DeleteFleetAdvisorDatabasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteFleetAdvisorDatabases \a response.
 */
void DeleteFleetAdvisorDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetAdvisorDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteFleetAdvisorDatabasesResponsePrivate
 * \brief The DeleteFleetAdvisorDatabasesResponsePrivate class provides private implementation for DeleteFleetAdvisorDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteFleetAdvisorDatabasesResponsePrivate object with public implementation \a q.
 */
DeleteFleetAdvisorDatabasesResponsePrivate::DeleteFleetAdvisorDatabasesResponsePrivate(
    DeleteFleetAdvisorDatabasesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteFleetAdvisorDatabases response element from \a xml.
 */
void DeleteFleetAdvisorDatabasesResponsePrivate::parseDeleteFleetAdvisorDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetAdvisorDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
