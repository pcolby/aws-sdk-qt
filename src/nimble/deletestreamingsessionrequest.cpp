// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingsessionrequest.h"
#include "deletestreamingsessionrequest_p.h"
#include "deletestreamingsessionresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStreamingSessionRequest
 * \brief The DeleteStreamingSessionRequest class provides an interface for Nimble DeleteStreamingSession requests.
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
 * \sa NimbleClient::deleteStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamingSessionRequest::DeleteStreamingSessionRequest(const DeleteStreamingSessionRequest &other)
    : NimbleRequest(new DeleteStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamingSessionRequest object.
 */
DeleteStreamingSessionRequest::DeleteStreamingSessionRequest()
    : NimbleRequest(new DeleteStreamingSessionRequestPrivate(NimbleRequest::DeleteStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteStreamingSessionRequestPrivate
 * \brief The DeleteStreamingSessionRequestPrivate class provides private implementation for DeleteStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStreamingSessionRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteStreamingSessionRequestPrivate::DeleteStreamingSessionRequestPrivate(
    const NimbleRequest::Action action, DeleteStreamingSessionRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamingSessionRequest
 * class' copy constructor.
 */
DeleteStreamingSessionRequestPrivate::DeleteStreamingSessionRequestPrivate(
    const DeleteStreamingSessionRequestPrivate &other, DeleteStreamingSessionRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
