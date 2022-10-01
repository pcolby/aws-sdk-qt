// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionrequest_p.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionRequest
 * \brief The AddSourceIdentifierToSubscriptionRequest class provides an interface for DocDb AddSourceIdentifierToSubscription requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::addSourceIdentifierToSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest(const AddSourceIdentifierToSubscriptionRequest &other)
    : DocDbRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddSourceIdentifierToSubscriptionRequest object.
 */
AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest()
    : DocDbRequest(new AddSourceIdentifierToSubscriptionRequestPrivate(DocDbRequest::AddSourceIdentifierToSubscriptionAction, this))
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
 * \class QtAws::DocDb::AddSourceIdentifierToSubscriptionRequestPrivate
 * \brief The AddSourceIdentifierToSubscriptionRequestPrivate class provides private implementation for AddSourceIdentifierToSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a AddSourceIdentifierToSubscriptionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
AddSourceIdentifierToSubscriptionRequestPrivate::AddSourceIdentifierToSubscriptionRequestPrivate(
    const DocDbRequest::Action action, AddSourceIdentifierToSubscriptionRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
