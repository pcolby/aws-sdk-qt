// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
