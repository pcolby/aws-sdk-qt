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

#include "settaskstatusrequest.h"
#include "settaskstatusrequest_p.h"
#include "settaskstatusresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  SetTaskStatusRequest
 *
 * @brief  Implements DataPipeline SetTaskStatus requests.
 *
 * @see    DataPipelineClient::setTaskStatus
 */

/**
 * @brief  Constructs a new SetTaskStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTaskStatusResponse::SetTaskStatusResponse(

/**
 * @brief  Constructs a new SetTaskStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetTaskStatusRequest::SetTaskStatusRequest(const SetTaskStatusRequest &other)
    : DataPipelineRequest(new SetTaskStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetTaskStatusRequest object.
 */
SetTaskStatusRequest::SetTaskStatusRequest()
    : DataPipelineRequest(new SetTaskStatusRequestPrivate(DataPipelineRequest::SetTaskStatusAction, this))
{

}

bool SetTaskStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetTaskStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetTaskStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * SetTaskStatusRequest::response(QNetworkReply * const reply) const
{
    return new SetTaskStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetTaskStatusRequestPrivate
 *
 * @brief  Private implementation for SetTaskStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTaskStatusRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public SetTaskStatusRequest instance.
 */
SetTaskStatusRequestPrivate::SetTaskStatusRequestPrivate(
    const DataPipelineRequest::Action action, SetTaskStatusRequest * const q)
    : SetTaskStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetTaskStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetTaskStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetTaskStatusRequest instance.
 */
SetTaskStatusRequestPrivate::SetTaskStatusRequestPrivate(
    const SetTaskStatusRequestPrivate &other, SetTaskStatusRequest * const q)
    : SetTaskStatusPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS
