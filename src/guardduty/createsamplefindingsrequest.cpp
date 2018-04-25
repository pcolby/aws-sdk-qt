/*
    Copyright 2013-2018 Paul Colby

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

#include "createsamplefindingsrequest.h"
#include "createsamplefindingsrequest_p.h"
#include "createsamplefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateSampleFindingsRequest
 * \brief The CreateSampleFindingsRequest class provides an interface for GuardDuty CreateSampleFindings requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createSampleFindings
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest(const CreateSampleFindingsRequest &other)
    : GuardDutyRequest(new CreateSampleFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSampleFindingsRequest object.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest()
    : GuardDutyRequest(new CreateSampleFindingsRequestPrivate(GuardDutyRequest::CreateSampleFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSampleFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSampleFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSampleFindingsRequest::response(QNetworkReply * const reply) const
{
    return new CreateSampleFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateSampleFindingsRequestPrivate
 * \brief The CreateSampleFindingsRequestPrivate class provides private implementation for CreateSampleFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateSampleFindingsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const GuardDutyRequest::Action action, CreateSampleFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSampleFindingsRequest
 * class' copy constructor.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const CreateSampleFindingsRequestPrivate &other, CreateSampleFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
