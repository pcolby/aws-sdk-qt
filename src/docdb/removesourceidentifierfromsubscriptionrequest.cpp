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

#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionrequest_p.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::RemoveSourceIdentifierFromSubscriptionRequest
 * \brief The RemoveSourceIdentifierFromSubscriptionRequest class provides an interface for DocDB RemoveSourceIdentifierFromSubscription requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::removeSourceIdentifierFromSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest(const RemoveSourceIdentifierFromSubscriptionRequest &other)
    : DocDBRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionRequest object.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest()
    : DocDBRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(DocDBRequest::RemoveSourceIdentifierFromSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveSourceIdentifierFromSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveSourceIdentifierFromSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveSourceIdentifierFromSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new RemoveSourceIdentifierFromSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::RemoveSourceIdentifierFromSubscriptionRequestPrivate
 * \brief The RemoveSourceIdentifierFromSubscriptionRequestPrivate class provides private implementation for RemoveSourceIdentifierFromSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
RemoveSourceIdentifierFromSubscriptionRequestPrivate::RemoveSourceIdentifierFromSubscriptionRequestPrivate(
    const DocDBRequest::Action action, RemoveSourceIdentifierFromSubscriptionRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveSourceIdentifierFromSubscriptionRequest
 * class' copy constructor.
 */
RemoveSourceIdentifierFromSubscriptionRequestPrivate::RemoveSourceIdentifierFromSubscriptionRequestPrivate(
    const RemoveSourceIdentifierFromSubscriptionRequestPrivate &other, RemoveSourceIdentifierFromSubscriptionRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
