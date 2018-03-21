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

#include "associateroutetableresponse.h"
#include "associateroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AssociateRouteTableResponse
 *
 * @brief  Handles EC2 AssociateRouteTable responses.
 *
 * @see    EC2Client::associateRouteTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateRouteTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AssociateRouteTableResponsePrivate(this), parent)
{
    setRequest(new AssociateRouteTableRequest(request));
    setReply(reply);
}

const AssociateRouteTableRequest * AssociateRouteTableResponse::request() const
{
    Q_D(const AssociateRouteTableResponse);
    return static_cast<const AssociateRouteTableRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AssociateRouteTable response.
 *
 * @param  response  Response to parse.
 */
void AssociateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateRouteTableResponsePrivate
 *
 * @brief  Private implementation for AssociateRouteTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRouteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateRouteTableResponse instance.
 */
AssociateRouteTableResponsePrivate::AssociateRouteTableResponsePrivate(
    AssociateRouteTableQueueResponse * const q) : AssociateRouteTablePrivate(q)
{

}

/**
 * @brief  Parse an EC2 AssociateRouteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateRouteTableResponsePrivate::AssociateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
