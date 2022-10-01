// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpipelinesrequest.h"
#include "listpipelinesrequest_p.h"
#include "listpipelinesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelinesRequest
 * \brief The ListPipelinesRequest class provides an interface for SageMaker ListPipelines requests.
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
 * \sa SageMakerClient::listPipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListPipelinesRequest::ListPipelinesRequest(const ListPipelinesRequest &other)
    : SageMakerRequest(new ListPipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPipelinesRequest object.
 */
ListPipelinesRequest::ListPipelinesRequest()
    : SageMakerRequest(new ListPipelinesRequestPrivate(SageMakerRequest::ListPipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListPipelinesRequestPrivate
 * \brief The ListPipelinesRequestPrivate class provides private implementation for ListPipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelinesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const SageMakerRequest::Action action, ListPipelinesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPipelinesRequest
 * class' copy constructor.
 */
ListPipelinesRequestPrivate::ListPipelinesRequestPrivate(
    const ListPipelinesRequestPrivate &other, ListPipelinesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
