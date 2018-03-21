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

#include "attachclassiclinkvpcresponse.h"
#include "attachclassiclinkvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AttachClassicLinkVpcResponse
 *
 * @brief  Handles EC2 AttachClassicLinkVpc responses.
 *
 * @see    EC2Client::attachClassicLinkVpc
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachClassicLinkVpcResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AttachClassicLinkVpcResponsePrivate(this), parent)
{
    setRequest(new AttachClassicLinkVpcRequest(request));
    setReply(reply);
}

const AttachClassicLinkVpcRequest * AttachClassicLinkVpcResponse::request() const
{
    Q_D(const AttachClassicLinkVpcResponse);
    return static_cast<const AttachClassicLinkVpcRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AttachClassicLinkVpc response.
 *
 * @param  response  Response to parse.
 */
void AttachClassicLinkVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachClassicLinkVpcResponsePrivate
 *
 * @brief  Private implementation for AttachClassicLinkVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachClassicLinkVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachClassicLinkVpcResponse instance.
 */
AttachClassicLinkVpcResponsePrivate::AttachClassicLinkVpcResponsePrivate(
    AttachClassicLinkVpcQueueResponse * const q) : AttachClassicLinkVpcPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AttachClassicLinkVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachClassicLinkVpcResponsePrivate::AttachClassicLinkVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachClassicLinkVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
