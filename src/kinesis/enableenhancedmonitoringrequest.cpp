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
