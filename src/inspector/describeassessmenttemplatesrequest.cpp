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

#include "describeassessmenttemplatesrequest.h"
#include "describeassessmenttemplatesrequest_p.h"
#include "describeassessmenttemplatesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeAssessmentTemplatesRequest
 *
 * @brief  Implements Inspector DescribeAssessmentTemplates requests.
 *
 * @see    InspectorClient::describeAssessmentTemplates
 */

/**
 * @brief  Constructs a new DescribeAssessmentTemplatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest(const DescribeAssessmentTemplatesRequest &other)
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAssessmentTemplatesRequest object.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest()
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(InspectorRequest::DescribeAssessmentTemplatesAction, this))
{

}

bool DescribeAssessmentTemplatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAssessmentTemplatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAssessmentTemplatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DescribeAssessmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTemplatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAssessmentTemplatesRequestPrivate
 *
 * @brief  Private implementation for DescribeAssessmentTemplatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeAssessmentTemplatesRequest instance.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTemplatesRequest * const q)
    : DescribeAssessmentTemplatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTemplatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAssessmentTemplatesRequest instance.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const DescribeAssessmentTemplatesRequestPrivate &other, DescribeAssessmentTemplatesRequest * const q)
    : DescribeAssessmentTemplatesPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
