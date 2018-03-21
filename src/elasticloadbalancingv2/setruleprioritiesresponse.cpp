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

#include "setruleprioritiesresponse.h"
#include "setruleprioritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetRulePrioritiesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 SetRulePriorities responses.
 *
 * @see    ElasticLoadBalancingv2Client::setRulePriorities
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetRulePrioritiesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new SetRulePrioritiesResponsePrivate(this), parent)
{
    setRequest(new SetRulePrioritiesRequest(request));
    setReply(reply);
}

const SetRulePrioritiesRequest * SetRulePrioritiesResponse::request() const
{
    Q_D(const SetRulePrioritiesResponse);
    return static_cast<const SetRulePrioritiesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 SetRulePriorities response.
 *
 * @param  response  Response to parse.
 */
void SetRulePrioritiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetRulePrioritiesResponsePrivate
 *
 * @brief  Private implementation for SetRulePrioritiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetRulePrioritiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetRulePrioritiesResponse instance.
 */
SetRulePrioritiesResponsePrivate::SetRulePrioritiesResponsePrivate(
    SetRulePrioritiesQueueResponse * const q) : SetRulePrioritiesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 SetRulePrioritiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetRulePrioritiesResponsePrivate::SetRulePrioritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetRulePrioritiesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
