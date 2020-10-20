/*
    Copyright 2013-2020 Paul Colby

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

#include "deletereplicationinstanceresponse.h"
#include "deletereplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationInstanceResponse
 * \brief The DeleteReplicationInstanceResponse class provides an interace for DatabaseMigrationService DeleteReplicationInstance responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::deleteReplicationInstance
 */

/*!
 * Constructs a DeleteReplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationInstanceResponse::DeleteReplicationInstanceResponse(
        const DeleteReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationInstanceRequest * DeleteReplicationInstanceResponse::request() const
{
    Q_D(const DeleteReplicationInstanceResponse);
    return static_cast<const DeleteReplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DeleteReplicationInstance \a response.
 */
void DeleteReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationInstanceResponsePrivate
 * \brief The DeleteReplicationInstanceResponsePrivate class provides private implementation for DeleteReplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DeleteReplicationInstanceResponsePrivate object with public implementation \a q.
 */
DeleteReplicationInstanceResponsePrivate::DeleteReplicationInstanceResponsePrivate(
    DeleteReplicationInstanceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DeleteReplicationInstance response element from \a xml.
 */
void DeleteReplicationInstanceResponsePrivate::parseDeleteReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
