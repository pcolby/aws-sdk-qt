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

#include "rebootreplicationinstanceresponse.h"
#include "rebootreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RebootReplicationInstanceResponse
 * \brief The RebootReplicationInstanceResponse class provides an interace for DatabaseMigration RebootReplicationInstance responses.
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
 * \sa DatabaseMigrationClient::rebootReplicationInstance
 */

/*!
 * Constructs a RebootReplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RebootReplicationInstanceResponse::RebootReplicationInstanceResponse(
        const RebootReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new RebootReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootReplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootReplicationInstanceRequest * RebootReplicationInstanceResponse::request() const
{
    Q_D(const RebootReplicationInstanceResponse);
    return static_cast<const RebootReplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration RebootReplicationInstance \a response.
 */
void RebootReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::RebootReplicationInstanceResponsePrivate
 * \brief The RebootReplicationInstanceResponsePrivate class provides private implementation for RebootReplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RebootReplicationInstanceResponsePrivate object with public implementation \a q.
 */
RebootReplicationInstanceResponsePrivate::RebootReplicationInstanceResponsePrivate(
    RebootReplicationInstanceResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration RebootReplicationInstance response element from \a xml.
 */
void RebootReplicationInstanceResponsePrivate::parseRebootReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootReplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
