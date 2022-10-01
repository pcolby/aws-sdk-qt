// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "increasestreamretentionperiodrequest.h"
#include "increasestreamretentionperiodrequest_p.h"
#include "increasestreamretentionperiodresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::IncreaseStreamRetentionPeriodRequest
 * \brief The IncreaseStreamRetentionPeriodRequest class provides an interface for Kinesis IncreaseStreamRetentionPeriod requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::increaseStreamRetentionPeriod
 */

/*!
 * Constructs a copy of \a other.
 */
IncreaseStreamRetentionPeriodRequest::IncreaseStreamRetentionPeriodRequest(const IncreaseStreamRetentionPeriodRequest &other)
    : KinesisRequest(new IncreaseStreamRetentionPeriodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IncreaseStreamRetentionPeriodRequest object.
 */
IncreaseStreamRetentionPeriodRequest::IncreaseStreamRetentionPeriodRequest()
    : KinesisRequest(new IncreaseStreamRetentionPeriodRequestPrivate(KinesisRequest::IncreaseStreamRetentionPeriodAction, this))
{

}

/*!
 * \reimp
 */
bool IncreaseStreamRetentionPeriodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IncreaseStreamRetentionPeriodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseStreamRetentionPeriodRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseStreamRetentionPeriodResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::IncreaseStreamRetentionPeriodRequestPrivate
 * \brief The IncreaseStreamRetentionPeriodRequestPrivate class provides private implementation for IncreaseStreamRetentionPeriodRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a IncreaseStreamRetentionPeriodRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
IncreaseStreamRetentionPeriodRequestPrivate::IncreaseStreamRetentionPeriodRequestPrivate(
    const KinesisRequest::Action action, IncreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IncreaseStreamRetentionPeriodRequest
 * class' copy constructor.
 */
IncreaseStreamRetentionPeriodRequestPrivate::IncreaseStreamRetentionPeriodRequestPrivate(
    const IncreaseStreamRetentionPeriodRequestPrivate &other, IncreaseStreamRetentionPeriodRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
