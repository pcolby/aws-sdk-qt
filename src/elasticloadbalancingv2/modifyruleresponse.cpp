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

#include "modifyruleresponse.h"
#include "modifyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyRuleResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 ModifyRule responses.
 *
 * @see    ElasticLoadBalancingv2Client::modifyRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyRuleResponsePrivate(this), parent)
{
    setRequest(new ModifyRuleRequest(request));
    setReply(reply);
}

const ModifyRuleRequest * ModifyRuleResponse::request() const
{
    Q_D(const ModifyRuleResponse);
    return static_cast<const ModifyRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 ModifyRule response.
 *
 * @param  response  Response to parse.
 */
void ModifyRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyRuleResponsePrivate
 *
 * @brief  Private implementation for ModifyRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyRuleResponse instance.
 */
ModifyRuleResponsePrivate::ModifyRuleResponsePrivate(
    ModifyRuleQueueResponse * const q) : ModifyRulePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 ModifyRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyRuleResponsePrivate::ModifyRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyRuleResponse"));
    /// @todo
}
