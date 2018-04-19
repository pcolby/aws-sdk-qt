/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putrecordsrequest.h"
#include "putrecordsrequest_p.h"
#include "putrecordsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::PutRecordsRequest
 * \brief The PutRecordsRequest class provides an interface for Kinesis PutRecords requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::putRecords
 */

/*!
 * Constructs a copy of \a other.
 */
PutRecordsRequest::PutRecordsRequest(const PutRecordsRequest &other)
    : KinesisRequest(new PutRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRecordsRequest object.
 */
PutRecordsRequest::PutRecordsRequest()
    : KinesisRequest(new PutRecordsRequestPrivate(KinesisRequest::PutRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool PutRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRecordsRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::PutRecordsRequestPrivate
 * \brief The PutRecordsRequestPrivate class provides private implementation for PutRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a PutRecordsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
PutRecordsRequestPrivate::PutRecordsRequestPrivate(
    const KinesisRequest::Action action, PutRecordsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRecordsRequest
 * class' copy constructor.
 */
PutRecordsRequestPrivate::PutRecordsRequestPrivate(
    const PutRecordsRequestPrivate &other, PutRecordsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
