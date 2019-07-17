/*
    Copyright 2013-2019 Paul Colby

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

#include "createthreatintelsetrequest.h"
#include "createthreatintelsetrequest_p.h"
#include "createthreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateThreatIntelSetRequest
 * \brief The CreateThreatIntelSetRequest class provides an interface for GuardDuty CreateThreatIntelSet requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createThreatIntelSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThreatIntelSetRequest::CreateThreatIntelSetRequest(const CreateThreatIntelSetRequest &other)
    : GuardDutyRequest(new CreateThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThreatIntelSetRequest object.
 */
CreateThreatIntelSetRequest::CreateThreatIntelSetRequest()
    : GuardDutyRequest(new CreateThreatIntelSetRequestPrivate(GuardDutyRequest::CreateThreatIntelSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThreatIntelSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThreatIntelSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateThreatIntelSetResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateThreatIntelSetRequestPrivate
 * \brief The CreateThreatIntelSetRequestPrivate class provides private implementation for CreateThreatIntelSetRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateThreatIntelSetRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
CreateThreatIntelSetRequestPrivate::CreateThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, CreateThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThreatIntelSetRequest
 * class' copy constructor.
 */
CreateThreatIntelSetRequestPrivate::CreateThreatIntelSetRequestPrivate(
    const CreateThreatIntelSetRequestPrivate &other, CreateThreatIntelSetRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
