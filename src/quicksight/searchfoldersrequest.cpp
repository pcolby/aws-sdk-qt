// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
