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

#include "getslottypesresponse.h"
#include "getslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypesResponse
 *
 * @brief  Handles LexModelBuildingService GetSlotTypes responses.
 *
 * @see    LexModelBuildingServiceClient::getSlotTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSlotTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypesRequest(request));
    setReply(reply);
}

const GetSlotTypesRequest * GetSlotTypesResponse::request() const
{
    Q_D(const GetSlotTypesResponse);
    return static_cast<const GetSlotTypesRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetSlotTypes response.
 *
 * @param  response  Response to parse.
 */
void GetSlotTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSlotTypesResponsePrivate
 *
 * @brief  Private implementation for GetSlotTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSlotTypesResponse instance.
 */
GetSlotTypesResponsePrivate::GetSlotTypesResponsePrivate(
    GetSlotTypesQueueResponse * const q) : GetSlotTypesPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetSlotTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSlotTypesResponsePrivate::GetSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypesResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
