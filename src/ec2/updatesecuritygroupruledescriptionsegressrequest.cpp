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

#include "updatesecuritygroupruledescriptionsegressrequest.h"
#include "updatesecuritygroupruledescriptionsegressrequest_p.h"
#include "updatesecuritygroupruledescriptionsegressresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  UpdateSecurityGroupRuleDescriptionsEgressRequest
 *
 * @brief  Implements EC2 UpdateSecurityGroupRuleDescriptionsEgress requests.
 *
 * @see    EC2Client::updateSecurityGroupRuleDescriptionsEgress
 */

/**
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSecurityGroupRuleDescriptionsEgressRequest::UpdateSecurityGroupRuleDescriptionsEgressRequest(const UpdateSecurityGroupRuleDescriptionsEgressRequest &other)
    : EC2Request(new UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressRequest object.
 */
UpdateSecurityGroupRuleDescriptionsEgressRequest::UpdateSecurityGroupRuleDescriptionsEgressRequest()
    : EC2Request(new UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(EC2Request::UpdateSecurityGroupRuleDescriptionsEgressAction, this))
{

}

bool UpdateSecurityGroupRuleDescriptionsEgressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSecurityGroupRuleDescriptionsEgressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSecurityGroupRuleDescriptionsEgressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * UpdateSecurityGroupRuleDescriptionsEgressRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecurityGroupRuleDescriptionsEgressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate
 *
 * @brief  Private implementation for UpdateSecurityGroupRuleDescriptionsEgressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public UpdateSecurityGroupRuleDescriptionsEgressRequest instance.
 */
UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate::UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(
    const EC2Request::Action action, UpdateSecurityGroupRuleDescriptionsEgressRequest * const q)
    : UpdateSecurityGroupRuleDescriptionsEgressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecurityGroupRuleDescriptionsEgressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSecurityGroupRuleDescriptionsEgressRequest instance.
 */
UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate::UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(
    const UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate &other, UpdateSecurityGroupRuleDescriptionsEgressRequest * const q)
    : UpdateSecurityGroupRuleDescriptionsEgressPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
