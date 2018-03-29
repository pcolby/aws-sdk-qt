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

#include "getintentsresponse.h"
#include "getintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetIntentsResponse
 *
 * @brief  Handles LexModelBuildingService GetIntents responses.
 *
 * @see    LexModelBuildingServiceClient::getIntents
 */

/**
 * @brief  Constructs a new GetIntentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntentsResponse::GetIntentsResponse(
        const GetIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentsResponsePrivate(this), parent)
{
    setRequest(new GetIntentsRequest(request));
    setReply(reply);
}

const GetIntentsRequest * GetIntentsResponse::request() const
{
    Q_D(const GetIntentsResponse);
    return static_cast<const GetIntentsRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetIntents response.
 *
 * @param  response  Response to parse.
 */
void GetIntentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIntentsResponsePrivate
 *
 * @brief  Private implementation for GetIntentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntentsResponse instance.
 */
GetIntentsResponsePrivate::GetIntentsResponsePrivate(
    GetIntentsQueueResponse * const q) : GetIntentsPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetIntentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntentsResponsePrivate::GetIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
