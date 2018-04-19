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

#include "getqualificationtyperequest.h"
#include "getqualificationtyperequest_p.h"
#include "getqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationTypeRequest
 * \brief The GetQualificationTypeRequest class provides an interface for MTurk GetQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
GetQualificationTypeRequest::GetQualificationTypeRequest(const GetQualificationTypeRequest &other)
    : MTurkRequest(new GetQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQualificationTypeRequest object.
 */
GetQualificationTypeRequest::GetQualificationTypeRequest()
    : MTurkRequest(new GetQualificationTypeRequestPrivate(MTurkRequest::GetQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetQualificationTypeRequestPrivate
 * \brief The GetQualificationTypeRequestPrivate class provides private implementation for GetQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a GetQualificationTypeRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
GetQualificationTypeRequestPrivate::GetQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, GetQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQualificationTypeRequest
 * class' copy constructor.
 */
GetQualificationTypeRequestPrivate::GetQualificationTypeRequestPrivate(
    const GetQualificationTypeRequestPrivate &other, GetQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
