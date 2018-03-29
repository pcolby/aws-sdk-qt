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

#include "attachinstancestoloadbalancerresponse.h"
#include "attachinstancestoloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  AttachInstancesToLoadBalancerResponse
 *
 * @brief  Handles Lightsail AttachInstancesToLoadBalancer responses.
 *
 * @see    LightsailClient::attachInstancesToLoadBalancer
 */

/**
 * @brief  Constructs a new AttachInstancesToLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachInstancesToLoadBalancerResponse::AttachInstancesToLoadBalancerResponse(
        const AttachInstancesToLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AttachInstancesToLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new AttachInstancesToLoadBalancerRequest(request));
    setReply(reply);
}

const AttachInstancesToLoadBalancerRequest * AttachInstancesToLoadBalancerResponse::request() const
{
    Q_D(const AttachInstancesToLoadBalancerResponse);
    return static_cast<const AttachInstancesToLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail AttachInstancesToLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void AttachInstancesToLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachInstancesToLoadBalancerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachInstancesToLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for AttachInstancesToLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInstancesToLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachInstancesToLoadBalancerResponse instance.
 */
AttachInstancesToLoadBalancerResponsePrivate::AttachInstancesToLoadBalancerResponsePrivate(
    AttachInstancesToLoadBalancerResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail AttachInstancesToLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachInstancesToLoadBalancerResponsePrivate::AttachInstancesToLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachInstancesToLoadBalancerResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
