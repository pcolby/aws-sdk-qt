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

#include "releasehostsresponse.h"
#include "releasehostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ReleaseHostsResponse
 *
 * @brief  Handles EC2 ReleaseHosts responses.
 *
 * @see    EC2Client::releaseHosts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReleaseHostsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReleaseHostsResponsePrivate(this), parent)
{
    setRequest(new ReleaseHostsRequest(request));
    setReply(reply);
}

const ReleaseHostsRequest * ReleaseHostsResponse::request() const
{
    Q_D(const ReleaseHostsResponse);
    return static_cast<const ReleaseHostsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReleaseHosts response.
 *
 * @param  response  Response to parse.
 */
void ReleaseHostsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReleaseHostsResponsePrivate
 *
 * @brief  Private implementation for ReleaseHostsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseHostsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReleaseHostsResponse instance.
 */
ReleaseHostsResponsePrivate::ReleaseHostsResponsePrivate(
    ReleaseHostsQueueResponse * const q) : ReleaseHostsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReleaseHostsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReleaseHostsResponsePrivate::ReleaseHostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReleaseHostsResponse"));
    /// @todo
}
