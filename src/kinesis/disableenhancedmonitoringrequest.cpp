// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableenhancedmonitoringrequest.h"
#include "disableenhancedmonitoringrequest_p.h"
#include "disableenhancedmonitoringresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DisableEnhancedMonitoringRequest
 * \brief The DisableEnhancedMonitoringRequest class provides an interface for Kinesis DisableEnhancedMonitoring requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::disableEnhancedMonitoring
 */

/*!
 * Constructs a copy of \a other.
 */
DisableEnhancedMonitoringRequest::DisableEnhancedMonitoringRequest(const DisableEnhancedMonitoringRequest &other)
    : KinesisRequest(new DisableEnhancedMonitoringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableEnhancedMonitoringRequest object.
 */
DisableEnhancedMonitoringRequest::DisableEnhancedMonitoringRequest()
    : KinesisRequest(new DisableEnhancedMonitoringRequestPrivate(KinesisRequest::DisableEnhancedMonitoringAction, this))
{

}

/*!
 * \reimp
 */
bool DisableEnhancedMonitoringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableEnhancedMonitoringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableEnhancedMonitoringRequest::response(QNetworkReply * const reply) const
{
    return new DisableEnhancedMonitoringResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::DisableEnhancedMonitoringRequestPrivate
 * \brief The DisableEnhancedMonitoringRequestPrivate class provides private implementation for DisableEnhancedMonitoringRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DisableEnhancedMonitoringRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
DisableEnhancedMonitoringRequestPrivate::DisableEnhancedMonitoringRequestPrivate(
    const KinesisRequest::Action action, DisableEnhancedMonitoringRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableEnhancedMonitoringRequest
 * class' copy constructor.
 */
DisableEnhancedMonitoringRequestPrivate::DisableEnhancedMonitoringRequestPrivate(
    const DisableEnhancedMonitoringRequestPrivate &other, DisableEnhancedMonitoringRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
