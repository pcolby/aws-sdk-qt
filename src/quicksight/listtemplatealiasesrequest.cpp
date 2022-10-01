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

#include "listtemplatealiasesrequest.h"
#include "listtemplatealiasesrequest_p.h"
#include "listtemplatealiasesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplateAliasesRequest
 * \brief The ListTemplateAliasesRequest class provides an interface for QuickSight ListTemplateAliases requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplateAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplateAliasesRequest::ListTemplateAliasesRequest(const ListTemplateAliasesRequest &other)
    : QuickSightRequest(new ListTemplateAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplateAliasesRequest object.
 */
ListTemplateAliasesRequest::ListTemplateAliasesRequest()
    : QuickSightRequest(new ListTemplateAliasesRequestPrivate(QuickSightRequest::ListTemplateAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplateAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplateAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplateAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplateAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListTemplateAliasesRequestPrivate
 * \brief The ListTemplateAliasesRequestPrivate class provides private implementation for ListTemplateAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplateAliasesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListTemplateAliasesRequestPrivate::ListTemplateAliasesRequestPrivate(
    const QuickSightRequest::Action action, ListTemplateAliasesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplateAliasesRequest
 * class' copy constructor.
 */
ListTemplateAliasesRequestPrivate::ListTemplateAliasesRequestPrivate(
    const ListTemplateAliasesRequestPrivate &other, ListTemplateAliasesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
