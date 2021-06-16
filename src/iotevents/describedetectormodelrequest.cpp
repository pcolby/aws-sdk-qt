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
