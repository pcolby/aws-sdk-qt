// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoderepositoriesrequest.h"
#include "listcoderepositoriesrequest_p.h"
#include "listcoderepositoriesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesRequest
 * \brief The ListCodeRepositoriesRequest class provides an interface for SageMaker ListCodeRepositories requests.
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
 * \sa SageMakerClient::listCodeRepositories
 */

/*!
 * Constructs a copy of \a other.
 */
ListCodeRepositoriesRequest::ListCodeRepositoriesRequest(const ListCodeRepositoriesRequest &other)
    : SageMakerRequest(new ListCodeRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCodeRepositoriesRequest object.
 */
ListCodeRepositoriesRequest::ListCodeRepositoriesRequest()
    : SageMakerRequest(new ListCodeRepositoriesRequestPrivate(SageMakerRequest::ListCodeRepositoriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCodeRepositoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCodeRepositoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCodeRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListCodeRepositoriesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesRequestPrivate
 * \brief The ListCodeRepositoriesRequestPrivate class provides private implementation for ListCodeRepositoriesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCodeRepositoriesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListCodeRepositoriesRequestPrivate::ListCodeRepositoriesRequestPrivate(
    const SageMakerRequest::Action action, ListCodeRepositoriesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCodeRepositoriesRequest
 * class' copy constructor.
 */
ListCodeRepositoriesRequestPrivate::ListCodeRepositoriesRequestPrivate(
    const ListCodeRepositoriesRequestPrivate &other, ListCodeRepositoriesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
