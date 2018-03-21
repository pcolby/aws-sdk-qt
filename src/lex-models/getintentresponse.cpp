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

#include "getintentresponse.h"
#include "getintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetIntentResponse
 *
 * @brief  Handles LexModelBuildingService GetIntent responses.
 *
 * @see    LexModelBuildingServiceClient::getIntent
 */

/**
 * @brief  Constructs a new GetIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntentResponse::GetIntentResponse(
        const GetIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentResponsePrivate(this), parent)
{
    setRequest(new GetIntentRequest(request));
    setReply(reply);
}

const GetIntentRequest * GetIntentResponse::request() const
{
    Q_D(const GetIntentResponse);
    return static_cast<const GetIntentRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetIntent response.
 *
 * @param  response  Response to parse.
 */
void GetIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIntentResponsePrivate
 *
 * @brief  Private implementation for GetIntentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntentResponse instance.
 */
GetIntentResponsePrivate::GetIntentResponsePrivate(
    GetIntentQueueResponse * const q) : GetIntentPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetIntentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntentResponsePrivate::GetIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
