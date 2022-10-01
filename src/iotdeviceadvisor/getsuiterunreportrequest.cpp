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

#include "getsuiterunreportrequest.h"
#include "getsuiterunreportrequest_p.h"
#include "getsuiterunreportresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunReportRequest
 * \brief The GetSuiteRunReportRequest class provides an interface for IotDeviceAdvisor GetSuiteRunReport requests.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::getSuiteRunReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetSuiteRunReportRequest::GetSuiteRunReportRequest(const GetSuiteRunReportRequest &other)
    : IotDeviceAdvisorRequest(new GetSuiteRunReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSuiteRunReportRequest object.
 */
GetSuiteRunReportRequest::GetSuiteRunReportRequest()
    : IotDeviceAdvisorRequest(new GetSuiteRunReportRequestPrivate(IotDeviceAdvisorRequest::GetSuiteRunReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteRunReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSuiteRunReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteRunReportRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteRunReportResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunReportRequestPrivate
 * \brief The GetSuiteRunReportRequestPrivate class provides private implementation for GetSuiteRunReportRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteRunReportRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
GetSuiteRunReportRequestPrivate::GetSuiteRunReportRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, GetSuiteRunReportRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteRunReportRequest
 * class' copy constructor.
 */
GetSuiteRunReportRequestPrivate::GetSuiteRunReportRequestPrivate(
    const GetSuiteRunReportRequestPrivate &other, GetSuiteRunReportRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
