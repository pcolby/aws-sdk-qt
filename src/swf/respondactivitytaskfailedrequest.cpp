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

#include "respondactivitytaskfailedrequest.h"
#include "respondactivitytaskfailedrequest_p.h"
#include "respondactivitytaskfailedresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RespondActivityTaskFailedRequest
 *
 * @brief  Implements SWF RespondActivityTaskFailed requests.
 *
 * @see    SWFClient::respondActivityTaskFailed
 */

/**
 * @brief  Constructs a new RespondActivityTaskFailedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondActivityTaskFailedResponse::RespondActivityTaskFailedResponse(

/**
 * @brief  Constructs a new RespondActivityTaskFailedRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest(const RespondActivityTaskFailedRequest &other)
    : SWFRequest(new RespondActivityTaskFailedRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RespondActivityTaskFailedRequest object.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest()
    : SWFRequest(new RespondActivityTaskFailedRequestPrivate(SWFRequest::RespondActivityTaskFailedAction, this))
{

}

bool RespondActivityTaskFailedRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RespondActivityTaskFailedResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RespondActivityTaskFailedResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RespondActivityTaskFailedRequest::response(QNetworkReply * const reply) const
{
    return new RespondActivityTaskFailedResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RespondActivityTaskFailedRequestPrivate
 *
 * @brief  Private implementation for RespondActivityTaskFailedRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskFailedRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RespondActivityTaskFailedRequest instance.
 */
RespondActivityTaskFailedRequestPrivate::RespondActivityTaskFailedRequestPrivate(
    const SWFRequest::Action action, RespondActivityTaskFailedRequest * const q)
    : RespondActivityTaskFailedPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RespondActivityTaskFailedRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RespondActivityTaskFailedRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RespondActivityTaskFailedRequest instance.
 */
RespondActivityTaskFailedRequestPrivate::RespondActivityTaskFailedRequestPrivate(
    const RespondActivityTaskFailedRequestPrivate &other, RespondActivityTaskFailedRequest * const q)
    : RespondActivityTaskFailedPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
