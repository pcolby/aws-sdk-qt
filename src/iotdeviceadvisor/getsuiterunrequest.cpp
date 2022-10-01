// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuiterunrequest.h"
#include "getsuiterunrequest_p.h"
#include "getsuiterunresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunRequest
 * \brief The GetSuiteRunRequest class provides an interface for IotDeviceAdvisor GetSuiteRun requests.
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
 * \sa IotDeviceAdvisorClient::getSuiteRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetSuiteRunRequest::GetSuiteRunRequest(const GetSuiteRunRequest &other)
    : IotDeviceAdvisorRequest(new GetSuiteRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSuiteRunRequest object.
 */
GetSuiteRunRequest::GetSuiteRunRequest()
    : IotDeviceAdvisorRequest(new GetSuiteRunRequestPrivate(IotDeviceAdvisorRequest::GetSuiteRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSuiteRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteRunRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteRunResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteRunRequestPrivate
 * \brief The GetSuiteRunRequestPrivate class provides private implementation for GetSuiteRunRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteRunRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
GetSuiteRunRequestPrivate::GetSuiteRunRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, GetSuiteRunRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteRunRequest
 * class' copy constructor.
 */
GetSuiteRunRequestPrivate::GetSuiteRunRequestPrivate(
    const GetSuiteRunRequestPrivate &other, GetSuiteRunRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
