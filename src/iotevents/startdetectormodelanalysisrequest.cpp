// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdetectormodelanalysisrequest.h"
#include "startdetectormodelanalysisrequest_p.h"
#include "startdetectormodelanalysisresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisRequest
 * \brief The StartDetectorModelAnalysisRequest class provides an interface for IoTEvents StartDetectorModelAnalysis requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::startDetectorModelAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
StartDetectorModelAnalysisRequest::StartDetectorModelAnalysisRequest(const StartDetectorModelAnalysisRequest &other)
    : IoTEventsRequest(new StartDetectorModelAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDetectorModelAnalysisRequest object.
 */
StartDetectorModelAnalysisRequest::StartDetectorModelAnalysisRequest()
    : IoTEventsRequest(new StartDetectorModelAnalysisRequestPrivate(IoTEventsRequest::StartDetectorModelAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool StartDetectorModelAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDetectorModelAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDetectorModelAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new StartDetectorModelAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::StartDetectorModelAnalysisRequestPrivate
 * \brief The StartDetectorModelAnalysisRequestPrivate class provides private implementation for StartDetectorModelAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a StartDetectorModelAnalysisRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
StartDetectorModelAnalysisRequestPrivate::StartDetectorModelAnalysisRequestPrivate(
    const IoTEventsRequest::Action action, StartDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDetectorModelAnalysisRequest
 * class' copy constructor.
 */
StartDetectorModelAnalysisRequestPrivate::StartDetectorModelAnalysisRequestPrivate(
    const StartDetectorModelAnalysisRequestPrivate &other, StartDetectorModelAnalysisRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
