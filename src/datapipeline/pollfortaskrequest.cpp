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

#include "pollfortaskrequest.h"
#include "pollfortaskrequest_p.h"
#include "pollfortaskresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  PollForTaskRequest
 *
 * @brief  Implements DataPipeline PollForTask requests.
 *
 * @see    DataPipelineClient::pollForTask
 */

/**
 * @brief  Constructs a new PollForTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PollForTaskRequest::PollForTaskRequest(const PollForTaskRequest &other)
    : DataPipelineRequest(new PollForTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PollForTaskRequest object.
 */
PollForTaskRequest::PollForTaskRequest()
    : DataPipelineRequest(new PollForTaskRequestPrivate(DataPipelineRequest::PollForTaskAction, this))
{

}

bool PollForTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PollForTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PollForTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * PollForTaskRequest::response(QNetworkReply * const reply) const
{
    return new PollForTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PollForTaskRequestPrivate
 *
 * @brief  Private implementation for PollForTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PollForTaskRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public PollForTaskRequest instance.
 */
PollForTaskRequestPrivate::PollForTaskRequestPrivate(
    const DataPipelineRequest::Action action, PollForTaskRequest * const q)
    : PollForTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PollForTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PollForTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PollForTaskRequest instance.
 */
PollForTaskRequestPrivate::PollForTaskRequestPrivate(
    const PollForTaskRequestPrivate &other, PollForTaskRequest * const q)
    : PollForTaskPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
