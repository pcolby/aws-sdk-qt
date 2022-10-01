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

#include "searchfoldersrequest.h"
#include "searchfoldersrequest_p.h"
#include "searchfoldersresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchFoldersRequest
 * \brief The SearchFoldersRequest class provides an interface for QuickSight SearchFolders requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchFolders
 */

/*!
 * Constructs a copy of \a other.
 */
SearchFoldersRequest::SearchFoldersRequest(const SearchFoldersRequest &other)
    : QuickSightRequest(new SearchFoldersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchFoldersRequest object.
 */
SearchFoldersRequest::SearchFoldersRequest()
    : QuickSightRequest(new SearchFoldersRequestPrivate(QuickSightRequest::SearchFoldersAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFoldersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchFoldersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFoldersRequest::response(QNetworkReply * const reply) const
{
    return new SearchFoldersResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::SearchFoldersRequestPrivate
 * \brief The SearchFoldersRequestPrivate class provides private implementation for SearchFoldersRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchFoldersRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
SearchFoldersRequestPrivate::SearchFoldersRequestPrivate(
    const QuickSightRequest::Action action, SearchFoldersRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchFoldersRequest
 * class' copy constructor.
 */
SearchFoldersRequestPrivate::SearchFoldersRequestPrivate(
    const SearchFoldersRequestPrivate &other, SearchFoldersRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
