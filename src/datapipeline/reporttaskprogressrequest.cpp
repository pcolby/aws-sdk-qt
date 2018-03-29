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

#include "reporttaskprogressrequest.h"
#include "reporttaskprogressrequest_p.h"
#include "reporttaskprogressresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  ReportTaskProgressRequest
 *
 * @brief  Implements DataPipeline ReportTaskProgress requests.
 *
 * @see    DataPipelineClient::reportTaskProgress
 */

/**
 * @brief  Constructs a new ReportTaskProgressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReportTaskProgressRequest::ReportTaskProgressRequest(const ReportTaskProgressRequest &other)
    : DataPipelineRequest(new ReportTaskProgressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReportTaskProgressRequest object.
 */
ReportTaskProgressRequest::ReportTaskProgressRequest()
    : DataPipelineRequest(new ReportTaskProgressRequestPrivate(DataPipelineRequest::ReportTaskProgressAction, this))
{

}

bool ReportTaskProgressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReportTaskProgressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReportTaskProgressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * ReportTaskProgressRequest::response(QNetworkReply * const reply) const
{
    return new ReportTaskProgressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReportTaskProgressRequestPrivate
 *
 * @brief  Private implementation for ReportTaskProgressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskProgressRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ReportTaskProgressRequest instance.
 */
ReportTaskProgressRequestPrivate::ReportTaskProgressRequestPrivate(
    const DataPipelineRequest::Action action, ReportTaskProgressRequest * const q)
    : ReportTaskProgressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReportTaskProgressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReportTaskProgressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReportTaskProgressRequest instance.
 */
ReportTaskProgressRequestPrivate::ReportTaskProgressRequestPrivate(
    const ReportTaskProgressRequestPrivate &other, ReportTaskProgressRequest * const q)
    : ReportTaskProgressPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
