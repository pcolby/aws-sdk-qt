/*
    Copyright 2013-2020 Paul Colby

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

#include "putrecordrequest.h"
#include "putrecordrequest_p.h"
#include "putrecordresponse.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::PutRecordRequest
 * \brief The PutRecordRequest class provides an interface for Firehose PutRecord requests.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::putRecord
 */

/*!
 * Constructs a copy of \a other.
 */
PutRecordRequest::PutRecordRequest(const PutRecordRequest &other)
    : FirehoseRequest(new PutRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecordRequest object.
 */
PutRecordRequest::PutRecordRequest()
    : FirehoseRequest(new PutRecordRequestPrivate(FirehoseRequest::PutRecordAction, this))
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
 * \class QtAws::Firehose::PutRecordRequestPrivate
 * \brief The PutRecordRequestPrivate class provides private implementation for PutRecordRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a PutRecordRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
PutRecordRequestPrivate::PutRecordRequestPrivate(
    const FirehoseRequest::Action action, PutRecordRequest * const q)
    : FirehoseRequestPrivate(action, q)
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
    : FirehoseRequestPrivate(other, q)
{

}

} // namespace Firehose
} // namespace QtAws
