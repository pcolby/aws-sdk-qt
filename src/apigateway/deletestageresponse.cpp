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

#include "deletestageresponse.h"
#include "deletestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteStageResponse
 *
 * @brief  Handles APIGateway DeleteStage responses.
 *
 * @see    APIGatewayClient::deleteStage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteStageResponsePrivate(this), parent)
{
    setRequest(new DeleteStageRequest(request));
    setReply(reply);
}

const DeleteStageRequest * DeleteStageResponse::request() const
{
    Q_D(const DeleteStageResponse);
    return static_cast<const DeleteStageRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteStage response.
 *
 * @param  response  Response to parse.
 */
void DeleteStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStageResponsePrivate
 *
 * @brief  Private implementation for DeleteStageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStageResponse instance.
 */
DeleteStageResponsePrivate::DeleteStageResponsePrivate(
    DeleteStageQueueResponse * const q) : DeleteStagePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStageResponsePrivate::DeleteStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
