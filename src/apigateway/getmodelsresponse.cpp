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

#include "getmodelsresponse.h"
#include "getmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetModelsResponse
 *
 * @brief  Handles APIGateway GetModels responses.
 *
 * @see    APIGatewayClient::getModels
 */

/**
 * @brief  Constructs a new GetModelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetModelsResponse::GetModelsResponse(
        const GetModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetModelsResponsePrivate(this), parent)
{
    setRequest(new GetModelsRequest(request));
    setReply(reply);
}

const GetModelsRequest * GetModelsResponse::request() const
{
    Q_D(const GetModelsResponse);
    return static_cast<const GetModelsRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetModels response.
 *
 * @param  response  Response to parse.
 */
void GetModelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetModelsResponsePrivate
 *
 * @brief  Private implementation for GetModelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetModelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetModelsResponse instance.
 */
GetModelsResponsePrivate::GetModelsResponsePrivate(
    GetModelsQueueResponse * const q) : GetModelsPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetModelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetModelsResponsePrivate::GetModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
