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

#include "getqualificationscorerequest.h"
#include "getqualificationscorerequest_p.h"
#include "getqualificationscoreresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationScoreRequest
 * \brief The GetQualificationScoreRequest class provides an interface for MTurk GetQualificationScore requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationScore
 */

/*!
 * Constructs a copy of \a other.
 */
GetQualificationScoreRequest::GetQualificationScoreRequest(const GetQualificationScoreRequest &other)
    : MTurkRequest(new GetQualificationScoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQualificationScoreRequest object.
 */
GetQualificationScoreRequest::GetQualificationScoreRequest()
    : MTurkRequest(new GetQualificationScoreRequestPrivate(MTurkRequest::GetQualificationScoreAction, this))
{

}

/*!
 * \reimp
 */
bool GetQualificationScoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQualificationScoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQualificationScoreRequest::response(QNetworkReply * const reply) const
{
    return new GetQualificationScoreResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetQualificationScoreRequestPrivate
 * \brief The GetQualificationScoreRequestPrivate class provides private implementation for GetQualificationScoreRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetQualificationScoreRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
GetQualificationScoreRequestPrivate::GetQualificationScoreRequestPrivate(
    const MTurkRequest::Action action, GetQualificationScoreRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQualificationScoreRequest
 * class' copy constructor.
 */
GetQualificationScoreRequestPrivate::GetQualificationScoreRequestPrivate(
    const GetQualificationScoreRequestPrivate &other, GetQualificationScoreRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
