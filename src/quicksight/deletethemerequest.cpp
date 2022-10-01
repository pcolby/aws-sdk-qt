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

#include "deletethemerequest.h"
#include "deletethemerequest_p.h"
#include "deletethemeresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeRequest
 * \brief The DeleteThemeRequest class provides an interface for QuickSight DeleteTheme requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTheme
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThemeRequest::DeleteThemeRequest(const DeleteThemeRequest &other)
    : QuickSightRequest(new DeleteThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThemeRequest object.
 */
DeleteThemeRequest::DeleteThemeRequest()
    : QuickSightRequest(new DeleteThemeRequestPrivate(QuickSightRequest::DeleteThemeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThemeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThemeResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteThemeRequestPrivate
 * \brief The DeleteThemeRequestPrivate class provides private implementation for DeleteThemeRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const QuickSightRequest::Action action, DeleteThemeRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThemeRequest
 * class' copy constructor.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const DeleteThemeRequestPrivate &other, DeleteThemeRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
