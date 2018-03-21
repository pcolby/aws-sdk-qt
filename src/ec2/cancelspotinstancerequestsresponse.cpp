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

#include "cancelspotinstancerequestsresponse.h"
#include "cancelspotinstancerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CancelSpotInstanceRequestsResponse
 *
 * @brief  Handles EC2 CancelSpotInstanceRequests responses.
 *
 * @see    EC2Client::cancelSpotInstanceRequests
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelSpotInstanceRequestsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelSpotInstanceRequestsResponsePrivate(this), parent)
{
    setRequest(new CancelSpotInstanceRequestsRequest(request));
    setReply(reply);
}

const CancelSpotInstanceRequestsRequest * CancelSpotInstanceRequestsResponse::request() const
{
    Q_D(const CancelSpotInstanceRequestsResponse);
    return static_cast<const CancelSpotInstanceRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelSpotInstanceRequests response.
 *
 * @param  response  Response to parse.
 */
void CancelSpotInstanceRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelSpotInstanceRequestsResponsePrivate
 *
 * @brief  Private implementation for CancelSpotInstanceRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelSpotInstanceRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelSpotInstanceRequestsResponse instance.
 */
CancelSpotInstanceRequestsResponsePrivate::CancelSpotInstanceRequestsResponsePrivate(
    CancelSpotInstanceRequestsQueueResponse * const q) : CancelSpotInstanceRequestsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelSpotInstanceRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelSpotInstanceRequestsResponsePrivate::CancelSpotInstanceRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSpotInstanceRequestsResponse"));
    /// @todo
}
