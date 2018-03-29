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

#include "listassessmenttemplatesrequest.h"
#include "listassessmenttemplatesrequest_p.h"
#include "listassessmenttemplatesresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  ListAssessmentTemplatesRequest
 *
 * @brief  Implements Inspector ListAssessmentTemplates requests.
 *
 * @see    InspectorClient::listAssessmentTemplates
 */

/**
 * @brief  Constructs a new ListAssessmentTemplatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest(const ListAssessmentTemplatesRequest &other)
    : InspectorRequest(new ListAssessmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssessmentTemplatesRequest object.
 */
ListAssessmentTemplatesRequest::ListAssessmentTemplatesRequest()
    : InspectorRequest(new ListAssessmentTemplatesRequestPrivate(InspectorRequest::ListAssessmentTemplatesAction, this))
{

}

bool ListAssessmentTemplatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssessmentTemplatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssessmentTemplatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * ListAssessmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListAssessmentTemplatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssessmentTemplatesRequestPrivate
 *
 * @brief  Private implementation for ListAssessmentTemplatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentTemplatesRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public ListAssessmentTemplatesRequest instance.
 */
ListAssessmentTemplatesRequestPrivate::ListAssessmentTemplatesRequestPrivate(
    const InspectorRequest::Action action, ListAssessmentTemplatesRequest * const q)
    : ListAssessmentTemplatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentTemplatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssessmentTemplatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssessmentTemplatesRequest instance.
 */
ListAssessmentTemplatesRequestPrivate::ListAssessmentTemplatesRequestPrivate(
    const ListAssessmentTemplatesRequestPrivate &other, ListAssessmentTemplatesRequest * const q)
    : ListAssessmentTemplatesPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
