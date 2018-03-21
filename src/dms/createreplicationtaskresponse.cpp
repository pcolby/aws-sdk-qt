/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createreplicationtaskresponse.h"
#include "createreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationTaskResponse
 *
 * @brief  Handles DatabaseMigrationService CreateReplicationTask responses.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationTask
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationTaskResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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

/**
 * @brief  Parse a DatabaseMigrationService CreateReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReplicationTaskResponsePrivate
 *
 * @brief  Private implementation for CreateReplicationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationTaskResponse instance.
 */
CreateReplicationTaskResponsePrivate::CreateReplicationTaskResponsePrivate(
    CreateReplicationTaskQueueResponse * const q) : CreateReplicationTaskPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService CreateReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationTaskResponsePrivate::CreateReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationTaskResponse"));
    /// @todo
}
