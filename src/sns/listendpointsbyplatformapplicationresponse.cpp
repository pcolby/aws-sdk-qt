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

#include "listendpointsbyplatformapplicationresponse.h"
#include "listendpointsbyplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ListEndpointsByPlatformApplicationResponse
 *
 * @brief  Handles SNS ListEndpointsByPlatformApplication responses.
 *
 * @see    SNSClient::listEndpointsByPlatformApplication
 */

/**
 * @brief  Constructs a new ListEndpointsByPlatformApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEndpointsByPlatformApplicationResponse::ListEndpointsByPlatformApplicationResponse(
        const ListEndpointsByPlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ListEndpointsByPlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsByPlatformApplicationRequest(request));
    setReply(reply);
}

const ListEndpointsByPlatformApplicationRequest * ListEndpointsByPlatformApplicationResponse::request() const
{
    Q_D(const ListEndpointsByPlatformApplicationResponse);
    return static_cast<const ListEndpointsByPlatformApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListEndpointsByPlatformApplication response.
 *
 * @param  response  Response to parse.
 */
void ListEndpointsByPlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEndpointsByPlatformApplicationResponsePrivate
 *
 * @brief  Private implementation for ListEndpointsByPlatformApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEndpointsByPlatformApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEndpointsByPlatformApplicationResponse instance.
 */
ListEndpointsByPlatformApplicationResponsePrivate::ListEndpointsByPlatformApplicationResponsePrivate(
    ListEndpointsByPlatformApplicationQueueResponse * const q) : ListEndpointsByPlatformApplicationPrivate(q)
{

}

/**
 * @brief  Parse an SNS ListEndpointsByPlatformApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEndpointsByPlatformApplicationResponsePrivate::ListEndpointsByPlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsByPlatformApplicationResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
