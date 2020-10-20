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

#include "modifyreplicationtaskresponse.h"
#include "modifyreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::ModifyReplicationTaskResponse
 * \brief The ModifyReplicationTaskResponse class provides an interace for DatabaseMigrationService ModifyReplicationTask responses.
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
 * \sa DatabaseMigrationServiceClient::modifyReplicationTask
 */

/*!
 * Constructs a ModifyReplicationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationTaskResponse::ModifyReplicationTaskResponse(
        const ModifyReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ModifyReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationTaskRequest * ModifyReplicationTaskResponse::request() const
{
    Q_D(const ModifyReplicationTaskResponse);
    return static_cast<const ModifyReplicationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService ModifyReplicationTask \a response.
 */
void ModifyReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::ModifyReplicationTaskResponsePrivate
 * \brief The ModifyReplicationTaskResponsePrivate class provides private implementation for ModifyReplicationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a ModifyReplicationTaskResponsePrivate object with public implementation \a q.
 */
ModifyReplicationTaskResponsePrivate::ModifyReplicationTaskResponsePrivate(
    ModifyReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService ModifyReplicationTask response element from \a xml.
 */
void ModifyReplicationTaskResponsePrivate::parseModifyReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
