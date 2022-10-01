// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefolderrequest.h"
#include "updatefolderrequest_p.h"
#include "updatefolderresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateFolderRequest
 * \brief The UpdateFolderRequest class provides an interface for QuickSight UpdateFolder requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateFolder
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFolderRequest::UpdateFolderRequest(const UpdateFolderRequest &other)
    : QuickSightRequest(new UpdateFolderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFolderRequest object.
 */
UpdateFolderRequest::UpdateFolderRequest()
    : QuickSightRequest(new UpdateFolderRequestPrivate(QuickSightRequest::UpdateFolderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFolderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFolderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFolderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFolderResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateFolderRequestPrivate
 * \brief The UpdateFolderRequestPrivate class provides private implementation for UpdateFolderRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateFolderRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateFolderRequestPrivate::UpdateFolderRequestPrivate(
    const QuickSightRequest::Action action, UpdateFolderRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFolderRequest
 * class' copy constructor.
 */
UpdateFolderRequestPrivate::UpdateFolderRequestPrivate(
    const UpdateFolderRequestPrivate &other, UpdateFolderRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
