// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::AddTagsRequest
 * \brief The AddTagsRequest class provides an interface for DataPipeline AddTags requests.
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
 * \sa DataPipelineClient::addTags
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : DataPipelineRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : DataPipelineRequest(new AddTagsRequestPrivate(DataPipelineRequest::AddTagsAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::AddTagsRequestPrivate
 * \brief The AddTagsRequestPrivate class provides private implementation for AddTagsRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a AddTagsRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const DataPipelineRequest::Action action, AddTagsRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsRequest
 * class' copy constructor.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const AddTagsRequestPrivate &other, AddTagsRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
