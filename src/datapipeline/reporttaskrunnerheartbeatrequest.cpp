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

#include "reporttaskrunnerheartbeatrequest.h"
#include "reporttaskrunnerheartbeatrequest_p.h"
#include "reporttaskrunnerheartbeatresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  ReportTaskRunnerHeartbeatRequest
 *
 * @brief  Implements DataPipeline ReportTaskRunnerHeartbeat requests.
 *
 * @see    DataPipelineClient::reportTaskRunnerHeartbeat
 */

/**
 * @brief  Constructs a new ReportTaskRunnerHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReportTaskRunnerHeartbeatResponse::ReportTaskRunnerHeartbeatResponse(

/**
 * @brief  Constructs a new ReportTaskRunnerHeartbeatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReportTaskRunnerHeartbeatRequest::ReportTaskRunnerHeartbeatRequest(const ReportTaskRunnerHeartbeatRequest &other)
    : DataPipelineRequest(new ReportTaskRunnerHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReportTaskRunnerHeartbeatRequest object.
 */
ReportTaskRunnerHeartbeatRequest::ReportTaskRunnerHeartbeatRequest()
    : DataPipelineRequest(new ReportTaskRunnerHeartbeatRequestPrivate(DataPipelineRequest::ReportTaskRunnerHeartbeatAction, this))
{

}

bool ReportTaskRunnerHeartbeatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReportTaskRunnerHeartbeatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReportTaskRunnerHeartbeatResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * ReportTaskRunnerHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new ReportTaskRunnerHeartbeatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReportTaskRunnerHeartbeatRequestPrivate
 *
 * @brief  Private implementation for ReportTaskRunnerHeartbeatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskRunnerHeartbeatRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ReportTaskRunnerHeartbeatRequest instance.
 */
ReportTaskRunnerHeartbeatRequestPrivate::ReportTaskRunnerHeartbeatRequestPrivate(
    const DataPipelineRequest::Action action, ReportTaskRunnerHeartbeatRequest * const q)
    : ReportTaskRunnerHeartbeatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskRunnerHeartbeatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReportTaskRunnerHeartbeatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReportTaskRunnerHeartbeatRequest instance.
 */
ReportTaskRunnerHeartbeatRequestPrivate::ReportTaskRunnerHeartbeatRequestPrivate(
    const ReportTaskRunnerHeartbeatRequestPrivate &other, ReportTaskRunnerHeartbeatRequest * const q)
    : ReportTaskRunnerHeartbeatPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS
