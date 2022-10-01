// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingsessionsrequest.h"
#include "liststreamingsessionsrequest_p.h"
#include "liststreamingsessionsresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStreamingSessionsRequest
 * \brief The ListStreamingSessionsRequest class provides an interface for Nimble ListStreamingSessions requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listStreamingSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamingSessionsRequest::ListStreamingSessionsRequest(const ListStreamingSessionsRequest &other)
    : NimbleRequest(new ListStreamingSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamingSessionsRequest object.
 */
ListStreamingSessionsRequest::ListStreamingSessionsRequest()
    : NimbleRequest(new ListStreamingSessionsRequestPrivate(NimbleRequest::ListStreamingSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamingSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListStreamingSessionsRequestPrivate
 * \brief The ListStreamingSessionsRequestPrivate class provides private implementation for ListStreamingSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStreamingSessionsRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListStreamingSessionsRequestPrivate::ListStreamingSessionsRequestPrivate(
    const NimbleRequest::Action action, ListStreamingSessionsRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingSessionsRequest
 * class' copy constructor.
 */
ListStreamingSessionsRequestPrivate::ListStreamingSessionsRequestPrivate(
    const ListStreamingSessionsRequestPrivate &other, ListStreamingSessionsRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
