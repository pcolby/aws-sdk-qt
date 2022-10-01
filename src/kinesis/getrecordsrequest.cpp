// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::GetRecordsRequest
 * \brief The GetRecordsRequest class provides an interface for Kinesis GetRecords requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::getRecords
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : KinesisRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecordsRequest object.
 */
GetRecordsRequest::GetRecordsRequest()
    : KinesisRequest(new GetRecordsRequestPrivate(KinesisRequest::GetRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecordsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::GetRecordsRequestPrivate
 * \brief The GetRecordsRequestPrivate class provides private implementation for GetRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a GetRecordsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const KinesisRequest::Action action, GetRecordsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecordsRequest
 * class' copy constructor.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const GetRecordsRequestPrivate &other, GetRecordsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
