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

#include "describeassessmentrunsrequest.h"
#include "describeassessmentrunsrequest_p.h"
#include "describeassessmentrunsresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeAssessmentRunsRequest
 *
 * @brief  Implements Inspector DescribeAssessmentRuns requests.
 *
 * @see    InspectorClient::describeAssessmentRuns
 */

/**
 * @brief  Constructs a new DescribeAssessmentRunsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest(const DescribeAssessmentRunsRequest &other)
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAssessmentRunsRequest object.
 */
DescribeAssessmentRunsRequest::DescribeAssessmentRunsRequest()
    : InspectorRequest(new DescribeAssessmentRunsRequestPrivate(InspectorRequest::DescribeAssessmentRunsAction, this))
{

}

bool DescribeAssessmentRunsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAssessmentRunsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAssessmentRunsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DescribeAssessmentRunsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentRunsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAssessmentRunsRequestPrivate
 *
 * @brief  Private implementation for DescribeAssessmentRunsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentRunsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeAssessmentRunsRequest instance.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentRunsRequest * const q)
    : DescribeAssessmentRunsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentRunsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentRunsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAssessmentRunsRequest instance.
 */
DescribeAssessmentRunsRequestPrivate::DescribeAssessmentRunsRequestPrivate(
    const DescribeAssessmentRunsRequestPrivate &other, DescribeAssessmentRunsRequest * const q)
    : DescribeAssessmentRunsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
