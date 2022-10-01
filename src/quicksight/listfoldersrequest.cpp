// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfoldersrequest.h"
#include "listfoldersrequest_p.h"
#include "listfoldersresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListFoldersRequest
 * \brief The ListFoldersRequest class provides an interface for QuickSight ListFolders requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listFolders
 */

/*!
 * Constructs a copy of \a other.
 */
ListFoldersRequest::ListFoldersRequest(const ListFoldersRequest &other)
    : QuickSightRequest(new ListFoldersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFoldersRequest object.
 */
ListFoldersRequest::ListFoldersRequest()
    : QuickSightRequest(new ListFoldersRequestPrivate(QuickSightRequest::ListFoldersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFoldersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFoldersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFoldersRequest::response(QNetworkReply * const reply) const
{
    return new ListFoldersResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListFoldersRequestPrivate
 * \brief The ListFoldersRequestPrivate class provides private implementation for ListFoldersRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListFoldersRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListFoldersRequestPrivate::ListFoldersRequestPrivate(
    const QuickSightRequest::Action action, ListFoldersRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFoldersRequest
 * class' copy constructor.
 */
ListFoldersRequestPrivate::ListFoldersRequestPrivate(
    const ListFoldersRequestPrivate &other, ListFoldersRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
