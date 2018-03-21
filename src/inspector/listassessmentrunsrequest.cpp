/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listassessmentrunsrequest.h"
#include "listassessmentrunsrequest_p.h"
#include "listassessmentrunsresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  ListAssessmentRunsRequest
 *
 * @brief  Implements Inspector ListAssessmentRuns requests.
 *
 * @see    InspectorClient::listAssessmentRuns
 */

/**
 * @brief  Constructs a new ListAssessmentRunsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssessmentRunsRequest::ListAssessmentRunsRequest(const ListAssessmentRunsRequest &other)
    : InspectorRequest(new ListAssessmentRunsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssessmentRunsRequest object.
 */
ListAssessmentRunsRequest::ListAssessmentRunsRequest()
    : InspectorRequest(new ListAssessmentRunsRequestPrivate(InspectorRequest::ListAssessmentRunsAction, this))
{

}

bool ListAssessmentRunsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssessmentRunsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssessmentRunsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * ListAssessmentRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentRunsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssessmentRunsRequestPrivate
 *
 * @brief  Private implementation for ListAssessmentRunsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public ListAssessmentRunsRequest instance.
 */
ListAssessmentRunsRequestPrivate::ListAssessmentRunsRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentRunsRequest * const q)
    : ListAssessmentRunsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentRunsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssessmentRunsRequest instance.
 */
ListAssessmentRunsRequestPrivate::ListAssessmentRunsRequestPrivate(
    const ListAssessmentRunsRequestPrivate &other, ListAssessmentRunsRequest * const q)
    : ListAssessmentRunsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
