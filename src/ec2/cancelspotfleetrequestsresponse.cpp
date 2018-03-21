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

#include "cancelspotfleetrequestsresponse.h"
#include "cancelspotfleetrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CancelSpotFleetRequestsResponse
 *
 * @brief  Handles EC2 CancelSpotFleetRequests responses.
 *
 * @see    EC2Client::cancelSpotFleetRequests
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelSpotFleetRequestsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelSpotFleetRequestsResponsePrivate(this), parent)
{
    setRequest(new CancelSpotFleetRequestsRequest(request));
    setReply(reply);
}

const CancelSpotFleetRequestsRequest * CancelSpotFleetRequestsResponse::request() const
{
    Q_D(const CancelSpotFleetRequestsResponse);
    return static_cast<const CancelSpotFleetRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelSpotFleetRequests response.
 *
 * @param  response  Response to parse.
 */
void CancelSpotFleetRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelSpotFleetRequestsResponsePrivate
 *
 * @brief  Private implementation for CancelSpotFleetRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelSpotFleetRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelSpotFleetRequestsResponse instance.
 */
CancelSpotFleetRequestsResponsePrivate::CancelSpotFleetRequestsResponsePrivate(
    CancelSpotFleetRequestsQueueResponse * const q) : CancelSpotFleetRequestsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelSpotFleetRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelSpotFleetRequestsResponsePrivate::CancelSpotFleetRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSpotFleetRequestsResponse"));
    /// @todo
}
