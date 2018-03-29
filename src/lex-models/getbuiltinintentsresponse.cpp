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

#include "getbuiltinintentsresponse.h"
#include "getbuiltinintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBuiltinIntentsResponse
 *
 * @brief  Handles LexModelBuildingService GetBuiltinIntents responses.
 *
 * @see    LexModelBuildingServiceClient::getBuiltinIntents
 */

/**
 * @brief  Constructs a new GetBuiltinIntentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBuiltinIntentsResponse::GetBuiltinIntentsResponse(
        const GetBuiltinIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBuiltinIntentsResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentsRequest(request));
    setReply(reply);
}

const GetBuiltinIntentsRequest * GetBuiltinIntentsResponse::request() const
{
    Q_D(const GetBuiltinIntentsResponse);
    return static_cast<const GetBuiltinIntentsRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBuiltinIntents response.
 *
 * @param  response  Response to parse.
 */
void GetBuiltinIntentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBuiltinIntentsResponsePrivate
 *
 * @brief  Private implementation for GetBuiltinIntentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBuiltinIntentsResponse instance.
 */
GetBuiltinIntentsResponsePrivate::GetBuiltinIntentsResponsePrivate(
    GetBuiltinIntentsQueueResponse * const q) : GetBuiltinIntentsPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBuiltinIntentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBuiltinIntentsResponsePrivate::GetBuiltinIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
