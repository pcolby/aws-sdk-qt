// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkforcesrequest.h"
#include "listworkforcesrequest_p.h"
#include "listworkforcesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkforcesRequest
 * \brief The ListWorkforcesRequest class provides an interface for SageMaker ListWorkforces requests.
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
 * \sa SageMakerClient::listWorkforces
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkforcesRequest::ListWorkforcesRequest(const ListWorkforcesRequest &other)
    : SageMakerRequest(new ListWorkforcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkforcesRequest object.
 */
ListWorkforcesRequest::ListWorkforcesRequest()
    : SageMakerRequest(new ListWorkforcesRequestPrivate(SageMakerRequest::ListWorkforcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkforcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkforcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkforcesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkforcesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListWorkforcesRequestPrivate
 * \brief The ListWorkforcesRequestPrivate class provides private implementation for ListWorkforcesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkforcesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListWorkforcesRequestPrivate::ListWorkforcesRequestPrivate(
    const SageMakerRequest::Action action, ListWorkforcesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkforcesRequest
 * class' copy constructor.
 */
ListWorkforcesRequestPrivate::ListWorkforcesRequestPrivate(
    const ListWorkforcesRequestPrivate &other, ListWorkforcesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
