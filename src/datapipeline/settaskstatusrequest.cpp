// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "settaskstatusrequest.h"
#include "settaskstatusrequest_p.h"
#include "settaskstatusresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::SetTaskStatusRequest
 * \brief The SetTaskStatusRequest class provides an interface for DataPipeline SetTaskStatus requests.
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
 * \sa DataPipelineClient::setTaskStatus
 */

/*!
 * Constructs a copy of \a other.
 */
SetTaskStatusRequest::SetTaskStatusRequest(const SetTaskStatusRequest &other)
    : DataPipelineRequest(new SetTaskStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetTaskStatusRequest object.
 */
SetTaskStatusRequest::SetTaskStatusRequest()
    : DataPipelineRequest(new SetTaskStatusRequestPrivate(DataPipelineRequest::SetTaskStatusAction, this))
{

}

/*!
 * \reimp
 */
bool SetTaskStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetTaskStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTaskStatusRequest::response(QNetworkReply * const reply) const
{
    return new SetTaskStatusResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::SetTaskStatusRequestPrivate
 * \brief The SetTaskStatusRequestPrivate class provides private implementation for SetTaskStatusRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a SetTaskStatusRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
SetTaskStatusRequestPrivate::SetTaskStatusRequestPrivate(
    const DataPipelineRequest::Action action, SetTaskStatusRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetTaskStatusRequest
 * class' copy constructor.
 */
SetTaskStatusRequestPrivate::SetTaskStatusRequestPrivate(
    const SetTaskStatusRequestPrivate &other, SetTaskStatusRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
