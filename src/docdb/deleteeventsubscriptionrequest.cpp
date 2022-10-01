// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionrequest_p.h"
#include "deleteeventsubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteEventSubscriptionRequest
 * \brief The DeleteEventSubscriptionRequest class provides an interface for DocDb DeleteEventSubscription requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest(const DeleteEventSubscriptionRequest &other)
    : DocDbRequest(new DeleteEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventSubscriptionRequest object.
 */
DeleteEventSubscriptionRequest::DeleteEventSubscriptionRequest()
    : DocDbRequest(new DeleteEventSubscriptionRequestPrivate(DocDbRequest::DeleteEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteEventSubscriptionRequestPrivate
 * \brief The DeleteEventSubscriptionRequestPrivate class provides private implementation for DeleteEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteEventSubscriptionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const DocDbRequest::Action action, DeleteEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSubscriptionRequest
 * class' copy constructor.
 */
DeleteEventSubscriptionRequestPrivate::DeleteEventSubscriptionRequestPrivate(
    const DeleteEventSubscriptionRequestPrivate &other, DeleteEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
