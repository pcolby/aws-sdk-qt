// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedestinationrequest.h"
#include "updatedestinationrequest_p.h"
#include "updatedestinationresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UpdateDestinationRequest
 * \brief The UpdateDestinationRequest class provides an interface for Firehose UpdateDestination requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::updateDestination
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDestinationRequest::UpdateDestinationRequest(const UpdateDestinationRequest &other)
    : FirehoseRequest(new UpdateDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDestinationRequest object.
 */
UpdateDestinationRequest::UpdateDestinationRequest()
    : FirehoseRequest(new UpdateDestinationRequestPrivate(FirehoseRequest::UpdateDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::UpdateDestinationRequestPrivate
 * \brief The UpdateDestinationRequestPrivate class provides private implementation for UpdateDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a UpdateDestinationRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
UpdateDestinationRequestPrivate::UpdateDestinationRequestPrivate(
    const FirehoseRequest::Action action, UpdateDestinationRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDestinationRequest
 * class' copy constructor.
 */
UpdateDestinationRequestPrivate::UpdateDestinationRequestPrivate(
    const UpdateDestinationRequestPrivate &other, UpdateDestinationRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
