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

#include "updatesecuritygroupruledescriptionsingressresponse.h"
#include "updatesecuritygroupruledescriptionsingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  UpdateSecurityGroupRuleDescriptionsIngressResponse
 *
 * @brief  Handles EC2 UpdateSecurityGroupRuleDescriptionsIngress responses.
 *
 * @see    EC2Client::updateSecurityGroupRuleDescriptionsIngress
 */

/**
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSecurityGroupRuleDescriptionsIngressResponse::UpdateSecurityGroupRuleDescriptionsIngressResponse(
        const UpdateSecurityGroupRuleDescriptionsIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate(this), parent)
{
    setRequest(new UpdateSecurityGroupRuleDescriptionsIngressRequest(request));
    setReply(reply);
}

const UpdateSecurityGroupRuleDescriptionsIngressRequest * UpdateSecurityGroupRuleDescriptionsIngressResponse::request() const
{
    Q_D(const UpdateSecurityGroupRuleDescriptionsIngressResponse);
    return static_cast<const UpdateSecurityGroupRuleDescriptionsIngressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 UpdateSecurityGroupRuleDescriptionsIngress response.
 *
 * @param  response  Response to parse.
 */
void UpdateSecurityGroupRuleDescriptionsIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSecurityGroupRuleDescriptionsIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate
 *
 * @brief  Private implementation for UpdateSecurityGroupRuleDescriptionsIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSecurityGroupRuleDescriptionsIngressResponse instance.
 */
UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate::UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate(
    UpdateSecurityGroupRuleDescriptionsIngressResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 UpdateSecurityGroupRuleDescriptionsIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate::parseUpdateSecurityGroupRuleDescriptionsIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecurityGroupRuleDescriptionsIngressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
