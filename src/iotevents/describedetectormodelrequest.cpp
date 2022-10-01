// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedetectormodelrequest.h"
#include "describedetectormodelrequest_p.h"
#include "describedetectormodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelRequest
 * \brief The DescribeDetectorModelRequest class provides an interface for IoTEvents DescribeDetectorModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeDetectorModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorModelRequest::DescribeDetectorModelRequest(const DescribeDetectorModelRequest &other)
    : IoTEventsRequest(new DescribeDetectorModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorModelRequest object.
 */
DescribeDetectorModelRequest::DescribeDetectorModelRequest()
    : IoTEventsRequest(new DescribeDetectorModelRequestPrivate(IoTEventsRequest::DescribeDetectorModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelRequestPrivate
 * \brief The DescribeDetectorModelRequestPrivate class provides private implementation for DescribeDetectorModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeDetectorModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeDetectorModelRequestPrivate::DescribeDetectorModelRequestPrivate(
    const IoTEventsRequest::Action action, DescribeDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorModelRequest
 * class' copy constructor.
 */
DescribeDetectorModelRequestPrivate::DescribeDetectorModelRequestPrivate(
    const DescribeDetectorModelRequestPrivate &other, DescribeDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
