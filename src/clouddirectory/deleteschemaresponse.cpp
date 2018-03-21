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

#include "deleteschemaresponse.h"
#include "deleteschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DeleteSchemaResponse
 *
 * @brief  Handles CloudDirectory DeleteSchema responses.
 *
 * @see    CloudDirectoryClient::deleteSchema
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSchemaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteSchemaResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaRequest(request));
    setReply(reply);
}

const DeleteSchemaRequest * DeleteSchemaResponse::request() const
{
    Q_D(const DeleteSchemaResponse);
    return static_cast<const DeleteSchemaRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DeleteSchema response.
 *
 * @param  response  Response to parse.
 */
void DeleteSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSchemaResponsePrivate
 *
 * @brief  Private implementation for DeleteSchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSchemaResponse instance.
 */
DeleteSchemaResponsePrivate::DeleteSchemaResponsePrivate(
    DeleteSchemaQueueResponse * const q) : DeleteSchemaPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DeleteSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSchemaResponsePrivate::DeleteSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
