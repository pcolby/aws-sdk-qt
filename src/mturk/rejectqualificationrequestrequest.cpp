// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectqualificationrequestrequest.h"
#include "rejectqualificationrequestrequest_p.h"
#include "rejectqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectQualificationRequestRequest
 * \brief The RejectQualificationRequestRequest class provides an interface for MTurk RejectQualificationRequest requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectQualificationRequest
 */

/*!
 * Constructs a copy of \a other.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest(const RejectQualificationRequestRequest &other)
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectQualificationRequestRequest object.
 */
RejectQualificationRequestRequest::RejectQualificationRequestRequest()
    : MTurkRequest(new RejectQualificationRequestRequestPrivate(MTurkRequest::RejectQualificationRequestAction, this))
{

}

/*!
 * \reimp
 */
bool RejectQualificationRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectQualificationRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new RejectQualificationRequestResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::RejectQualificationRequestRequestPrivate
 * \brief The RejectQualificationRequestRequestPrivate class provides private implementation for RejectQualificationRequestRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectQualificationRequestRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectQualificationRequestRequest
 * class' copy constructor.
 */
RejectQualificationRequestRequestPrivate::RejectQualificationRequestRequestPrivate(
    const RejectQualificationRequestRequestPrivate &other, RejectQualificationRequestRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
