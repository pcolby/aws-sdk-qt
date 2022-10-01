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

#include "searchgroupsrequest.h"
#include "searchgroupsrequest_p.h"
#include "searchgroupsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchGroupsRequest
 * \brief The SearchGroupsRequest class provides an interface for QuickSight SearchGroups requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchGroups
 */

/*!
 * Constructs a copy of \a other.
 */
SearchGroupsRequest::SearchGroupsRequest(const SearchGroupsRequest &other)
    : QuickSightRequest(new SearchGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchGroupsRequest object.
 */
SearchGroupsRequest::SearchGroupsRequest()
    : QuickSightRequest(new SearchGroupsRequestPrivate(QuickSightRequest::SearchGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchGroupsRequest::response(QNetworkReply * const reply) const
{
    return new SearchGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::SearchGroupsRequestPrivate
 * \brief The SearchGroupsRequestPrivate class provides private implementation for SearchGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchGroupsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
SearchGroupsRequestPrivate::SearchGroupsRequestPrivate(
    const QuickSightRequest::Action action, SearchGroupsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchGroupsRequest
 * class' copy constructor.
 */
SearchGroupsRequestPrivate::SearchGroupsRequestPrivate(
    const SearchGroupsRequestPrivate &other, SearchGroupsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
