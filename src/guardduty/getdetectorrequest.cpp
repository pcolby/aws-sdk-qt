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

#include "getdetectorrequest.h"
#include "getdetectorrequest_p.h"
#include "getdetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetDetectorRequest
 * \brief The GetDetectorRequest class provides an interface for GuardDuty GetDetector requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getDetector
 */

/*!
 * Constructs a copy of \a other.
 */
GetDetectorRequest::GetDetectorRequest(const GetDetectorRequest &other)
    : GuardDutyRequest(new GetDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDetectorRequest object.
 */
GetDetectorRequest::GetDetectorRequest()
    : GuardDutyRequest(new GetDetectorRequestPrivate(GuardDutyRequest::GetDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool GetDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDetectorRequest::response(QNetworkReply * const reply) const
{
    return new GetDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetDetectorRequestPrivate
 * \brief The GetDetectorRequestPrivate class provides private implementation for GetDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetDetectorRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetDetectorRequestPrivate::GetDetectorRequestPrivate(
    const GuardDutyRequest::Action action, GetDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDetectorRequest
 * class' copy constructor.
 */
GetDetectorRequestPrivate::GetDetectorRequestPrivate(
    const GetDetectorRequestPrivate &other, GetDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
