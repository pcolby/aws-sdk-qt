/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker
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
