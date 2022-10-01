// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reloadtablesresponse.h"
#include "reloadtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ReloadTablesResponse
 * \brief The ReloadTablesResponse class provides an interace for DatabaseMigration ReloadTables responses.
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
 * \sa DatabaseMigrationClient::reloadTables
 */

/*!
 * Constructs a ReloadTablesResponse object for \a reply to \a request, with parent \a parent.
 */
ReloadTablesResponse::ReloadTablesResponse(
        const ReloadTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new ReloadTablesResponsePrivate(this), parent)
{
    setRequest(new ReloadTablesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReloadTablesRequest * ReloadTablesResponse::request() const
{
    Q_D(const ReloadTablesResponse);
    return static_cast<const ReloadTablesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration ReloadTables \a response.
 */
void ReloadTablesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReloadTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::ReloadTablesResponsePrivate
 * \brief The ReloadTablesResponsePrivate class provides private implementation for ReloadTablesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ReloadTablesResponsePrivate object with public implementation \a q.
 */
ReloadTablesResponsePrivate::ReloadTablesResponsePrivate(
    ReloadTablesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration ReloadTables response element from \a xml.
 */
void ReloadTablesResponsePrivate::parseReloadTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReloadTablesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
