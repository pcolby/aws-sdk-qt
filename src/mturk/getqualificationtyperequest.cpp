// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a GetQualificationTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
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
