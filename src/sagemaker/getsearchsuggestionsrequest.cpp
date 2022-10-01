// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsearchsuggestionsrequest.h"
#include "getsearchsuggestionsrequest_p.h"
#include "getsearchsuggestionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetSearchSuggestionsRequest
 * \brief The GetSearchSuggestionsRequest class provides an interface for SageMaker GetSearchSuggestions requests.
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
 * \sa SageMakerClient::getSearchSuggestions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSearchSuggestionsRequest::GetSearchSuggestionsRequest(const GetSearchSuggestionsRequest &other)
    : SageMakerRequest(new GetSearchSuggestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSearchSuggestionsRequest object.
 */
GetSearchSuggestionsRequest::GetSearchSuggestionsRequest()
    : SageMakerRequest(new GetSearchSuggestionsRequestPrivate(SageMakerRequest::GetSearchSuggestionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSearchSuggestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSearchSuggestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSearchSuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSearchSuggestionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::GetSearchSuggestionsRequestPrivate
 * \brief The GetSearchSuggestionsRequestPrivate class provides private implementation for GetSearchSuggestionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetSearchSuggestionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
GetSearchSuggestionsRequestPrivate::GetSearchSuggestionsRequestPrivate(
    const SageMakerRequest::Action action, GetSearchSuggestionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSearchSuggestionsRequest
 * class' copy constructor.
 */
GetSearchSuggestionsRequestPrivate::GetSearchSuggestionsRequestPrivate(
    const GetSearchSuggestionsRequestPrivate &other, GetSearchSuggestionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
