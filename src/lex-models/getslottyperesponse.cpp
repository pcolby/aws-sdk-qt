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

#include "getslottyperesponse.h"
#include "getslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypeResponse
 *
 * @brief  Handles LexModelBuildingService GetSlotType responses.
 *
 * @see    LexModelBuildingServiceClient::getSlotType
 */

/**
 * @brief  Constructs a new GetSlotTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSlotTypeResponse::GetSlotTypeResponse(
        const GetSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetSlotTypeResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypeRequest(request));
    setReply(reply);
}

const GetSlotTypeRequest * GetSlotTypeResponse::request() const
{
    Q_D(const GetSlotTypeResponse);
    return static_cast<const GetSlotTypeRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetSlotType response.
 *
 * @param  response  Response to parse.
 */
void GetSlotTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSlotTypeResponsePrivate
 *
 * @brief  Private implementation for GetSlotTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSlotTypeResponse instance.
 */
GetSlotTypeResponsePrivate::GetSlotTypeResponsePrivate(
    GetSlotTypeQueueResponse * const q) : GetSlotTypePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetSlotTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSlotTypeResponsePrivate::GetSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypeResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
