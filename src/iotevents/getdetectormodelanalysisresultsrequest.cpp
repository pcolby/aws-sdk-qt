// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdetectormodelanalysisresultsrequest.h"
#include "getdetectormodelanalysisresultsrequest_p.h"
#include "getdetectormodelanalysisresultsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::GetDetectorModelAnalysisResultsRequest
 * \brief The GetDetectorModelAnalysisResultsRequest class provides an interface for IoTEvents GetDetectorModelAnalysisResults requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::getDetectorModelAnalysisResults
 */

/*!
 * Constructs a copy of \a other.
 */
GetDetectorModelAnalysisResultsRequest::GetDetectorModelAnalysisResultsRequest(const GetDetectorModelAnalysisResultsRequest &other)
    : IoTEventsRequest(new GetDetectorModelAnalysisResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDetectorModelAnalysisResultsRequest object.
 */
GetDetectorModelAnalysisResultsRequest::GetDetectorModelAnalysisResultsRequest()
    : IoTEventsRequest(new GetDetectorModelAnalysisResultsRequestPrivate(IoTEventsRequest::GetDetectorModelAnalysisResultsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDetectorModelAnalysisResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDetectorModelAnalysisResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDetectorModelAnalysisResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetDetectorModelAnalysisResultsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::GetDetectorModelAnalysisResultsRequestPrivate
 * \brief The GetDetectorModelAnalysisResultsRequestPrivate class provides private implementation for GetDetectorModelAnalysisResultsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a GetDetectorModelAnalysisResultsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
GetDetectorModelAnalysisResultsRequestPrivate::GetDetectorModelAnalysisResultsRequestPrivate(
    const IoTEventsRequest::Action action, GetDetectorModelAnalysisResultsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDetectorModelAnalysisResultsRequest
 * class' copy constructor.
 */
GetDetectorModelAnalysisResultsRequestPrivate::GetDetectorModelAnalysisResultsRequestPrivate(
    const GetDetectorModelAnalysisResultsRequestPrivate &other, GetDetectorModelAnalysisResultsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
