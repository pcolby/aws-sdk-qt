/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteruleresponse.h"
#include "deleteruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteRuleResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DeleteRule responses.
 *
 * @see    ElasticLoadBalancingv2Client::deleteRule
 */

/**
 * @brief  Constructs a new DeleteRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRuleResponse::DeleteRuleResponse(
        const DeleteRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeleteRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleRequest(request));
    setReply(reply);
}

const DeleteRuleRequest * DeleteRuleResponse::request() const
{
    Q_D(const DeleteRuleResponse);
    return static_cast<const DeleteRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DeleteRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRuleResponse instance.
 */
DeleteRuleResponsePrivate::DeleteRuleResponsePrivate(
    DeleteRuleResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DeleteRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRuleResponsePrivate::DeleteRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
