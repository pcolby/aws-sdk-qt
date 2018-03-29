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

#include "geteventsourcemappingresponse.h"
#include "geteventsourcemappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  GetEventSourceMappingResponse
 *
 * @brief  Handles Lambda GetEventSourceMapping responses.
 *
 * @see    LambdaClient::getEventSourceMapping
 */

/**
 * @brief  Constructs a new GetEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEventSourceMappingResponse::GetEventSourceMappingResponse(
        const GetEventSourceMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetEventSourceMappingResponsePrivate(this), parent)
{
    setRequest(new GetEventSourceMappingRequest(request));
    setReply(reply);
}

const GetEventSourceMappingRequest * GetEventSourceMappingResponse::request() const
{
    Q_D(const GetEventSourceMappingResponse);
    return static_cast<const GetEventSourceMappingRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda GetEventSourceMapping response.
 *
 * @param  response  Response to parse.
 */
void GetEventSourceMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEventSourceMappingResponsePrivate
 *
 * @brief  Private implementation for GetEventSourceMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSourceMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEventSourceMappingResponse instance.
 */
GetEventSourceMappingResponsePrivate::GetEventSourceMappingResponsePrivate(
    GetEventSourceMappingQueueResponse * const q) : GetEventSourceMappingPrivate(q)
{

}

/**
 * @brief  Parse an Lambda GetEventSourceMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEventSourceMappingResponsePrivate::GetEventSourceMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventSourceMappingResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
