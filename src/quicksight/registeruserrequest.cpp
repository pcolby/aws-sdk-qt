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

#include "registeruserrequest.h"
#include "registeruserrequest_p.h"
#include "registeruserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::RegisterUserRequest
 * \brief The RegisterUserRequest class provides an interface for QuickSight RegisterUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::registerUser
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterUserRequest::RegisterUserRequest(const RegisterUserRequest &other)
    : QuickSightRequest(new RegisterUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterUserRequest object.
 */
RegisterUserRequest::RegisterUserRequest()
    : QuickSightRequest(new RegisterUserRequestPrivate(QuickSightRequest::RegisterUserAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterUserRequest::response(QNetworkReply * const reply) const
{
    return new RegisterUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::RegisterUserRequestPrivate
 * \brief The RegisterUserRequestPrivate class provides private implementation for RegisterUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a RegisterUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
RegisterUserRequestPrivate::RegisterUserRequestPrivate(
    const QuickSightRequest::Action action, RegisterUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterUserRequest
 * class' copy constructor.
 */
RegisterUserRequestPrivate::RegisterUserRequestPrivate(
    const RegisterUserRequestPrivate &other, RegisterUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
