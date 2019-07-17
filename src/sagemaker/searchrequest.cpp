/*
    Copyright 2013-2019 Paul Colby

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
