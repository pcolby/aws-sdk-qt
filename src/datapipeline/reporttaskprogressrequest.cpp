// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reporttaskprogressrequest.h"
#include "reporttaskprogressrequest_p.h"
#include "reporttaskprogressresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::ReportTaskProgressRequest
 * \brief The ReportTaskProgressRequest class provides an interface for DataPipeline ReportTaskProgress requests.
 *
 * \inmodule QtAwsDataPipeline
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
 * Constructs a copy of \a other.
 */
ReportTaskProgressRequest::ReportTaskProgressRequest(const ReportTaskProgressRequest &other)
    : DataPipelineRequest(new ReportTaskProgressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReportTaskProgressRequest object.
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
 * Returns a ReportTaskProgressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReportTaskProgressRequest::response(QNetworkReply * const reply) const
{
    return new ReportTaskProgressResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::ReportTaskProgressRequestPrivate
 * \brief The ReportTaskProgressRequestPrivate class provides private implementation for ReportTaskProgressRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a ReportTaskProgressRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
ReportTaskProgressRequestPrivate::ReportTaskProgressRequestPrivate(
    const DataPipelineRequest::Action action, ReportTaskProgressRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReportTaskProgressRequest
 * class' copy constructor.
 */
ReportTaskProgressRequestPrivate::ReportTaskProgressRequestPrivate(
    const ReportTaskProgressRequestPrivate &other, ReportTaskProgressRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
