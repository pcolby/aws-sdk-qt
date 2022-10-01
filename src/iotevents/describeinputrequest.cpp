// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputrequest.h"
#include "describeinputrequest_p.h"
#include "describeinputresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeInputRequest
 * \brief The DescribeInputRequest class provides an interface for IoTEvents DescribeInput requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeInput
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputRequest::DescribeInputRequest(const DescribeInputRequest &other)
    : IoTEventsRequest(new DescribeInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputRequest object.
 */
DescribeInputRequest::DescribeInputRequest()
    : IoTEventsRequest(new DescribeInputRequestPrivate(IoTEventsRequest::DescribeInputAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeInputRequestPrivate
 * \brief The DescribeInputRequestPrivate class provides private implementation for DescribeInputRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeInputRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const IoTEventsRequest::Action action, DescribeInputRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputRequest
 * class' copy constructor.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const DescribeInputRequestPrivate &other, DescribeInputRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
