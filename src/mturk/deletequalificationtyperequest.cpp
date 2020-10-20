/*
    Copyright 2013-2020 Paul Colby

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
