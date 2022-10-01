// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
