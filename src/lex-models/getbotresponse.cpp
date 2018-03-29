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

#include "getbotresponse.h"
#include "getbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBotResponse
 *
 * @brief  Handles LexModelBuildingService GetBot responses.
 *
 * @see    LexModelBuildingServiceClient::getBot
 */

/**
 * @brief  Constructs a new GetBotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBotResponse::GetBotResponse(
        const GetBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotResponsePrivate(this), parent)
{
    setRequest(new GetBotRequest(request));
    setReply(reply);
}

const GetBotRequest * GetBotResponse::request() const
{
    Q_D(const GetBotResponse);
    return static_cast<const GetBotRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBot response.
 *
 * @param  response  Response to parse.
 */
void GetBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBotResponsePrivate
 *
 * @brief  Private implementation for GetBotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBotResponse instance.
 */
GetBotResponsePrivate::GetBotResponsePrivate(
    GetBotQueueResponse * const q) : GetBotPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBotResponsePrivate::GetBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
