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

#include "setstatusrequest.h"
#include "setstatusrequest_p.h"
#include "setstatusresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  SetStatusRequest
 *
 * @brief  Implements DataPipeline SetStatus requests.
 *
 * @see    DataPipelineClient::setStatus
 */

/**
 * @brief  Constructs a new SetStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetStatusResponse::SetStatusResponse(

/**
 * @brief  Constructs a new SetStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetStatusRequest::SetStatusRequest(const SetStatusRequest &other)
    : DataPipelineRequest(new SetStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetStatusRequest object.
 */
SetStatusRequest::SetStatusRequest()
    : DataPipelineRequest(new SetStatusRequestPrivate(DataPipelineRequest::SetStatusAction, this))
{

}

bool SetStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * SetStatusRequest::response(QNetworkReply * const reply) const
{
    return new SetStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetStatusRequestPrivate
 *
 * @brief  Private implementation for SetStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetStatusRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public SetStatusRequest instance.
 */
SetStatusRequestPrivate::SetStatusRequestPrivate(
    const DataPipelineRequest::Action action, SetStatusRequest * const q)
    : SetStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetStatusRequest instance.
 */
SetStatusRequestPrivate::SetStatusRequestPrivate(
    const SetStatusRequestPrivate &other, SetStatusRequest * const q)
    : SetStatusPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS
