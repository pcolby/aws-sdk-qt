/*
    Copyright 2013-2021 Paul Colby

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

#include "describelimitsrequest.h"
#include "describelimitsrequest_p.h"
#include "describelimitsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeLimitsRequest
 * \brief The DescribeLimitsRequest class provides an interface for Kinesis DescribeLimits requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeLimits
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLimitsRequest::DescribeLimitsRequest(const DescribeLimitsRequest &other)
    : KinesisRequest(new DescribeLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLimitsRequest object.
 */
DescribeLimitsRequest::DescribeLimitsRequest()
    : KinesisRequest(new DescribeLimitsRequestPrivate(KinesisRequest::DescribeLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DescribeLimitsRequestPrivate
 * \brief The DescribeLimitsRequestPrivate class provides private implementation for DescribeLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeLimitsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const KinesisRequest::Action action, DescribeLimitsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLimitsRequest
 * class' copy constructor.
 */
DescribeLimitsRequestPrivate::DescribeLimitsRequestPrivate(
    const DescribeLimitsRequestPrivate &other, DescribeLimitsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
