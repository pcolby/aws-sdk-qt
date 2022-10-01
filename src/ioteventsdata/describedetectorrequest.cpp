// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedetectorrequest.h"
#include "describedetectorrequest_p.h"
#include "describedetectorresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorRequest
 * \brief The DescribeDetectorRequest class provides an interface for IoTEventsData DescribeDetector requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when such
 *  events occur. You can use IoT Events Data API commands to send inputs to detectors, list detectors, and view or update a
 *  detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is IoT Events?</a> in the
 *  <i>IoT Events Developer
 *
 * \sa IoTEventsDataClient::describeDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorRequest::DescribeDetectorRequest(const DescribeDetectorRequest &other)
    : IoTEventsDataRequest(new DescribeDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorRequest object.
 */
DescribeDetectorRequest::DescribeDetectorRequest()
    : IoTEventsDataRequest(new DescribeDetectorRequestPrivate(IoTEventsDataRequest::DescribeDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::DescribeDetectorRequestPrivate
 * \brief The DescribeDetectorRequestPrivate class provides private implementation for DescribeDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a DescribeDetectorRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const IoTEventsDataRequest::Action action, DescribeDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorRequest
 * class' copy constructor.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const DescribeDetectorRequestPrivate &other, DescribeDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
