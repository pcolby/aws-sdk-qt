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

#include "registertargetsresponse.h"
#include "registertargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  RegisterTargetsResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 RegisterTargets responses.
 *
 * @see    ElasticLoadBalancingv2Client::registerTargets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterTargetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new RegisterTargetsResponsePrivate(this), parent)
{
    setRequest(new RegisterTargetsRequest(request));
    setReply(reply);
}

const RegisterTargetsRequest * RegisterTargetsResponse::request() const
{
    Q_D(const RegisterTargetsResponse);
    return static_cast<const RegisterTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 RegisterTargets response.
 *
 * @param  response  Response to parse.
 */
void RegisterTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterTargetsResponsePrivate
 *
 * @brief  Private implementation for RegisterTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterTargetsResponse instance.
 */
RegisterTargetsResponsePrivate::RegisterTargetsResponsePrivate(
    RegisterTargetsQueueResponse * const q) : RegisterTargetsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 RegisterTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterTargetsResponsePrivate::RegisterTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTargetsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
