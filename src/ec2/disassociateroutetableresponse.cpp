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

#include "disassociateroutetableresponse.h"
#include "disassociateroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DisassociateRouteTableResponse
 *
 * @brief  Handles EC2 DisassociateRouteTable responses.
 *
 * @see    EC2Client::disassociateRouteTable
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateRouteTableResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateRouteTableResponsePrivate(this), parent)
{
    setRequest(new DisassociateRouteTableRequest(request));
    setReply(reply);
}

const DisassociateRouteTableRequest * DisassociateRouteTableResponse::request() const
{
    Q_D(const DisassociateRouteTableResponse);
    return static_cast<const DisassociateRouteTableRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DisassociateRouteTable response.
 *
 * @param  response  Response to parse.
 */
void DisassociateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateRouteTableResponsePrivate
 *
 * @brief  Private implementation for DisassociateRouteTableResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateRouteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateRouteTableResponse instance.
 */
DisassociateRouteTableResponsePrivate::DisassociateRouteTableResponsePrivate(
    DisassociateRouteTableQueueResponse * const q) : DisassociateRouteTablePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DisassociateRouteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateRouteTableResponsePrivate::DisassociateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRouteTableResponse"));
    /// @todo
}
