/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putrecordbatchrequest.h"
#include "putrecordbatchrequest_p.h"
#include "putrecordbatchresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordBatchRequest
 * \brief The PutRecordBatchRequest class provides an interface for Firehose PutRecordBatch requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::putRecordBatch
 */

/*!
 * Constructs a copy of \a other.
 */
PutRecordBatchRequest::PutRecordBatchRequest(const PutRecordBatchRequest &other)
    : FirehoseRequest(new PutRecordBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecordBatchRequest object.
 */
PutRecordBatchRequest::PutRecordBatchRequest()
    : FirehoseRequest(new PutRecordBatchRequestPrivate(FirehoseRequest::PutRecordBatchAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRecordBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordBatchRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordBatchResponse(*this, reply);
}

/*!
 * \class QtAws::Firehose::PutRecordBatchRequestPrivate
 * \brief The PutRecordBatchRequestPrivate class provides private implementation for PutRecordBatchRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a PutRecordBatchRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const FirehoseRequest::Action action, PutRecordBatchRequest * const q)
    : FirehoseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRecordBatchRequest
 * class' copy constructor.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const PutRecordBatchRequestPrivate &other, PutRecordBatchRequest * const q)
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
