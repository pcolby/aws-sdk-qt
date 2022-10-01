// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamrequest.h"
#include "createstreamrequest_p.h"
#include "createstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::CreateStreamRequest
 * \brief The CreateStreamRequest class provides an interface for KinesisVideo CreateStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::createStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamRequest::CreateStreamRequest(const CreateStreamRequest &other)
    : KinesisVideoRequest(new CreateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamRequest object.
 */
CreateStreamRequest::CreateStreamRequest()
    : KinesisVideoRequest(new CreateStreamRequestPrivate(KinesisVideoRequest::CreateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::CreateStreamRequestPrivate
 * \brief The CreateStreamRequestPrivate class provides private implementation for CreateStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a CreateStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const KinesisVideoRequest::Action action, CreateStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamRequest
 * class' copy constructor.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const CreateStreamRequestPrivate &other, CreateStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
