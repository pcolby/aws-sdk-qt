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

#include "discoverpollendpointresponse.h"
#include "discoverpollendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/**
 * @class  DiscoverPollEndpointResponse
 *
 * @brief  Handles ECS DiscoverPollEndpoint responses.
 *
 * @see    ECSClient::discoverPollEndpoint
 */

/**
 * @brief  Constructs a new DiscoverPollEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DiscoverPollEndpointResponse::DiscoverPollEndpointResponse(
        const DiscoverPollEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DiscoverPollEndpointResponsePrivate(this), parent)
{
    setRequest(new DiscoverPollEndpointRequest(request));
    setReply(reply);
}

const DiscoverPollEndpointRequest * DiscoverPollEndpointResponse::request() const
{
    Q_D(const DiscoverPollEndpointResponse);
    return static_cast<const DiscoverPollEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a ECS DiscoverPollEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DiscoverPollEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DiscoverPollEndpointResponsePrivate
 *
 * @brief  Private implementation for DiscoverPollEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DiscoverPollEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DiscoverPollEndpointResponse instance.
 */
DiscoverPollEndpointResponsePrivate::DiscoverPollEndpointResponsePrivate(
    DiscoverPollEndpointQueueResponse * const q) : DiscoverPollEndpointPrivate(q)
{

}

/**
 * @brief  Parse an ECS DiscoverPollEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DiscoverPollEndpointResponsePrivate::DiscoverPollEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DiscoverPollEndpointResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
