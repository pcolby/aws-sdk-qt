// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingsessionstreamrequest.h"
#include "createstreamingsessionstreamrequest_p.h"
#include "createstreamingsessionstreamresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStreamingSessionStreamRequest
 * \brief The CreateStreamingSessionStreamRequest class provides an interface for Nimble CreateStreamingSessionStream requests.
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
 * \sa NimbleClient::createStreamingSessionStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamingSessionStreamRequest::CreateStreamingSessionStreamRequest(const CreateStreamingSessionStreamRequest &other)
    : NimbleRequest(new CreateStreamingSessionStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamingSessionStreamRequest object.
 */
CreateStreamingSessionStreamRequest::CreateStreamingSessionStreamRequest()
    : NimbleRequest(new CreateStreamingSessionStreamRequestPrivate(NimbleRequest::CreateStreamingSessionStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamingSessionStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamingSessionStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamingSessionStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingSessionStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateStreamingSessionStreamRequestPrivate
 * \brief The CreateStreamingSessionStreamRequestPrivate class provides private implementation for CreateStreamingSessionStreamRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStreamingSessionStreamRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateStreamingSessionStreamRequestPrivate::CreateStreamingSessionStreamRequestPrivate(
    const NimbleRequest::Action action, CreateStreamingSessionStreamRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingSessionStreamRequest
 * class' copy constructor.
 */
CreateStreamingSessionStreamRequestPrivate::CreateStreamingSessionStreamRequestPrivate(
    const CreateStreamingSessionStreamRequestPrivate &other, CreateStreamingSessionStreamRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
