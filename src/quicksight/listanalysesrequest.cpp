// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanalysesrequest.h"
#include "listanalysesrequest_p.h"
#include "listanalysesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListAnalysesRequest
 * \brief The ListAnalysesRequest class provides an interface for QuickSight ListAnalyses requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listAnalyses
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnalysesRequest::ListAnalysesRequest(const ListAnalysesRequest &other)
    : QuickSightRequest(new ListAnalysesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnalysesRequest object.
 */
ListAnalysesRequest::ListAnalysesRequest()
    : QuickSightRequest(new ListAnalysesRequestPrivate(QuickSightRequest::ListAnalysesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnalysesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnalysesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnalysesRequest::response(QNetworkReply * const reply) const
{
    return new ListAnalysesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListAnalysesRequestPrivate
 * \brief The ListAnalysesRequestPrivate class provides private implementation for ListAnalysesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListAnalysesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListAnalysesRequestPrivate::ListAnalysesRequestPrivate(
    const QuickSightRequest::Action action, ListAnalysesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnalysesRequest
 * class' copy constructor.
 */
ListAnalysesRequestPrivate::ListAnalysesRequestPrivate(
    const ListAnalysesRequestPrivate &other, ListAnalysesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
