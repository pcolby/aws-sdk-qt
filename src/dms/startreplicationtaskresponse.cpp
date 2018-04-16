/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startreplicationtaskresponse.h"
#include "startreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::StartReplicationTaskResponse
 *
 * \brief The StartReplicationTaskResponse class provides an interace for DatabaseMigrationService StartReplicationTask responses.
 *
 * \ingroup DatabaseMigrationService
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
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::startReplicationTask
 */

/*!
 * @brief  Constructs a new StartReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartReplicationTaskResponse::StartReplicationTaskResponse(
        const StartReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StartReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new StartReplicationTaskRequest(request));
    setReply(reply);
}

const StartReplicationTaskRequest * StartReplicationTaskResponse::request() const
{
    Q_D(const StartReplicationTaskResponse);
    return static_cast<const StartReplicationTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService StartReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void StartReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartReplicationTaskResponsePrivate
 *
 * \brief Private implementation for StartReplicationTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartReplicationTaskResponse instance.
 */
StartReplicationTaskResponsePrivate::StartReplicationTaskResponsePrivate(
    StartReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService StartReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartReplicationTaskResponsePrivate::parseStartReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
