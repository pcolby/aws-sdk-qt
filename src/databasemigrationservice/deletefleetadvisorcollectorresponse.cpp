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

#include "deletefleetadvisorcollectorresponse.h"
#include "deletefleetadvisorcollectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteFleetAdvisorCollectorResponse
 * \brief The DeleteFleetAdvisorCollectorResponse class provides an interace for DatabaseMigrationService DeleteFleetAdvisorCollector responses.
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
 * \sa DatabaseMigrationServiceClient::deleteFleetAdvisorCollector
 */

/*!
 * Constructs a DeleteFleetAdvisorCollectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetAdvisorCollectorResponse::DeleteFleetAdvisorCollectorResponse(
        const DeleteFleetAdvisorCollectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteFleetAdvisorCollectorResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetAdvisorCollectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetAdvisorCollectorRequest * DeleteFleetAdvisorCollectorResponse::request() const
{
    Q_D(const DeleteFleetAdvisorCollectorResponse);
    return static_cast<const DeleteFleetAdvisorCollectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DeleteFleetAdvisorCollector \a response.
 */
void DeleteFleetAdvisorCollectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetAdvisorCollectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DeleteFleetAdvisorCollectorResponsePrivate
 * \brief The DeleteFleetAdvisorCollectorResponsePrivate class provides private implementation for DeleteFleetAdvisorCollectorResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DeleteFleetAdvisorCollectorResponsePrivate object with public implementation \a q.
 */
DeleteFleetAdvisorCollectorResponsePrivate::DeleteFleetAdvisorCollectorResponsePrivate(
    DeleteFleetAdvisorCollectorResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DeleteFleetAdvisorCollector response element from \a xml.
 */
void DeleteFleetAdvisorCollectorResponsePrivate::parseDeleteFleetAdvisorCollectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetAdvisorCollectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
