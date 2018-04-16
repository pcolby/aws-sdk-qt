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

#include "deletereplicationinstanceresponse.h"
#include "deletereplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DeleteReplicationInstanceResponse
 *
 * \brief The DeleteReplicationInstanceResponse class encapsulates DatabaseMigrationService DeleteReplicationInstance responses.
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
 * \sa DatabaseMigrationServiceClient::deleteReplicationInstance
 */

/*!
 * @brief  Constructs a new DeleteReplicationInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DeleteReplicationInstanceRequest * DeleteReplicationInstanceResponse::request() const
{
    Q_D(const DeleteReplicationInstanceResponse);
    return static_cast<const DeleteReplicationInstanceRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService DeleteReplicationInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteReplicationInstanceResponsePrivate
 *
 * \brief Private implementation for DeleteReplicationInstanceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReplicationInstanceResponse instance.
 */
DeleteReplicationInstanceResponsePrivate::DeleteReplicationInstanceResponsePrivate(
    DeleteReplicationInstanceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService DeleteReplicationInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReplicationInstanceResponsePrivate::parseDeleteReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationInstanceResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
