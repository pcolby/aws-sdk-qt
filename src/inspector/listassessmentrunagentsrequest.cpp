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

#include "listassessmentrunagentsrequest.h"
#include "listassessmentrunagentsrequest_p.h"
#include "listassessmentrunagentsresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  ListAssessmentRunAgentsRequest
 *
 * @brief  Implements Inspector ListAssessmentRunAgents requests.
 *
 * @see    InspectorClient::listAssessmentRunAgents
 */

/**
 * @brief  Constructs a new ListAssessmentRunAgentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssessmentRunAgentsResponse::ListAssessmentRunAgentsResponse(

/**
 * @brief  Constructs a new ListAssessmentRunAgentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssessmentRunAgentsRequest::ListAssessmentRunAgentsRequest(const ListAssessmentRunAgentsRequest &other)
    : InspectorRequest(new ListAssessmentRunAgentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssessmentRunAgentsRequest object.
 */
ListAssessmentRunAgentsRequest::ListAssessmentRunAgentsRequest()
    : InspectorRequest(new ListAssessmentRunAgentsRequestPrivate(InspectorRequest::ListAssessmentRunAgentsAction, this))
{

}

bool ListAssessmentRunAgentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssessmentRunAgentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssessmentRunAgentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * ListAssessmentRunAgentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentRunAgentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssessmentRunAgentsRequestPrivate
 *
 * @brief  Private implementation for ListAssessmentRunAgentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunAgentsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public ListAssessmentRunAgentsRequest instance.
 */
ListAssessmentRunAgentsRequestPrivate::ListAssessmentRunAgentsRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentRunAgentsRequest * const q)
    : ListAssessmentRunAgentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunAgentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentRunAgentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssessmentRunAgentsRequest instance.
 */
ListAssessmentRunAgentsRequestPrivate::ListAssessmentRunAgentsRequestPrivate(
    const ListAssessmentRunAgentsRequestPrivate &other, ListAssessmentRunAgentsRequest * const q)
    : ListAssessmentRunAgentsPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
