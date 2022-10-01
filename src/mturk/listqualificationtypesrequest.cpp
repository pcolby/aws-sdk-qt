// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqualificationtypesrequest.h"
#include "listqualificationtypesrequest_p.h"
#include "listqualificationtypesresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationTypesRequest
 * \brief The ListQualificationTypesRequest class provides an interface for MTurk ListQualificationTypes requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest(const ListQualificationTypesRequest &other)
    : MTurkRequest(new ListQualificationTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQualificationTypesRequest object.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest()
    : MTurkRequest(new ListQualificationTypesRequestPrivate(MTurkRequest::ListQualificationTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListQualificationTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQualificationTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQualificationTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationTypesResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListQualificationTypesRequestPrivate
 * \brief The ListQualificationTypesRequestPrivate class provides private implementation for ListQualificationTypesRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationTypesRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const MTurkRequest::Action action, ListQualificationTypesRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationTypesRequest
 * class' copy constructor.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const ListQualificationTypesRequestPrivate &other, ListQualificationTypesRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
