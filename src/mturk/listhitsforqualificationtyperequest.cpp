// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhitsforqualificationtyperequest.h"
#include "listhitsforqualificationtyperequest_p.h"
#include "listhitsforqualificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsForQualificationTypeRequest
 * \brief The ListHITsForQualificationTypeRequest class provides an interface for MTurk ListHITsForQualificationType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITsForQualificationType
 */

/*!
 * Constructs a copy of \a other.
 */
ListHITsForQualificationTypeRequest::ListHITsForQualificationTypeRequest(const ListHITsForQualificationTypeRequest &other)
    : MTurkRequest(new ListHITsForQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHITsForQualificationTypeRequest object.
 */
ListHITsForQualificationTypeRequest::ListHITsForQualificationTypeRequest()
    : MTurkRequest(new ListHITsForQualificationTypeRequestPrivate(MTurkRequest::ListHITsForQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool ListHITsForQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHITsForQualificationTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHITsForQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new ListHITsForQualificationTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListHITsForQualificationTypeRequestPrivate
 * \brief The ListHITsForQualificationTypeRequestPrivate class provides private implementation for ListHITsForQualificationTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsForQualificationTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListHITsForQualificationTypeRequestPrivate::ListHITsForQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, ListHITsForQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHITsForQualificationTypeRequest
 * class' copy constructor.
 */
ListHITsForQualificationTypeRequestPrivate::ListHITsForQualificationTypeRequestPrivate(
    const ListHITsForQualificationTypeRequestPrivate &other, ListHITsForQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
