// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplateversionsrequest.h"
#include "listtemplateversionsrequest_p.h"
#include "listtemplateversionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListTemplateVersionsRequest
 * \brief The ListTemplateVersionsRequest class provides an interface for QuickSight ListTemplateVersions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listTemplateVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest(const ListTemplateVersionsRequest &other)
    : QuickSightRequest(new ListTemplateVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplateVersionsRequest object.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest()
    : QuickSightRequest(new ListTemplateVersionsRequestPrivate(QuickSightRequest::ListTemplateVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplateVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplateVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplateVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplateVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListTemplateVersionsRequestPrivate
 * \brief The ListTemplateVersionsRequestPrivate class provides private implementation for ListTemplateVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListTemplateVersionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const QuickSightRequest::Action action, ListTemplateVersionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplateVersionsRequest
 * class' copy constructor.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const ListTemplateVersionsRequestPrivate &other, ListTemplateVersionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
