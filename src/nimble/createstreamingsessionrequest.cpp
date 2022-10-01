// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingsessionrequest.h"
#include "createstreamingsessionrequest_p.h"
#include "createstreamingsessionresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingSessionRequest
 * \brief The CreateStreamingSessionRequest class provides an interface for Nimble CreateStreamingSession requests.
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
 * \sa NimbleClient::createStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingSessionRequest::CreateStreamingSessionRequest(const CreateStreamingSessionRequest &other)
    : NimbleRequest(new CreateStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingSessionRequest object.
 */
CreateStreamingSessionRequest::CreateStreamingSessionRequest()
    : NimbleRequest(new CreateStreamingSessionRequestPrivate(NimbleRequest::CreateStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateStreamingSessionRequestPrivate
 * \brief The CreateStreamingSessionRequestPrivate class provides private implementation for CreateStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingSessionRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateStreamingSessionRequestPrivate::CreateStreamingSessionRequestPrivate(
    const NimbleRequest::Action action, CreateStreamingSessionRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingSessionRequest
 * class' copy constructor.
 */
CreateStreamingSessionRequestPrivate::CreateStreamingSessionRequestPrivate(
    const CreateStreamingSessionRequestPrivate &other, CreateStreamingSessionRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
