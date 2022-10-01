// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionrequest_p.h"
#include "createeventsubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateEventSubscriptionRequest
 * \brief The CreateEventSubscriptionRequest class provides an interface for DocDb CreateEventSubscription requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createEventSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest(const CreateEventSubscriptionRequest &other)
    : DocDbRequest(new CreateEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEventSubscriptionRequest object.
 */
CreateEventSubscriptionRequest::CreateEventSubscriptionRequest()
    : DocDbRequest(new CreateEventSubscriptionRequestPrivate(DocDbRequest::CreateEventSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEventSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEventSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateEventSubscriptionRequestPrivate
 * \brief The CreateEventSubscriptionRequestPrivate class provides private implementation for CreateEventSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateEventSubscriptionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const DocDbRequest::Action action, CreateEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEventSubscriptionRequest
 * class' copy constructor.
 */
CreateEventSubscriptionRequestPrivate::CreateEventSubscriptionRequestPrivate(
    const CreateEventSubscriptionRequestPrivate &other, CreateEventSubscriptionRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
