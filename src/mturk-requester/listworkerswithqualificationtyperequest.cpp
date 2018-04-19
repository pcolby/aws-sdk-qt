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

#include "listworkerswithqualificationtyperequest.h"
#include "listworkerswithqualificationtyperequest_p.h"
#include "listworkerswithqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeRequest
 * \brief The ListWorkersWithQualificationTypeRequest class provides an interface for MTurk ListWorkersWithQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkersWithQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkersWithQualificationTypeRequest::ListWorkersWithQualificationTypeRequest(const ListWorkersWithQualificationTypeRequest &other)
    : MTurkRequest(new ListWorkersWithQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkersWithQualificationTypeRequest object.
 */
ListWorkersWithQualificationTypeRequest::ListWorkersWithQualificationTypeRequest()
    : MTurkRequest(new ListWorkersWithQualificationTypeRequestPrivate(MTurkRequest::ListWorkersWithQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkersWithQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkersWithQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkersWithQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkersWithQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeRequestPrivate
 * \brief The ListWorkersWithQualificationTypeRequestPrivate class provides private implementation for ListWorkersWithQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a ListWorkersWithQualificationTypeRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
ListWorkersWithQualificationTypeRequestPrivate::ListWorkersWithQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, ListWorkersWithQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkersWithQualificationTypeRequest
 * class' copy constructor.
 */
ListWorkersWithQualificationTypeRequestPrivate::ListWorkersWithQualificationTypeRequestPrivate(
    const ListWorkersWithQualificationTypeRequestPrivate &other, ListWorkersWithQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
