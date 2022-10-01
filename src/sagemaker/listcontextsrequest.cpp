// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontextsrequest.h"
#include "listcontextsrequest_p.h"
#include "listcontextsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListContextsRequest
 * \brief The ListContextsRequest class provides an interface for SageMaker ListContexts requests.
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
 * \sa SageMakerClient::listContexts
 */

/*!
 * Constructs a copy of \a other.
 */
ListContextsRequest::ListContextsRequest(const ListContextsRequest &other)
    : SageMakerRequest(new ListContextsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContextsRequest object.
 */
ListContextsRequest::ListContextsRequest()
    : SageMakerRequest(new ListContextsRequestPrivate(SageMakerRequest::ListContextsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContextsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContextsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContextsRequest::response(QNetworkReply * const reply) const
{
    return new ListContextsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListContextsRequestPrivate
 * \brief The ListContextsRequestPrivate class provides private implementation for ListContextsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListContextsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListContextsRequestPrivate::ListContextsRequestPrivate(
    const SageMakerRequest::Action action, ListContextsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContextsRequest
 * class' copy constructor.
 */
ListContextsRequestPrivate::ListContextsRequestPrivate(
    const ListContextsRequestPrivate &other, ListContextsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
