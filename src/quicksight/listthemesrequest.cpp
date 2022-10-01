// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemesrequest.h"
#include "listthemesrequest_p.h"
#include "listthemesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemesRequest
 * \brief The ListThemesRequest class provides an interface for QuickSight ListThemes requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemes
 */

/*!
 * Constructs a copy of \a other.
 */
ListThemesRequest::ListThemesRequest(const ListThemesRequest &other)
    : QuickSightRequest(new ListThemesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThemesRequest object.
 */
ListThemesRequest::ListThemesRequest()
    : QuickSightRequest(new ListThemesRequestPrivate(QuickSightRequest::ListThemesAction, this))
{

}

/*!
 * \reimp
 */
bool ListThemesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThemesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThemesRequest::response(QNetworkReply * const reply) const
{
    return new ListThemesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListThemesRequestPrivate
 * \brief The ListThemesRequestPrivate class provides private implementation for ListThemesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const QuickSightRequest::Action action, ListThemesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThemesRequest
 * class' copy constructor.
 */
ListThemesRequestPrivate::ListThemesRequestPrivate(
    const ListThemesRequestPrivate &other, ListThemesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
