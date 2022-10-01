// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamrequest.h"
#include "createstreamrequest_p.h"
#include "createstreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::CreateStreamRequest
 * \brief The CreateStreamRequest class provides an interface for Kinesis CreateStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::createStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamRequest::CreateStreamRequest(const CreateStreamRequest &other)
    : KinesisRequest(new CreateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamRequest object.
 */
CreateStreamRequest::CreateStreamRequest()
    : KinesisRequest(new CreateStreamRequestPrivate(KinesisRequest::CreateStreamAction, this))
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
 * \class QtAws::Kinesis::CreateStreamRequestPrivate
 * \brief The CreateStreamRequestPrivate class provides private implementation for CreateStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a CreateStreamRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const KinesisRequest::Action action, CreateStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
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
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
