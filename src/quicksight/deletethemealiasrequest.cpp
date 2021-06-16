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

#include "deletethemealiasrequest.h"
#include "deletethemealiasrequest_p.h"
#include "deletethemealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasRequest
 * \brief The DeleteThemeAliasRequest class provides an interface for QuickSight DeleteThemeAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteThemeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThemeAliasRequest::DeleteThemeAliasRequest(const DeleteThemeAliasRequest &other)
    : QuickSightRequest(new DeleteThemeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThemeAliasRequest object.
 */
DeleteThemeAliasRequest::DeleteThemeAliasRequest()
    : QuickSightRequest(new DeleteThemeAliasRequestPrivate(QuickSightRequest::DeleteThemeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThemeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThemeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThemeAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThemeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasRequestPrivate
 * \brief The DeleteThemeAliasRequestPrivate class provides private implementation for DeleteThemeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteThemeAliasRequestPrivate::DeleteThemeAliasRequestPrivate(
    const QuickSightRequest::Action action, DeleteThemeAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThemeAliasRequest
 * class' copy constructor.
 */
DeleteThemeAliasRequestPrivate::DeleteThemeAliasRequestPrivate(
    const DeleteThemeAliasRequestPrivate &other, DeleteThemeAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
