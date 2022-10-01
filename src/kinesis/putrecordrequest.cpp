// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrecordrequest.h"
#include "putrecordrequest_p.h"
#include "putrecordresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordRequest
 * \brief The PutRecordRequest class provides an interface for Kinesis PutRecord requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecord
 */

/*!
 * Constructs a copy of \a other.
 */
PutRecordRequest::PutRecordRequest(const PutRecordRequest &other)
    : KinesisRequest(new PutRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecordRequest object.
 */
PutRecordRequest::PutRecordRequest()
    : KinesisRequest(new PutRecordRequestPrivate(KinesisRequest::PutRecordAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::PutRecordRequestPrivate
 * \brief The PutRecordRequestPrivate class provides private implementation for PutRecordRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a PutRecordRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const KinesisRequest::Action action, PutRecordRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRecordRequest
 * class' copy constructor.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const PutRecordRequestPrivate &other, PutRecordRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
