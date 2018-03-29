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

#include "getintentversionsresponse.h"
#include "getintentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetIntentVersionsResponse
 *
 * @brief  Handles LexModelBuildingService GetIntentVersions responses.
 *
 * @see    LexModelBuildingServiceClient::getIntentVersions
 */

/**
 * @brief  Constructs a new GetIntentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntentVersionsResponse::GetIntentVersionsResponse(
        const GetIntentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetIntentVersionsRequest(request));
    setReply(reply);
}

const GetIntentVersionsRequest * GetIntentVersionsResponse::request() const
{
    Q_D(const GetIntentVersionsResponse);
    return static_cast<const GetIntentVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetIntentVersions response.
 *
 * @param  response  Response to parse.
 */
void GetIntentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIntentVersionsResponsePrivate
 *
 * @brief  Private implementation for GetIntentVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntentVersionsResponse instance.
 */
GetIntentVersionsResponsePrivate::GetIntentVersionsResponsePrivate(
    GetIntentVersionsQueueResponse * const q) : GetIntentVersionsPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetIntentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntentVersionsResponsePrivate::GetIntentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentVersionsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
