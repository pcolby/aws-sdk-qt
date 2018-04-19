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

#include "createipsetrequest.h"
#include "createipsetrequest_p.h"
#include "createipsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateIPSetRequest
 * \brief The CreateIPSetRequest class provides an interface for GuardDuty CreateIPSet requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createIPSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIPSetRequest::CreateIPSetRequest(const CreateIPSetRequest &other)
    : GuardDutyRequest(new CreateIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIPSetRequest object.
 */
CreateIPSetRequest::CreateIPSetRequest()
    : GuardDutyRequest(new CreateIPSetRequestPrivate(GuardDutyRequest::CreateIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIPSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIPSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIPSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateIPSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateIPSetRequestPrivate
 * \brief The CreateIPSetRequestPrivate class provides private implementation for CreateIPSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateIPSetRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
CreateIPSetRequestPrivate::CreateIPSetRequestPrivate(
    const GuardDutyRequest::Action action, CreateIPSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIPSetRequest
 * class' copy constructor.
 */
CreateIPSetRequestPrivate::CreateIPSetRequestPrivate(
    const CreateIPSetRequestPrivate &other, CreateIPSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
