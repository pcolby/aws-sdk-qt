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

#include "getmodelresponse.h"
#include "getmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetModelResponse
 *
 * @brief  Handles APIGateway GetModel responses.
 *
 * @see    APIGatewayClient::getModel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetModelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetModelResponsePrivate(this), parent)
{
    setRequest(new GetModelRequest(request));
    setReply(reply);
}

const GetModelRequest * GetModelResponse::request() const
{
    Q_D(const GetModelResponse);
    return static_cast<const GetModelRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetModel response.
 *
 * @param  response  Response to parse.
 */
void GetModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetModelResponsePrivate
 *
 * @brief  Private implementation for GetModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetModelResponse instance.
 */
GetModelResponsePrivate::GetModelResponsePrivate(
    GetModelQueueResponse * const q) : GetModelPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetModelResponsePrivate::GetModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
