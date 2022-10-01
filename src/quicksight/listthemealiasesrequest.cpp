// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthemealiasesrequest.h"
#include "listthemealiasesrequest_p.h"
#include "listthemealiasesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListThemeAliasesRequest
 * \brief The ListThemeAliasesRequest class provides an interface for QuickSight ListThemeAliases requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listThemeAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListThemeAliasesRequest::ListThemeAliasesRequest(const ListThemeAliasesRequest &other)
    : QuickSightRequest(new ListThemeAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThemeAliasesRequest object.
 */
ListThemeAliasesRequest::ListThemeAliasesRequest()
    : QuickSightRequest(new ListThemeAliasesRequestPrivate(QuickSightRequest::ListThemeAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListThemeAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThemeAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThemeAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListThemeAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListThemeAliasesRequestPrivate
 * \brief The ListThemeAliasesRequestPrivate class provides private implementation for ListThemeAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListThemeAliasesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListThemeAliasesRequestPrivate::ListThemeAliasesRequestPrivate(
    const QuickSightRequest::Action action, ListThemeAliasesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThemeAliasesRequest
 * class' copy constructor.
 */
ListThemeAliasesRequestPrivate::ListThemeAliasesRequestPrivate(
    const ListThemeAliasesRequestPrivate &other, ListThemeAliasesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
