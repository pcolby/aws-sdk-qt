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

#include "replaceroutetableassociationresponse.h"
#include "replaceroutetableassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceRouteTableAssociationResponse
 *
 * @brief  Handles EC2 ReplaceRouteTableAssociation responses.
 *
 * @see    EC2Client::replaceRouteTableAssociation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceRouteTableAssociationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReplaceRouteTableAssociationResponsePrivate(this), parent)
{
    setRequest(new ReplaceRouteTableAssociationRequest(request));
    setReply(reply);
}

const ReplaceRouteTableAssociationRequest * ReplaceRouteTableAssociationResponse::request() const
{
    Q_D(const ReplaceRouteTableAssociationResponse);
    return static_cast<const ReplaceRouteTableAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReplaceRouteTableAssociation response.
 *
 * @param  response  Response to parse.
 */
void ReplaceRouteTableAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceRouteTableAssociationResponsePrivate
 *
 * @brief  Private implementation for ReplaceRouteTableAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteTableAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceRouteTableAssociationResponse instance.
 */
ReplaceRouteTableAssociationResponsePrivate::ReplaceRouteTableAssociationResponsePrivate(
    ReplaceRouteTableAssociationQueueResponse * const q) : ReplaceRouteTableAssociationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReplaceRouteTableAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceRouteTableAssociationResponsePrivate::ReplaceRouteTableAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceRouteTableAssociationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
