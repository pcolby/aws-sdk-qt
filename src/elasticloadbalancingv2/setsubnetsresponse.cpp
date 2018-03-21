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

#include "setsubnetsresponse.h"
#include "setsubnetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetSubnetsResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 SetSubnets responses.
 *
 * @see    ElasticLoadBalancingv2Client::setSubnets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSubnetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new SetSubnetsResponsePrivate(this), parent)
{
    setRequest(new SetSubnetsRequest(request));
    setReply(reply);
}

const SetSubnetsRequest * SetSubnetsResponse::request() const
{
    Q_D(const SetSubnetsResponse);
    return static_cast<const SetSubnetsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 SetSubnets response.
 *
 * @param  response  Response to parse.
 */
void SetSubnetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetSubnetsResponsePrivate
 *
 * @brief  Private implementation for SetSubnetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSubnetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetSubnetsResponse instance.
 */
SetSubnetsResponsePrivate::SetSubnetsResponsePrivate(
    SetSubnetsQueueResponse * const q) : SetSubnetsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 SetSubnetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetSubnetsResponsePrivate::SetSubnetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSubnetsResponse"));
    /// @todo
}
