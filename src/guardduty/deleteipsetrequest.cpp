/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteipsetrequest.h"
#include "deleteipsetrequest_p.h"
#include "deleteipsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteIPSetRequest
 * \brief The DeleteIPSetRequest class provides an interface for GuardDuty DeleteIPSet requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteIPSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIPSetRequest::DeleteIPSetRequest(const DeleteIPSetRequest &other)
    : GuardDutyRequest(new DeleteIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIPSetRequest object.
 */
DeleteIPSetRequest::DeleteIPSetRequest()
    : GuardDutyRequest(new DeleteIPSetRequestPrivate(GuardDutyRequest::DeleteIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIPSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIPSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIPSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIPSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteIPSetRequestPrivate
 * \brief The DeleteIPSetRequestPrivate class provides private implementation for DeleteIPSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a DeleteIPSetRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const GuardDutyRequest::Action action, DeleteIPSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIPSetRequest
 * class' copy constructor.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const DeleteIPSetRequestPrivate &other, DeleteIPSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
