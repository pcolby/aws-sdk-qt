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

#include "deleteloadbalancerpolicyresponse.h"
#include "deleteloadbalancerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DeleteLoadBalancerPolicyResponse
 *
 * @brief  Handles ElasticLoadBalancing DeleteLoadBalancerPolicy responses.
 *
 * @see    ElasticLoadBalancingClient::deleteLoadBalancerPolicy
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoadBalancerPolicyResponse::DeleteLoadBalancerPolicyResponse(
        const DeleteLoadBalancerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteLoadBalancerPolicyResponse(new DeleteLoadBalancerPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLoadBalancerPolicyRequest(request));
    setReply(reply);
}

const DeleteLoadBalancerPolicyRequest * DeleteLoadBalancerPolicyResponse::request() const
{
    Q_D(const DeleteLoadBalancerPolicyResponse);
    return static_cast<const DeleteLoadBalancerPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DeleteLoadBalancerPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoadBalancerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLoadBalancerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoadBalancerPolicyResponse instance.
 */
DeleteLoadBalancerPolicyResponsePrivate::DeleteLoadBalancerPolicyResponsePrivate(
    DeleteLoadBalancerPolicyResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DeleteLoadBalancerPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoadBalancerPolicyResponsePrivate::parseDeleteLoadBalancerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoadBalancerPolicyResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
