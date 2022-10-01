// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
