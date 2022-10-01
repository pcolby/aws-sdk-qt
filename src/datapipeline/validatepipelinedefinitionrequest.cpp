// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "validatepipelinedefinitionrequest.h"
#include "validatepipelinedefinitionrequest_p.h"
#include "validatepipelinedefinitionresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::ValidatePipelineDefinitionRequest
 * \brief The ValidatePipelineDefinitionRequest class provides an interface for DataPipeline ValidatePipelineDefinition requests.
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
 * \sa DataPipelineClient::validatePipelineDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
ValidatePipelineDefinitionRequest::ValidatePipelineDefinitionRequest(const ValidatePipelineDefinitionRequest &other)
    : DataPipelineRequest(new ValidatePipelineDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ValidatePipelineDefinitionRequest object.
 */
ValidatePipelineDefinitionRequest::ValidatePipelineDefinitionRequest()
    : DataPipelineRequest(new ValidatePipelineDefinitionRequestPrivate(DataPipelineRequest::ValidatePipelineDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool ValidatePipelineDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ValidatePipelineDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ValidatePipelineDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new ValidatePipelineDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::ValidatePipelineDefinitionRequestPrivate
 * \brief The ValidatePipelineDefinitionRequestPrivate class provides private implementation for ValidatePipelineDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a ValidatePipelineDefinitionRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
ValidatePipelineDefinitionRequestPrivate::ValidatePipelineDefinitionRequestPrivate(
    const DataPipelineRequest::Action action, ValidatePipelineDefinitionRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ValidatePipelineDefinitionRequest
 * class' copy constructor.
 */
ValidatePipelineDefinitionRequestPrivate::ValidatePipelineDefinitionRequestPrivate(
    const ValidatePipelineDefinitionRequestPrivate &other, ValidatePipelineDefinitionRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
