// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamrequest.h"
#include "deletestreamrequest_p.h"
#include "deletestreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DeleteStreamRequest
 * \brief The DeleteStreamRequest class provides an interface for Kinesis DeleteStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::deleteStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamRequest::DeleteStreamRequest(const DeleteStreamRequest &other)
    : KinesisRequest(new DeleteStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamRequest object.
 */
DeleteStreamRequest::DeleteStreamRequest()
    : KinesisRequest(new DeleteStreamRequestPrivate(KinesisRequest::DeleteStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DeleteStreamRequestPrivate
 * \brief The DeleteStreamRequestPrivate class provides private implementation for DeleteStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DeleteStreamRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const KinesisRequest::Action action, DeleteStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamRequest
 * class' copy constructor.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const DeleteStreamRequestPrivate &other, DeleteStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
