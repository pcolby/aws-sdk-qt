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

#include "refreshschemasresponse.h"
#include "refreshschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::RefreshSchemasResponse
 * \brief The RefreshSchemasResponse class provides an interace for DatabaseMigrationService RefreshSchemas responses.
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
 * \sa DatabaseMigrationServiceClient::refreshSchemas
 */

/*!
 * Constructs a RefreshSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
RefreshSchemasResponse::RefreshSchemasResponse(
        const RefreshSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new RefreshSchemasResponsePrivate(this), parent)
{
    setRequest(new RefreshSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RefreshSchemasRequest * RefreshSchemasResponse::request() const
{
    Q_D(const RefreshSchemasResponse);
    return static_cast<const RefreshSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService RefreshSchemas \a response.
 */
void RefreshSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RefreshSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::RefreshSchemasResponsePrivate
 * \brief The RefreshSchemasResponsePrivate class provides private implementation for RefreshSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a RefreshSchemasResponsePrivate object with public implementation \a q.
 */
RefreshSchemasResponsePrivate::RefreshSchemasResponsePrivate(
    RefreshSchemasResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService RefreshSchemas response element from \a xml.
 */
void RefreshSchemasResponsePrivate::parseRefreshSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RefreshSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
