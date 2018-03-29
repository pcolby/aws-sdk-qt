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

#include "describeassessmenttargetsrequest.h"
#include "describeassessmenttargetsrequest_p.h"
#include "describeassessmenttargetsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeAssessmentTargetsRequest
 *
 * @brief  Implements Inspector DescribeAssessmentTargets requests.
 *
 * @see    InspectorClient::describeAssessmentTargets
 */

/**
 * @brief  Constructs a new DescribeAssessmentTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest(const DescribeAssessmentTargetsRequest &other)
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAssessmentTargetsRequest object.
 */
DescribeAssessmentTargetsRequest::DescribeAssessmentTargetsRequest()
    : InspectorRequest(new DescribeAssessmentTargetsRequestPrivate(InspectorRequest::DescribeAssessmentTargetsAction, this))
{

}

bool DescribeAssessmentTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAssessmentTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAssessmentTargetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAssessmentTargetsRequestPrivate
 *
 * @brief  Private implementation for DescribeAssessmentTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTargetsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeAssessmentTargetsRequest instance.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTargetsRequest * const q)
    : DescribeAssessmentTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAssessmentTargetsRequest instance.
 */
DescribeAssessmentTargetsRequestPrivate::DescribeAssessmentTargetsRequestPrivate(
    const DescribeAssessmentTargetsRequestPrivate &other, DescribeAssessmentTargetsRequest * const q)
    : DescribeAssessmentTargetsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
