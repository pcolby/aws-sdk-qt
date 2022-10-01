// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "refreshschemasresponse.h"
#include "refreshschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RefreshSchemasResponse
 * \brief The RefreshSchemasResponse class provides an interace for DatabaseMigration RefreshSchemas responses.
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
 * \sa DatabaseMigrationClient::refreshSchemas
 */

/*!
 * Constructs a RefreshSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
RefreshSchemasResponse::RefreshSchemasResponse(
        const RefreshSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new RefreshSchemasResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration RefreshSchemas \a response.
 */
void RefreshSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RefreshSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::RefreshSchemasResponsePrivate
 * \brief The RefreshSchemasResponsePrivate class provides private implementation for RefreshSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RefreshSchemasResponsePrivate object with public implementation \a q.
 */
RefreshSchemasResponsePrivate::RefreshSchemasResponsePrivate(
    RefreshSchemasResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration RefreshSchemas response element from \a xml.
 */
void RefreshSchemasResponsePrivate::parseRefreshSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RefreshSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
