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
