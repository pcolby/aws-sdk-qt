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

#include "createexporttaskrequest.h"
#include "createexporttaskrequest_p.h"
#include "createexporttaskresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  CreateExportTaskRequest
 *
 * @brief  Implements CloudWatchLogs CreateExportTask requests.
 *
 * @see    CloudWatchLogsClient::createExportTask
 */

/**
 * @brief  Constructs a new CreateExportTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateExportTaskResponse::CreateExportTaskResponse(

/**
 * @brief  Constructs a new CreateExportTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateExportTaskRequest::CreateExportTaskRequest(const CreateExportTaskRequest &other)
    : CloudWatchLogsRequest(new CreateExportTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateExportTaskRequest object.
 */
CreateExportTaskRequest::CreateExportTaskRequest()
    : CloudWatchLogsRequest(new CreateExportTaskRequestPrivate(CloudWatchLogsRequest::CreateExportTaskAction, this))
{

}

bool CreateExportTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateExportTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateExportTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * CreateExportTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateExportTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateExportTaskRequestPrivate
 *
 * @brief  Private implementation for CreateExportTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateExportTaskRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public CreateExportTaskRequest instance.
 */
CreateExportTaskRequestPrivate::CreateExportTaskRequestPrivate(
    const CloudWatchLogsRequest::Action action, CreateExportTaskRequest * const q)
    : CreateExportTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateExportTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateExportTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateExportTaskRequest instance.
 */
CreateExportTaskRequestPrivate::CreateExportTaskRequestPrivate(
    const CreateExportTaskRequestPrivate &other, CreateExportTaskRequest * const q)
    : CreateExportTaskPrivate(other, q)
{

}
