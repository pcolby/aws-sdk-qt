// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimentsrequest.h"
#include "listexperimentsrequest_p.h"
#include "listexperimentsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListExperimentsRequest
 * \brief The ListExperimentsRequest class provides an interface for SageMaker ListExperiments requests.
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
 * \sa SageMakerClient::listExperiments
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperimentsRequest::ListExperimentsRequest(const ListExperimentsRequest &other)
    : SageMakerRequest(new ListExperimentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperimentsRequest object.
 */
ListExperimentsRequest::ListExperimentsRequest()
    : SageMakerRequest(new ListExperimentsRequestPrivate(SageMakerRequest::ListExperimentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperimentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperimentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperimentsRequest::response(QNetworkReply * const reply) const
{
    return new ListExperimentsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListExperimentsRequestPrivate
 * \brief The ListExperimentsRequestPrivate class provides private implementation for ListExperimentsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListExperimentsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const SageMakerRequest::Action action, ListExperimentsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperimentsRequest
 * class' copy constructor.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const ListExperimentsRequestPrivate &other, ListExperimentsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
