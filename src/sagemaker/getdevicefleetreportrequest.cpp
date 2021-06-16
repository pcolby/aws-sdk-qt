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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
