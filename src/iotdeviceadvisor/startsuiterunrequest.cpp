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

#include "startsuiterunrequest.h"
#include "startsuiterunrequest_p.h"
#include "startsuiterunresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::StartSuiteRunRequest
 * \brief The StartSuiteRunRequest class provides an interface for IoTDeviceAdvisor StartSuiteRun requests.
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 *
 *  AWS IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices during device
 *  software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for reliable and
 *  secure connectivity with AWS IoT Core before deploying devices to production. By using Device Advisor, you can confirm
 *  that your devices can connect to AWS IoT Core, follow security best practices and, if applicable, receive software
 *  updates from IoT Device Management. You can also download signed qualification reports to submit to the AWS Partner
 *  Network to get your device qualified for the AWS Partner Device Catalog without the need to send your device in and wait
 *  for it to be
 *
 * \sa IoTDeviceAdvisorClient::startSuiteRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartSuiteRunRequest::StartSuiteRunRequest(const StartSuiteRunRequest &other)
    : IoTDeviceAdvisorRequest(new StartSuiteRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSuiteRunRequest object.
 */
StartSuiteRunRequest::StartSuiteRunRequest()
    : IoTDeviceAdvisorRequest(new StartSuiteRunRequestPrivate(IoTDeviceAdvisorRequest::StartSuiteRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartSuiteRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSuiteRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSuiteRunRequest::response(QNetworkReply * const reply) const
{
    return new StartSuiteRunResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDeviceAdvisor::StartSuiteRunRequestPrivate
 * \brief The StartSuiteRunRequestPrivate class provides private implementation for StartSuiteRunRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a StartSuiteRunRequestPrivate object for IoTDeviceAdvisor \a action,
 * with public implementation \a q.
 */
StartSuiteRunRequestPrivate::StartSuiteRunRequestPrivate(
    const IoTDeviceAdvisorRequest::Action action, StartSuiteRunRequest * const q)
    : IoTDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSuiteRunRequest
 * class' copy constructor.
 */
StartSuiteRunRequestPrivate::StartSuiteRunRequestPrivate(
    const StartSuiteRunRequestPrivate &other, StartSuiteRunRequest * const q)
    : IoTDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
