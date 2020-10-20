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

#include "decreasestreamretentionperiodrequest.h"
#include "decreasestreamretentionperiodrequest_p.h"
#include "decreasestreamretentionperiodresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DecreaseStreamRetentionPeriodRequest
 * \brief The DecreaseStreamRetentionPeriodRequest class provides an interface for Kinesis DecreaseStreamRetentionPeriod requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::decreaseStreamRetentionPeriod
 */

/*!
 * Constructs a copy of \a other.
 */
DecreaseStreamRetentionPeriodRequest::DecreaseStreamRetentionPeriodRequest(const DecreaseStreamRetentionPeriodRequest &other)
    : KinesisRequest(new DecreaseStreamRetentionPeriodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DecreaseStreamRetentionPeriodRequest object.
 */
DecreaseStreamRetentionPeriodRequest::DecreaseStreamRetentionPeriodRequest()
    : KinesisRequest(new DecreaseStreamRetentionPeriodRequestPrivate(KinesisRequest::DecreaseStreamRetentionPeriodAction, this))
{

}

/*!
 * \reimp
 */
bool DecreaseStreamRetentionPeriodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DecreaseStreamRetentionPeriodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DecreaseStreamRetentionPeriodRequest::response(QNetworkReply * const reply) const
{
    return new DecreaseStreamRetentionPeriodResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DecreaseStreamRetentionPeriodRequestPrivate
 * \brief The DecreaseStreamRetentionPeriodRequestPrivate class provides private implementation for DecreaseStreamRetentionPeriodRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DecreaseStreamRetentionPeriodRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DecreaseStreamRetentionPeriodRequestPrivate::DecreaseStreamRetentionPeriodRequestPrivate(
    const KinesisRequest::Action action, DecreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DecreaseStreamRetentionPeriodRequest
 * class' copy constructor.
 */
DecreaseStreamRetentionPeriodRequestPrivate::DecreaseStreamRetentionPeriodRequestPrivate(
    const DecreaseStreamRetentionPeriodRequestPrivate &other, DecreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
