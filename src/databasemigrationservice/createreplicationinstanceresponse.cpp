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

#include "createreplicationinstanceresponse.h"
#include "createreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::CreateReplicationInstanceResponse
 * \brief The CreateReplicationInstanceResponse class provides an interace for DatabaseMigrationService CreateReplicationInstance responses.
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
 * \sa DatabaseMigrationServiceClient::createReplicationInstance
 */

/*!
 * Constructs a CreateReplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationInstanceResponse::CreateReplicationInstanceResponse(
        const CreateReplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new CreateReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationInstanceRequest * CreateReplicationInstanceResponse::request() const
{
    Q_D(const CreateReplicationInstanceResponse);
    return static_cast<const CreateReplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService CreateReplicationInstance \a response.
 */
void CreateReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::CreateReplicationInstanceResponsePrivate
 * \brief The CreateReplicationInstanceResponsePrivate class provides private implementation for CreateReplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a CreateReplicationInstanceResponsePrivate object with public implementation \a q.
 */
CreateReplicationInstanceResponsePrivate::CreateReplicationInstanceResponsePrivate(
    CreateReplicationInstanceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService CreateReplicationInstance response element from \a xml.
 */
void CreateReplicationInstanceResponsePrivate::parseCreateReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
