// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatesrequest.h"
#include "listtemplatesrequest_p.h"
#include "listtemplatesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplatesRequest
 * \brief The ListTemplatesRequest class provides an interface for QuickSight ListTemplates requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplatesRequest::ListTemplatesRequest(const ListTemplatesRequest &other)
    : QuickSightRequest(new ListTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplatesRequest object.
 */
ListTemplatesRequest::ListTemplatesRequest()
    : QuickSightRequest(new ListTemplatesRequestPrivate(QuickSightRequest::ListTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListTemplatesRequestPrivate
 * \brief The ListTemplatesRequestPrivate class provides private implementation for ListTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplatesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const QuickSightRequest::Action action, ListTemplatesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplatesRequest
 * class' copy constructor.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const ListTemplatesRequestPrivate &other, ListTemplatesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
