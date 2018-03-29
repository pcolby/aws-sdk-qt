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

#include "estimatetemplatecostrequest.h"
#include "estimatetemplatecostrequest_p.h"
#include "estimatetemplatecostresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  EstimateTemplateCostRequest
 *
 * @brief  Implements CloudFormation EstimateTemplateCost requests.
 *
 * @see    CloudFormationClient::estimateTemplateCost
 */

/**
 * @brief  Constructs a new EstimateTemplateCostRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EstimateTemplateCostRequest::EstimateTemplateCostRequest(const EstimateTemplateCostRequest &other)
    : CloudFormationRequest(new EstimateTemplateCostRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EstimateTemplateCostRequest object.
 */
EstimateTemplateCostRequest::EstimateTemplateCostRequest()
    : CloudFormationRequest(new EstimateTemplateCostRequestPrivate(CloudFormationRequest::EstimateTemplateCostAction, this))
{

}

bool EstimateTemplateCostRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EstimateTemplateCostResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EstimateTemplateCostResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * EstimateTemplateCostRequest::response(QNetworkReply * const reply) const
{
    return new EstimateTemplateCostResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EstimateTemplateCostRequestPrivate
 *
 * @brief  Private implementation for EstimateTemplateCostRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EstimateTemplateCostRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public EstimateTemplateCostRequest instance.
 */
EstimateTemplateCostRequestPrivate::EstimateTemplateCostRequestPrivate(
    const CloudFormationRequest::Action action, EstimateTemplateCostRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EstimateTemplateCostRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EstimateTemplateCostRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EstimateTemplateCostRequest instance.
 */
EstimateTemplateCostRequestPrivate::EstimateTemplateCostRequestPrivate(
    const EstimateTemplateCostRequestPrivate &other, EstimateTemplateCostRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
