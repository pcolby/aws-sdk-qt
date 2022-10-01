// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeliverystreamrequest.h"
#include "createdeliverystreamrequest_p.h"
#include "createdeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::CreateDeliveryStreamRequest
 * \brief The CreateDeliveryStreamRequest class provides an interface for Firehose CreateDeliveryStream requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::createDeliveryStream
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeliveryStreamRequest::CreateDeliveryStreamRequest(const CreateDeliveryStreamRequest &other)
    : FirehoseRequest(new CreateDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeliveryStreamRequest object.
 */
CreateDeliveryStreamRequest::CreateDeliveryStreamRequest()
    : FirehoseRequest(new CreateDeliveryStreamRequestPrivate(FirehoseRequest::CreateDeliveryStreamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeliveryStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeliveryStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeliveryStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::CreateDeliveryStreamRequestPrivate
 * \brief The CreateDeliveryStreamRequestPrivate class provides private implementation for CreateDeliveryStreamRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a CreateDeliveryStreamRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
CreateDeliveryStreamRequestPrivate::CreateDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, CreateDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeliveryStreamRequest
 * class' copy constructor.
 */
CreateDeliveryStreamRequestPrivate::CreateDeliveryStreamRequestPrivate(
    const CreateDeliveryStreamRequestPrivate &other, CreateDeliveryStreamRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
