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

#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionrequest_p.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::AddSourceIdentifierToSubscriptionRequest
 * \brief The AddSourceIdentifierToSubscriptionRequest class provides an interface for DocDB AddSourceIdentifierToSubscription requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest(const AddSourceIdentifierToSubscriptionRequest &other)
    : DocDBRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddSourceIdentifierToSubscriptionRequest object.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest()
    : DocDBRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(DocDBRequest::AddSourceIdentifierToSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool AddSourceIdentifierToSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddSourceIdentifierToSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddSourceIdentifierToSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new AddSourceIdentifierToSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::AddSourceIdentifierToSubscriptionRequestPrivate
 * \brief The AddSourceIdentifierToSubscriptionRequestPrivate class provides private implementation for AddSourceIdentifierToSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionRequestPrivate::AddSourceIdentifierToSubscriptionRequestPrivate(
    const DocDBRequest::Action action, AddSourceIdentifierToSubscriptionRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddSourceIdentifierToSubscriptionRequest
 * class' copy constructor.
 */
AddSourceIdentifierToSubscriptionRequestPrivate::AddSourceIdentifierToSubscriptionRequestPrivate(
    const AddSourceIdentifierToSubscriptionRequestPrivate &other, AddSourceIdentifierToSubscriptionRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
