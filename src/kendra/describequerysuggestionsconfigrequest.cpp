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

#include "describequerysuggestionsconfigrequest.h"
#include "describequerysuggestionsconfigrequest_p.h"
#include "describequerysuggestionsconfigresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsConfigRequest
 * \brief The DescribeQuerySuggestionsConfigRequest class provides an interface for kendra DescribeQuerySuggestionsConfig requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeQuerySuggestionsConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeQuerySuggestionsConfigRequest::DescribeQuerySuggestionsConfigRequest(const DescribeQuerySuggestionsConfigRequest &other)
    : kendraRequest(new DescribeQuerySuggestionsConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeQuerySuggestionsConfigRequest object.
 */
DescribeQuerySuggestionsConfigRequest::DescribeQuerySuggestionsConfigRequest()
    : kendraRequest(new DescribeQuerySuggestionsConfigRequestPrivate(kendraRequest::DescribeQuerySuggestionsConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeQuerySuggestionsConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeQuerySuggestionsConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeQuerySuggestionsConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeQuerySuggestionsConfigResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::DescribeQuerySuggestionsConfigRequestPrivate
 * \brief The DescribeQuerySuggestionsConfigRequestPrivate class provides private implementation for DescribeQuerySuggestionsConfigRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
DescribeQuerySuggestionsConfigRequestPrivate::DescribeQuerySuggestionsConfigRequestPrivate(
    const kendraRequest::Action action, DescribeQuerySuggestionsConfigRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeQuerySuggestionsConfigRequest
 * class' copy constructor.
 */
DescribeQuerySuggestionsConfigRequestPrivate::DescribeQuerySuggestionsConfigRequestPrivate(
    const DescribeQuerySuggestionsConfigRequestPrivate &other, DescribeQuerySuggestionsConfigRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
