// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehitrequest.h"
#include "deletehitrequest_p.h"
#include "deletehitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteHITRequest
 * \brief The DeleteHITRequest class provides an interface for MTurk DeleteHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteHIT
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHITRequest::DeleteHITRequest(const DeleteHITRequest &other)
    : MTurkRequest(new DeleteHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHITRequest object.
 */
DeleteHITRequest::DeleteHITRequest()
    : MTurkRequest(new DeleteHITRequestPrivate(MTurkRequest::DeleteHITAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHITRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::DeleteHITRequestPrivate
 * \brief The DeleteHITRequestPrivate class provides private implementation for DeleteHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
DeleteHITRequestPrivate::DeleteHITRequestPrivate(
    const MTurkRequest::Action action, DeleteHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHITRequest
 * class' copy constructor.
 */
DeleteHITRequestPrivate::DeleteHITRequestPrivate(
    const DeleteHITRequestPrivate &other, DeleteHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
