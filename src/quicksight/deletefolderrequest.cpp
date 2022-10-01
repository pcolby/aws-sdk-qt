// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefolderrequest.h"
#include "deletefolderrequest_p.h"
#include "deletefolderresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteFolderRequest
 * \brief The DeleteFolderRequest class provides an interface for QuickSight DeleteFolder requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteFolder
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFolderRequest::DeleteFolderRequest(const DeleteFolderRequest &other)
    : QuickSightRequest(new DeleteFolderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFolderRequest object.
 */
DeleteFolderRequest::DeleteFolderRequest()
    : QuickSightRequest(new DeleteFolderRequestPrivate(QuickSightRequest::DeleteFolderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFolderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFolderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFolderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFolderResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteFolderRequestPrivate
 * \brief The DeleteFolderRequestPrivate class provides private implementation for DeleteFolderRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteFolderRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteFolderRequestPrivate::DeleteFolderRequestPrivate(
    const QuickSightRequest::Action action, DeleteFolderRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFolderRequest
 * class' copy constructor.
 */
DeleteFolderRequestPrivate::DeleteFolderRequestPrivate(
    const DeleteFolderRequestPrivate &other, DeleteFolderRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
