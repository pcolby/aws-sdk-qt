// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a ListWorkersWithQualificationTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
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
