// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelineexecutionsrequest.h"
#include "listpipelineexecutionsrequest_p.h"
#include "listpipelineexecutionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionsRequest
 * \brief The ListPipelineExecutionsRequest class provides an interface for SageMaker ListPipelineExecutions requests.
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
 * \sa SageMakerClient::listPipelineExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPipelineExecutionsRequest::ListPipelineExecutionsRequest(const ListPipelineExecutionsRequest &other)
    : SageMakerRequest(new ListPipelineExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPipelineExecutionsRequest object.
 */
ListPipelineExecutionsRequest::ListPipelineExecutionsRequest()
    : SageMakerRequest(new ListPipelineExecutionsRequestPrivate(SageMakerRequest::ListPipelineExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPipelineExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPipelineExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelineExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelineExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionsRequestPrivate
 * \brief The ListPipelineExecutionsRequestPrivate class provides private implementation for ListPipelineExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelineExecutionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListPipelineExecutionsRequestPrivate::ListPipelineExecutionsRequestPrivate(
    const SageMakerRequest::Action action, ListPipelineExecutionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPipelineExecutionsRequest
 * class' copy constructor.
 */
ListPipelineExecutionsRequestPrivate::ListPipelineExecutionsRequestPrivate(
    const ListPipelineExecutionsRequestPrivate &other, ListPipelineExecutionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
