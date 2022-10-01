// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelineexecutionstepsrequest.h"
#include "listpipelineexecutionstepsrequest_p.h"
#include "listpipelineexecutionstepsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionStepsRequest
 * \brief The ListPipelineExecutionStepsRequest class provides an interface for SageMaker ListPipelineExecutionSteps requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listPipelineExecutionSteps
 */

/*!
 * Constructs a copy of \a other.
 */
ListPipelineExecutionStepsRequest::ListPipelineExecutionStepsRequest(const ListPipelineExecutionStepsRequest &other)
    : SageMakerRequest(new ListPipelineExecutionStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPipelineExecutionStepsRequest object.
 */
ListPipelineExecutionStepsRequest::ListPipelineExecutionStepsRequest()
    : SageMakerRequest(new ListPipelineExecutionStepsRequestPrivate(SageMakerRequest::ListPipelineExecutionStepsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPipelineExecutionStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPipelineExecutionStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelineExecutionStepsRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelineExecutionStepsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionStepsRequestPrivate
 * \brief The ListPipelineExecutionStepsRequestPrivate class provides private implementation for ListPipelineExecutionStepsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelineExecutionStepsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListPipelineExecutionStepsRequestPrivate::ListPipelineExecutionStepsRequestPrivate(
    const SageMakerRequest::Action action, ListPipelineExecutionStepsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPipelineExecutionStepsRequest
 * class' copy constructor.
 */
ListPipelineExecutionStepsRequestPrivate::ListPipelineExecutionStepsRequestPrivate(
    const ListPipelineExecutionStepsRequestPrivate &other, ListPipelineExecutionStepsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
