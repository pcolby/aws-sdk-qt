// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionrequest_p.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionRequest
 * \brief The RemoveSourceIdentifierFromSubscriptionRequest class provides an interface for DocDb RemoveSourceIdentifierFromSubscription requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeSourceIdentifierFromSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest(const RemoveSourceIdentifierFromSubscriptionRequest &other)
    : DocDbRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionRequest object.
 */
RemoveSourceIdentifierFromSubscriptionRequest::RemoveSourceIdentifierFromSubscriptionRequest()
    : DocDbRequest(new RemoveSourceIdentifierFromSubscriptionRequestPrivate(DocDbRequest::RemoveSourceIdentifierFromSubscriptionAction, this))
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
 * \class QtAws::DocDb::RemoveSourceIdentifierFromSubscriptionRequestPrivate
 * \brief The RemoveSourceIdentifierFromSubscriptionRequestPrivate class provides private implementation for RemoveSourceIdentifierFromSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveSourceIdentifierFromSubscriptionRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RemoveSourceIdentifierFromSubscriptionRequestPrivate::RemoveSourceIdentifierFromSubscriptionRequestPrivate(
    const DocDbRequest::Action action, RemoveSourceIdentifierFromSubscriptionRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
