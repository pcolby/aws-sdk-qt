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

#include "detachclassiclinkvpcresponse.h"
#include "detachclassiclinkvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DetachClassicLinkVpcResponse
 *
 * @brief  Handles EC2 DetachClassicLinkVpc responses.
 *
 * @see    EC2Client::detachClassicLinkVpc
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachClassicLinkVpcResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachClassicLinkVpcResponsePrivate(this), parent)
{
    setRequest(new DetachClassicLinkVpcRequest(request));
    setReply(reply);
}

const DetachClassicLinkVpcRequest * DetachClassicLinkVpcResponse::request() const
{
    Q_D(const DetachClassicLinkVpcResponse);
    return static_cast<const DetachClassicLinkVpcRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DetachClassicLinkVpc response.
 *
 * @param  response  Response to parse.
 */
void DetachClassicLinkVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachClassicLinkVpcResponsePrivate
 *
 * @brief  Private implementation for DetachClassicLinkVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachClassicLinkVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachClassicLinkVpcResponse instance.
 */
DetachClassicLinkVpcResponsePrivate::DetachClassicLinkVpcResponsePrivate(
    DetachClassicLinkVpcQueueResponse * const q) : DetachClassicLinkVpcPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DetachClassicLinkVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachClassicLinkVpcResponsePrivate::DetachClassicLinkVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachClassicLinkVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
