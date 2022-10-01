/*
    Copyright 2013-2021 Paul Colby

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

#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionrequest_p.h"
#include "modifyeventsubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyEventSubscriptionRequest
 * \brief The ModifyEventSubscriptionRequest class provides an interface for DocDb ModifyEventSubscription requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest(const ModifyEventSubscriptionRequest &other)
    : DocDbRequest(new ModifyEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyEventSubscriptionRequest object.
 */
ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest()
    : DocDbRequest(new ModifyEventSubscriptionRequestPrivate(DocDbRequest::ModifyEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new ModifyEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyEventSubscriptionRequestPrivate
 * \brief The ModifyEventSubscriptionRequestPrivate class provides private implementation for ModifyEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyEventSubscriptionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyEventSubscriptionRequestPrivate::ModifyEventSubscriptionRequestPrivate(
    const DocDbRequest::Action action, ModifyEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyEventSubscriptionRequest
 * class' copy constructor.
 */
ModifyEventSubscriptionRequestPrivate::ModifyEventSubscriptionRequestPrivate(
    const ModifyEventSubscriptionRequestPrivate &other, ModifyEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
