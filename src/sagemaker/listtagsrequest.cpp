// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTagsRequest
 * \brief The ListTagsRequest class provides an interface for SageMaker ListTags requests.
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
 * \sa SageMakerClient::listTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : SageMakerRequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : SageMakerRequest(new ListTagsRequestPrivate(SageMakerRequest::ListTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTagsRequestPrivate
 * \brief The ListTagsRequestPrivate class provides private implementation for ListTagsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTagsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const SageMakerRequest::Action action, ListTagsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
