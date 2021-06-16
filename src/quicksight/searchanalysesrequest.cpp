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

#include "searchanalysesrequest.h"
#include "searchanalysesrequest_p.h"
#include "searchanalysesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchAnalysesRequest
 * \brief The SearchAnalysesRequest class provides an interface for QuickSight SearchAnalyses requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchAnalyses
 */

/*!
 * Constructs a copy of \a other.
 */
SearchAnalysesRequest::SearchAnalysesRequest(const SearchAnalysesRequest &other)
    : QuickSightRequest(new SearchAnalysesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchAnalysesRequest object.
 */
SearchAnalysesRequest::SearchAnalysesRequest()
    : QuickSightRequest(new SearchAnalysesRequestPrivate(QuickSightRequest::SearchAnalysesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchAnalysesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchAnalysesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchAnalysesRequest::response(QNetworkReply * const reply) const
{
    return new SearchAnalysesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::SearchAnalysesRequestPrivate
 * \brief The SearchAnalysesRequestPrivate class provides private implementation for SearchAnalysesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchAnalysesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
SearchAnalysesRequestPrivate::SearchAnalysesRequestPrivate(
    const QuickSightRequest::Action action, SearchAnalysesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchAnalysesRequest
 * class' copy constructor.
 */
SearchAnalysesRequestPrivate::SearchAnalysesRequestPrivate(
    const SearchAnalysesRequestPrivate &other, SearchAnalysesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
