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

#include "updateschemaresponse.h"
#include "updateschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UpdateSchemaResponse
 *
 * @brief  Handles CloudDirectory UpdateSchema responses.
 *
 * @see    CloudDirectoryClient::updateSchema
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSchemaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateSchemaResponsePrivate(this), parent)
{
    setRequest(new UpdateSchemaRequest(request));
    setReply(reply);
}

const UpdateSchemaRequest * UpdateSchemaResponse::request() const
{
    Q_D(const UpdateSchemaResponse);
    return static_cast<const UpdateSchemaRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UpdateSchema response.
 *
 * @param  response  Response to parse.
 */
void UpdateSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSchemaResponsePrivate
 *
 * @brief  Private implementation for UpdateSchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSchemaResponse instance.
 */
UpdateSchemaResponsePrivate::UpdateSchemaResponsePrivate(
    UpdateSchemaQueueResponse * const q) : UpdateSchemaPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UpdateSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSchemaResponsePrivate::UpdateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSchemaResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
