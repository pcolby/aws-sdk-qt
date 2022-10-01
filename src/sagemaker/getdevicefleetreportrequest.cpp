// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicefleetreportrequest.h"
#include "getdevicefleetreportrequest_p.h"
#include "getdevicefleetreportresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetDeviceFleetReportRequest
 * \brief The GetDeviceFleetReportRequest class provides an interface for SageMaker GetDeviceFleetReport requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::getDeviceFleetReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceFleetReportRequest::GetDeviceFleetReportRequest(const GetDeviceFleetReportRequest &other)
    : SageMakerRequest(new GetDeviceFleetReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceFleetReportRequest object.
 */
GetDeviceFleetReportRequest::GetDeviceFleetReportRequest()
    : SageMakerRequest(new GetDeviceFleetReportRequestPrivate(SageMakerRequest::GetDeviceFleetReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceFleetReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceFleetReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceFleetReportRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceFleetReportResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::GetDeviceFleetReportRequestPrivate
 * \brief The GetDeviceFleetReportRequestPrivate class provides private implementation for GetDeviceFleetReportRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetDeviceFleetReportRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
GetDeviceFleetReportRequestPrivate::GetDeviceFleetReportRequestPrivate(
    const SageMakerRequest::Action action, GetDeviceFleetReportRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceFleetReportRequest
 * class' copy constructor.
 */
GetDeviceFleetReportRequestPrivate::GetDeviceFleetReportRequestPrivate(
    const GetDeviceFleetReportRequestPrivate &other, GetDeviceFleetReportRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
