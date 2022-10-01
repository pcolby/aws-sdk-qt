// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
