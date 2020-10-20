/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listwebhooksrequest.h"
#include "listwebhooksrequest_p.h"
#include "listwebhooksresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/*!
 * \class QtAws::CodePipeline::ListWebhooksRequest
 * \brief The ListWebhooksRequest class provides an interface for CodePipeline ListWebhooks requests.
 *
 * \inmodule QtAwsCodePipeline
 *
 *  <fullname>AWS CodePipeline</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the AWS CodePipeline API Reference. This guide provides descriptions of the actions and data types for AWS
 *  CodePipeline. Some functionality for your pipeline is only configurable through the API. For additional information, see
 *  the <a href="https://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">AWS CodePipeline User
 * 
 *  Guide</a>>
 * 
 *  You can use the AWS CodePipeline API to work with pipelines, stages, actions, and transitions, as described
 * 
 *  below>
 * 
 *  <i>Pipelines</i> are models of automated release processes. Each pipeline is uniquely named, and consists of stages,
 *  actions, and transitions.
 * 
 *  </p
 * 
 *  You can work with pipelines by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>CreatePipeline</a>, which creates a uniquely-named
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>DeletePipeline</a>, which deletes the specified
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>GetPipeline</a>, which returns information about the pipeline structure and pipeline metadata, including the pipeline
 *  Amazon Resource Name
 * 
 *  (ARN)> </li> <li>
 * 
 *  <a>GetPipelineExecution</a>, which returns information about a specific execution of a
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>GetPipelineState</a>, which returns information about the current state of the stages and actions of a
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>ListActionExecutions</a>, which returns action-level details for past executions. The details include full stage and
 *  action-level details, including individual action duration, status, any errors which occurred during the execution, and
 *  input and output artifact location
 * 
 *  details> </li> <li>
 * 
 *  <a>ListPipelines</a>, which gets a summary of all of the pipelines associated with your
 * 
 *  account> </li> <li>
 * 
 *  <a>ListPipelineExecutions</a>, which gets a summary of the most recent executions for a
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>StartPipelineExecution</a>, which runs the the most recent revision of an artifact through the
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>UpdatePipeline</a>, which updates a pipeline with edits or changes to the structure of the
 * 
 *  pipeline> </li> </ul>
 * 
 *  Pipelines include <i>stages</i>. Each stage contains one or more actions that must complete before the next stage
 *  begins. A stage will result in success or failure. If a stage fails, then the pipeline stops at that stage and will
 *  remain stopped until either a new version of an artifact appears in the source location, or a user takes action to
 *  re-run the most recent artifact through the pipeline. You can call <a>GetPipelineState</a>, which displays the status of
 *  a pipeline, including the status of stages in the pipeline, or <a>GetPipeline</a>, which returns the entire structure of
 *  the pipeline, including the stages of that pipeline. For more information about the structure of stages and actions,
 *  also refer to the <a href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-structure.html">AWS
 *  CodePipeline Pipeline Structure
 * 
 *  Reference</a>>
 * 
 *  Pipeline stages include <i>actions</i>, which are categorized into categories such as source or build actions performed
 *  within a stage of a pipeline. For example, you can use a source action to import artifacts into a pipeline from a source
 *  such as Amazon S3. Like stages, you do not work with actions directly in most cases, but you do define and interact with
 *  actions when working with pipeline operations such as <a>CreatePipeline</a> and <a>GetPipelineState</a>. Valid action
 *  categories
 * 
 *  are> <ul> <li>
 * 
 *  Sourc> </li> <li>
 * 
 *  Buil> </li> <li>
 * 
 *  Tes> </li> <li>
 * 
 *  Deplo> </li> <li>
 * 
 *  Approva> </li> <li>
 * 
 *  Invok> </li> </ul>
 * 
 *  Pipelines also include <i>transitions</i>, which allow the transition of artifacts from one stage to the next in a
 *  pipeline after the actions in one stage
 * 
 *  complete>
 * 
 *  You can work with transitions by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>DisableStageTransition</a>, which prevents artifacts from transitioning to the next stage in a
 * 
 *  pipeline> </li> <li>
 * 
 *  <a>EnableStageTransition</a>, which enables transition of artifacts between stages in a pipeline.
 * 
 *  </p </li> </ul>
 * 
 *  <b>Using the API to integrate with AWS CodePipeline</b>
 * 
 *  </p
 * 
 *  For third-party integrators or developers who want to create their own integrations with AWS CodePipeline, the expected
 *  sequence varies from the standard API user. In order to integrate with AWS CodePipeline, developers will need to work
 *  with the following
 * 
 *  items>
 * 
 *  <b>Jobs</b>, which are instances of an action. For example, a job for a source action might import a revision of an
 *  artifact from a source.
 * 
 *  </p
 * 
 *  You can work with jobs by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>AcknowledgeJob</a>, which confirms whether a job worker has received the specified
 * 
 *  job> </li> <li>
 * 
 *  <a>GetJobDetails</a>, which returns the details of a
 * 
 *  job> </li> <li>
 * 
 *  <a>PollForJobs</a>, which determines whether there are any jobs to act upon,
 * 
 *  </p </li> <li>
 * 
 *  <a>PutJobFailureResult</a>, which provides details of a job failure,
 * 
 *  an> </li> <li>
 * 
 *  <a>PutJobSuccessResult</a>, which provides details of a job
 * 
 *  success> </li> </ul>
 * 
 *  <b>Third party jobs</b>, which are instances of an action created by a partner action and integrated into AWS
 *  CodePipeline. Partner actions are created by members of the AWS Partner
 * 
 *  Network>
 * 
 *  You can work with third party jobs by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>AcknowledgeThirdPartyJob</a>, which confirms whether a job worker has received the specified
 * 
 *  job> </li> <li>
 * 
 *  <a>GetThirdPartyJobDetails</a>, which requests the details of a job for a partner
 * 
 *  action> </li> <li>
 * 
 *  <a>PollForThirdPartyJobs</a>, which determines whether there are any jobs to act upon,
 * 
 *  </p </li> <li>
 * 
 *  <a>PutThirdPartyJobFailureResult</a>, which provides details of a job failure,
 * 
 *  an> </li> <li>
 * 
 *  <a>PutThirdPartyJobSuccessResult</a>, which provides details of a job
 *
 * \sa CodePipelineClient::listWebhooks
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebhooksRequest::ListWebhooksRequest(const ListWebhooksRequest &other)
    : CodePipelineRequest(new ListWebhooksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebhooksRequest object.
 */
ListWebhooksRequest::ListWebhooksRequest()
    : CodePipelineRequest(new ListWebhooksRequestPrivate(CodePipelineRequest::ListWebhooksAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebhooksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebhooksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebhooksRequest::response(QNetworkReply * const reply) const
{
    return new ListWebhooksResponse(*this, reply);
}

/*!
 * \class QtAws::CodePipeline::ListWebhooksRequestPrivate
 * \brief The ListWebhooksRequestPrivate class provides private implementation for ListWebhooksRequest.
 * \internal
 *
 * \inmodule QtAwsCodePipeline
 */

/*!
 * Constructs a ListWebhooksRequestPrivate object for CodePipeline \a action,
 * with public implementation \a q.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const CodePipelineRequest::Action action, ListWebhooksRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebhooksRequest
 * class' copy constructor.
 */
ListWebhooksRequestPrivate::ListWebhooksRequestPrivate(
    const ListWebhooksRequestPrivate &other, ListWebhooksRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
