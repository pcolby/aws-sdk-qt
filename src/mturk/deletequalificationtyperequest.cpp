// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequalificationtyperequest.h"
#include "deletequalificationtyperequest_p.h"
#include "deletequalificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeRequest
 * \brief The DeleteQualificationTypeRequest class provides an interface for MTurk DeleteQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest(const DeleteQualificationTypeRequest &other)
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQualificationTypeRequest object.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest()
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(MTurkRequest::DeleteQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeRequestPrivate
 * \brief The DeleteQualificationTypeRequestPrivate class provides private implementation for DeleteQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteQualificationTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, DeleteQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQualificationTypeRequest
 * class' copy constructor.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const DeleteQualificationTypeRequestPrivate &other, DeleteQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
