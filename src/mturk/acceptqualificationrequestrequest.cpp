// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptqualificationrequestrequest.h"
#include "acceptqualificationrequestrequest_p.h"
#include "acceptqualificationrequestresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestRequest
 * \brief The AcceptQualificationRequestRequest class provides an interface for MTurk AcceptQualificationRequest requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::acceptQualificationRequest
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest(const AcceptQualificationRequestRequest &other)
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptQualificationRequestRequest object.
 */
AcceptQualificationRequestRequest::AcceptQualificationRequestRequest()
    : MTurkRequest(new AcceptQualificationRequestRequestPrivate(MTurkRequest::AcceptQualificationRequestAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptQualificationRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptQualificationRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptQualificationRequestRequest::response(QNetworkReply * const reply) const
{
    return new AcceptQualificationRequestResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::AcceptQualificationRequestRequestPrivate
 * \brief The AcceptQualificationRequestRequestPrivate class provides private implementation for AcceptQualificationRequestRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AcceptQualificationRequestRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const MTurkRequest::Action action, AcceptQualificationRequestRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptQualificationRequestRequest
 * class' copy constructor.
 */
AcceptQualificationRequestRequestPrivate::AcceptQualificationRequestRequestPrivate(
    const AcceptQualificationRequestRequestPrivate &other, AcceptQualificationRequestRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
