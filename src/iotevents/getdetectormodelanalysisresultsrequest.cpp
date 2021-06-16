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
