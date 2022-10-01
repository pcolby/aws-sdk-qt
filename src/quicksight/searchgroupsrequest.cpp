// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
