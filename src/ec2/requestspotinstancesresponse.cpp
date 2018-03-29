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

#include "requestspotinstancesresponse.h"
#include "requestspotinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  RequestSpotInstancesResponse
 *
 * @brief  Handles EC2 RequestSpotInstances responses.
 *
 * @see    EC2Client::requestSpotInstances
 */

/**
 * @brief  Constructs a new RequestSpotInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestSpotInstancesResponse::RequestSpotInstancesResponse(
        const RequestSpotInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RequestSpotInstancesResponsePrivate(this), parent)
{
    setRequest(new RequestSpotInstancesRequest(request));
    setReply(reply);
}

const RequestSpotInstancesRequest * RequestSpotInstancesResponse::request() const
{
    Q_D(const RequestSpotInstancesResponse);
    return static_cast<const RequestSpotInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RequestSpotInstances response.
 *
 * @param  response  Response to parse.
 */
void RequestSpotInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(RequestSpotInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RequestSpotInstancesResponsePrivate
 *
 * @brief  Private implementation for RequestSpotInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestSpotInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RequestSpotInstancesResponse instance.
 */
RequestSpotInstancesResponsePrivate::RequestSpotInstancesResponsePrivate(
    RequestSpotInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 RequestSpotInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RequestSpotInstancesResponsePrivate::parseRequestSpotInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestSpotInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
