// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedetectormodelanalysisrequest.h"
#include "describedetectormodelanalysisrequest_p.h"
#include "describedetectormodelanalysisresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisRequest
 * \brief The DescribeDetectorModelAnalysisRequest class provides an interface for IoTEvents DescribeDetectorModelAnalysis requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeDetectorModelAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorModelAnalysisRequest::DescribeDetectorModelAnalysisRequest(const DescribeDetectorModelAnalysisRequest &other)
    : IoTEventsRequest(new DescribeDetectorModelAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorModelAnalysisRequest object.
 */
DescribeDetectorModelAnalysisRequest::DescribeDetectorModelAnalysisRequest()
    : IoTEventsRequest(new DescribeDetectorModelAnalysisRequestPrivate(IoTEventsRequest::DescribeDetectorModelAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorModelAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorModelAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorModelAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorModelAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelAnalysisRequestPrivate
 * \brief The DescribeDetectorModelAnalysisRequestPrivate class provides private implementation for DescribeDetectorModelAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeDetectorModelAnalysisRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeDetectorModelAnalysisRequestPrivate::DescribeDetectorModelAnalysisRequestPrivate(
    const IoTEventsRequest::Action action, DescribeDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorModelAnalysisRequest
 * class' copy constructor.
 */
DescribeDetectorModelAnalysisRequestPrivate::DescribeDetectorModelAnalysisRequestPrivate(
    const DescribeDetectorModelAnalysisRequestPrivate &other, DescribeDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
