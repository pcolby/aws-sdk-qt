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

#include "createreplicationinstanceresponse.h"
#include "createreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationInstanceResponse
 *
 * @brief  Handles DatabaseMigrationService CreateReplicationInstance responses.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationInstance
 */

/**
 * @brief  Constructs a new CreateReplicationInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateReplicationInstanceRequest * CreateReplicationInstanceResponse::request() const
{
    Q_D(const CreateReplicationInstanceResponse);
    return static_cast<const CreateReplicationInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService CreateReplicationInstance response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateReplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReplicationInstanceResponsePrivate
 *
 * @brief  Private implementation for CreateReplicationInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationInstanceResponse instance.
 */
CreateReplicationInstanceResponsePrivate::CreateReplicationInstanceResponsePrivate(
    CreateReplicationInstanceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService CreateReplicationInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationInstanceResponsePrivate::CreateReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationInstanceResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
