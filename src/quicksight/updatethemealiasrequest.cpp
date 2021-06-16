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

#include "updatethemealiasrequest.h"
#include "updatethemealiasrequest_p.h"
#include "updatethemealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemeAliasRequest
 * \brief The UpdateThemeAliasRequest class provides an interface for QuickSight UpdateThemeAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateThemeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThemeAliasRequest::UpdateThemeAliasRequest(const UpdateThemeAliasRequest &other)
    : QuickSightRequest(new UpdateThemeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThemeAliasRequest object.
 */
UpdateThemeAliasRequest::UpdateThemeAliasRequest()
    : QuickSightRequest(new UpdateThemeAliasRequestPrivate(QuickSightRequest::UpdateThemeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThemeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThemeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThemeAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThemeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateThemeAliasRequestPrivate
 * \brief The UpdateThemeAliasRequestPrivate class provides private implementation for UpdateThemeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemeAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateThemeAliasRequestPrivate::UpdateThemeAliasRequestPrivate(
    const QuickSightRequest::Action action, UpdateThemeAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThemeAliasRequest
 * class' copy constructor.
 */
UpdateThemeAliasRequestPrivate::UpdateThemeAliasRequestPrivate(
    const UpdateThemeAliasRequestPrivate &other, UpdateThemeAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
