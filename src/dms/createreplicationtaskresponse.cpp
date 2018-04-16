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

#include "createreplicationtaskresponse.h"
#include "createreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::CreateReplicationTaskResponse
 *
 * \brief The CreateReplicationTaskResponse class provides an interace for DatabaseMigrationService CreateReplicationTask responses.
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
 * \sa DatabaseMigrationServiceClient::createReplicationTask
 */

/*!
 * @brief  Constructs a new CreateReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationTaskResponse::CreateReplicationTaskResponse(
        const CreateReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new CreateReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationTaskRequest(request));
    setReply(reply);
}

const CreateReplicationTaskRequest * CreateReplicationTaskResponse::request() const
{
    Q_D(const CreateReplicationTaskResponse);
    return static_cast<const CreateReplicationTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService CreateReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateReplicationTaskResponsePrivate
 *
 * \brief Private implementation for CreateReplicationTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationTaskResponse instance.
 */
CreateReplicationTaskResponsePrivate::CreateReplicationTaskResponsePrivate(
    CreateReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService CreateReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationTaskResponsePrivate::parseCreateReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
