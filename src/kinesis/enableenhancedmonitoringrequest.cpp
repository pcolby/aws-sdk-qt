// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableenhancedmonitoringrequest.h"
#include "enableenhancedmonitoringrequest_p.h"
#include "enableenhancedmonitoringresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::EnableEnhancedMonitoringRequest
 * \brief The EnableEnhancedMonitoringRequest class provides an interface for Kinesis EnableEnhancedMonitoring requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::enableEnhancedMonitoring
 */

/*!
 * Constructs a copy of \a other.
 */
EnableEnhancedMonitoringRequest::EnableEnhancedMonitoringRequest(const EnableEnhancedMonitoringRequest &other)
    : KinesisRequest(new EnableEnhancedMonitoringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableEnhancedMonitoringRequest object.
 */
EnableEnhancedMonitoringRequest::EnableEnhancedMonitoringRequest()
    : KinesisRequest(new EnableEnhancedMonitoringRequestPrivate(KinesisRequest::EnableEnhancedMonitoringAction, this))
{

}

/*!
 * \reimp
 */
bool EnableEnhancedMonitoringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableEnhancedMonitoringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableEnhancedMonitoringRequest::response(QNetworkReply * const reply) const
{
    return new EnableEnhancedMonitoringResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::EnableEnhancedMonitoringRequestPrivate
 * \brief The EnableEnhancedMonitoringRequestPrivate class provides private implementation for EnableEnhancedMonitoringRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a EnableEnhancedMonitoringRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
EnableEnhancedMonitoringRequestPrivate::EnableEnhancedMonitoringRequestPrivate(
    const KinesisRequest::Action action, EnableEnhancedMonitoringRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableEnhancedMonitoringRequest
 * class' copy constructor.
 */
EnableEnhancedMonitoringRequestPrivate::EnableEnhancedMonitoringRequestPrivate(
    const EnableEnhancedMonitoringRequestPrivate &other, EnableEnhancedMonitoringRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
