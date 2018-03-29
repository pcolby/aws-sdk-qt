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

#include "getendpointattributesresponse.h"
#include "getendpointattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  GetEndpointAttributesResponse
 *
 * @brief  Handles SNS GetEndpointAttributes responses.
 *
 * @see    SNSClient::getEndpointAttributes
 */

/**
 * @brief  Constructs a new GetEndpointAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEndpointAttributesResponse::GetEndpointAttributesResponse(
        const GetEndpointAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new GetEndpointAttributesResponsePrivate(this), parent)
{
    setRequest(new GetEndpointAttributesRequest(request));
    setReply(reply);
}

const GetEndpointAttributesRequest * GetEndpointAttributesResponse::request() const
{
    Q_D(const GetEndpointAttributesResponse);
    return static_cast<const GetEndpointAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS GetEndpointAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetEndpointAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEndpointAttributesResponsePrivate
 *
 * @brief  Private implementation for GetEndpointAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEndpointAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEndpointAttributesResponse instance.
 */
GetEndpointAttributesResponsePrivate::GetEndpointAttributesResponsePrivate(
    GetEndpointAttributesQueueResponse * const q) : GetEndpointAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SNS GetEndpointAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEndpointAttributesResponsePrivate::GetEndpointAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
