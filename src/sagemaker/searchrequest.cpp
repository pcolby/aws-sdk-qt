// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchrequest.h"
#include "searchrequest_p.h"
#include "searchresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SearchRequest
 * \brief The SearchRequest class provides an interface for SageMaker Search requests.
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
 * \sa SageMakerClient::search
 */

/*!
 * Constructs a copy of \a other.
 */
SearchRequest::SearchRequest(const SearchRequest &other)
    : SageMakerRequest(new SearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchRequest object.
 */
SearchRequest::SearchRequest()
    : SageMakerRequest(new SearchRequestPrivate(SageMakerRequest::SearchAction, this))
{

}

/*!
 * \reimp
 */
bool SearchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchRequest::response(QNetworkReply * const reply) const
{
    return new SearchResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::SearchRequestPrivate
 * \brief The SearchRequestPrivate class provides private implementation for SearchRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SearchRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const SageMakerRequest::Action action, SearchRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchRequest
 * class' copy constructor.
 */
SearchRequestPrivate::SearchRequestPrivate(
    const SearchRequestPrivate &other, SearchRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
