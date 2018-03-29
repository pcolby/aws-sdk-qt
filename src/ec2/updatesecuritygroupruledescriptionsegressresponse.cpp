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

#include "updatesecuritygroupruledescriptionsegressresponse.h"
#include "updatesecuritygroupruledescriptionsegressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  UpdateSecurityGroupRuleDescriptionsEgressResponse
 *
 * @brief  Handles EC2 UpdateSecurityGroupRuleDescriptionsEgress responses.
 *
 * @see    EC2Client::updateSecurityGroupRuleDescriptionsEgress
 */

/**
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSecurityGroupRuleDescriptionsEgressResponse::UpdateSecurityGroupRuleDescriptionsEgressResponse(
        const UpdateSecurityGroupRuleDescriptionsEgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate(this), parent)
{
    setRequest(new UpdateSecurityGroupRuleDescriptionsEgressRequest(request));
    setReply(reply);
}

const UpdateSecurityGroupRuleDescriptionsEgressRequest * UpdateSecurityGroupRuleDescriptionsEgressResponse::request() const
{
    Q_D(const UpdateSecurityGroupRuleDescriptionsEgressResponse);
    return static_cast<const UpdateSecurityGroupRuleDescriptionsEgressRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 UpdateSecurityGroupRuleDescriptionsEgress response.
 *
 * @param  response  Response to parse.
 */
void UpdateSecurityGroupRuleDescriptionsEgressResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate
 *
 * @brief  Private implementation for UpdateSecurityGroupRuleDescriptionsEgressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSecurityGroupRuleDescriptionsEgressResponse instance.
 */
UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate::UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate(
    UpdateSecurityGroupRuleDescriptionsEgressResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 UpdateSecurityGroupRuleDescriptionsEgressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate::UpdateSecurityGroupRuleDescriptionsEgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecurityGroupRuleDescriptionsEgressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
