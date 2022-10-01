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

#include "describequerysuggestionsblocklistrequest.h"
#include "describequerysuggestionsblocklistrequest_p.h"
#include "describequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListRequest
 * \brief The DescribeQuerySuggestionsBlockListRequest class provides an interface for Kendra DescribeQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeQuerySuggestionsBlockListRequest::DescribeQuerySuggestionsBlockListRequest(const DescribeQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new DescribeQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeQuerySuggestionsBlockListRequest object.
 */
DescribeQuerySuggestionsBlockListRequest::DescribeQuerySuggestionsBlockListRequest()
    : KendraRequest(new DescribeQuerySuggestionsBlockListRequestPrivate(KendraRequest::DescribeQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new DescribeQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListRequestPrivate
 * \brief The DescribeQuerySuggestionsBlockListRequestPrivate class provides private implementation for DescribeQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeQuerySuggestionsBlockListRequestPrivate::DescribeQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, DescribeQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
DescribeQuerySuggestionsBlockListRequestPrivate::DescribeQuerySuggestionsBlockListRequestPrivate(
    const DescribeQuerySuggestionsBlockListRequestPrivate &other, DescribeQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
