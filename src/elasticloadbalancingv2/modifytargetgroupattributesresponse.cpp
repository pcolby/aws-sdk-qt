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

#include "modifytargetgroupattributesresponse.h"
#include "modifytargetgroupattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyTargetGroupAttributesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 ModifyTargetGroupAttributes responses.
 *
 * @see    ElasticLoadBalancingv2Client::modifyTargetGroupAttributes
 */

/**
 * @brief  Constructs a new ModifyTargetGroupAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyTargetGroupAttributesResponse::ModifyTargetGroupAttributesResponse(
        const ModifyTargetGroupAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyTargetGroupAttributesResponsePrivate(this), parent)
{
    setRequest(new ModifyTargetGroupAttributesRequest(request));
    setReply(reply);
}

const ModifyTargetGroupAttributesRequest * ModifyTargetGroupAttributesResponse::request() const
{
    Q_D(const ModifyTargetGroupAttributesResponse);
    return static_cast<const ModifyTargetGroupAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 ModifyTargetGroupAttributes response.
 *
 * @param  response  Response to parse.
 */
void ModifyTargetGroupAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyTargetGroupAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyTargetGroupAttributesResponsePrivate
 *
 * @brief  Private implementation for ModifyTargetGroupAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyTargetGroupAttributesResponse instance.
 */
ModifyTargetGroupAttributesResponsePrivate::ModifyTargetGroupAttributesResponsePrivate(
    ModifyTargetGroupAttributesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 ModifyTargetGroupAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyTargetGroupAttributesResponsePrivate::parseModifyTargetGroupAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyTargetGroupAttributesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
