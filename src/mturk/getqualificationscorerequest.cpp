// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
