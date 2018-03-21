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

#include "countopenworkflowexecutionsrequest.h"
#include "countopenworkflowexecutionsrequest_p.h"
#include "countopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  CountOpenWorkflowExecutionsRequest
 *
 * @brief  Implements SWF CountOpenWorkflowExecutions requests.
 *
 * @see    SWFClient::countOpenWorkflowExecutions
 */

/**
 * @brief  Constructs a new CountOpenWorkflowExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountOpenWorkflowExecutionsResponse::CountOpenWorkflowExecutionsResponse(

/**
 * @brief  Constructs a new CountOpenWorkflowExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest(const CountOpenWorkflowExecutionsRequest &other)
    : SWFRequest(new CountOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CountOpenWorkflowExecutionsRequest object.
 */
CountOpenWorkflowExecutionsRequest::CountOpenWorkflowExecutionsRequest()
    : SWFRequest(new CountOpenWorkflowExecutionsRequestPrivate(SWFRequest::CountOpenWorkflowExecutionsAction, this))
{

}

bool CountOpenWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CountOpenWorkflowExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CountOpenWorkflowExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * CountOpenWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new CountOpenWorkflowExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CountOpenWorkflowExecutionsRequestPrivate
 *
 * @brief  Private implementation for CountOpenWorkflowExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountOpenWorkflowExecutionsRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public CountOpenWorkflowExecutionsRequest instance.
 */
CountOpenWorkflowExecutionsRequestPrivate::CountOpenWorkflowExecutionsRequestPrivate(
    const SWFRequest::Action action, CountOpenWorkflowExecutionsRequest * const q)
    : CountOpenWorkflowExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CountOpenWorkflowExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CountOpenWorkflowExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CountOpenWorkflowExecutionsRequest instance.
 */
CountOpenWorkflowExecutionsRequestPrivate::CountOpenWorkflowExecutionsRequestPrivate(
    const CountOpenWorkflowExecutionsRequestPrivate &other, CountOpenWorkflowExecutionsRequest * const q)
    : CountOpenWorkflowExecutionsPrivate(other, q)
{

}
