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

#include "peervpcresponse.h"
#include "peervpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  PeerVpcResponse
 *
 * @brief  Handles Lightsail PeerVpc responses.
 *
 * @see    LightsailClient::peerVpc
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PeerVpcResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new PeerVpcResponsePrivate(this), parent)
{
    setRequest(new PeerVpcRequest(request));
    setReply(reply);
}

const PeerVpcRequest * PeerVpcResponse::request() const
{
    Q_D(const PeerVpcResponse);
    return static_cast<const PeerVpcRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail PeerVpc response.
 *
 * @param  response  Response to parse.
 */
void PeerVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PeerVpcResponsePrivate
 *
 * @brief  Private implementation for PeerVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PeerVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PeerVpcResponse instance.
 */
PeerVpcResponsePrivate::PeerVpcResponsePrivate(
    PeerVpcQueueResponse * const q) : PeerVpcPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail PeerVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PeerVpcResponsePrivate::PeerVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PeerVpcResponse"));
    /// @todo
}
