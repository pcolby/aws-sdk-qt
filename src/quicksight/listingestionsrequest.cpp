// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listingestionsrequest.h"
#include "listingestionsrequest_p.h"
#include "listingestionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListIngestionsRequest
 * \brief The ListIngestionsRequest class provides an interface for QuickSight ListIngestions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listIngestions
 */

/*!
 * Constructs a copy of \a other.
 */
ListIngestionsRequest::ListIngestionsRequest(const ListIngestionsRequest &other)
    : QuickSightRequest(new ListIngestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIngestionsRequest object.
 */
ListIngestionsRequest::ListIngestionsRequest()
    : QuickSightRequest(new ListIngestionsRequestPrivate(QuickSightRequest::ListIngestionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIngestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIngestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIngestionsRequest::response(QNetworkReply * const reply) const
{
    return new ListIngestionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListIngestionsRequestPrivate
 * \brief The ListIngestionsRequestPrivate class provides private implementation for ListIngestionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListIngestionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListIngestionsRequestPrivate::ListIngestionsRequestPrivate(
    const QuickSightRequest::Action action, ListIngestionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIngestionsRequest
 * class' copy constructor.
 */
ListIngestionsRequestPrivate::ListIngestionsRequestPrivate(
    const ListIngestionsRequestPrivate &other, ListIngestionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
