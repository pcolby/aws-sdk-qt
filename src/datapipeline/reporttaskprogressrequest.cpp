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

/*!
 * \class QtAws::DataPipeline::ReportTaskProgressRequest
 *
 * \brief The ReportTaskProgressRequest class encapsulates DataPipeline ReportTaskProgress requests.
 *
 * \ingroup DataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::reportTaskProgress
 */

/*!
 * @brief  Constructs a new ReportTaskProgressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReportTaskProgressRequest::ReportTaskProgressRequest(const ReportTaskProgressRequest &other)
    : DataPipelineRequest(new ReportTaskProgressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ReportTaskProgressRequest object.
 */
ReportTaskProgressRequest::ReportTaskProgressRequest()
    : DataPipelineRequest(new ReportTaskProgressRequestPrivate(DataPipelineRequest::ReportTaskProgressAction, this))
{

}

/*!
 * \reimp
 */
bool ReportTaskProgressRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ReportTaskProgressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReportTaskProgressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * ReportTaskProgressRequest::response(QNetworkReply * const reply) const
{
    return new ReportTaskProgressResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ReportTaskProgressRequestPrivate
 *
 * @brief  Private implementation for ReportTaskProgressRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ReportTaskProgressRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ReportTaskProgressRequest instance.
 */
ReportTaskProgressRequestPrivate::ReportTaskProgressRequestPrivate(
    const DataPipelineRequest::Action action, ReportTaskProgressRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
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
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
