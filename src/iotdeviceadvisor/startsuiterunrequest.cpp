// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsuiterunrequest.h"
#include "startsuiterunrequest_p.h"
#include "startsuiterunresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::StartSuiteRunRequest
 * \brief The StartSuiteRunRequest class provides an interface for IotDeviceAdvisor StartSuiteRun requests.
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
 * \sa IotDeviceAdvisorClient::startSuiteRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartSuiteRunRequest::StartSuiteRunRequest(const StartSuiteRunRequest &other)
    : IotDeviceAdvisorRequest(new StartSuiteRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSuiteRunRequest object.
 */
StartSuiteRunRequest::StartSuiteRunRequest()
    : IotDeviceAdvisorRequest(new StartSuiteRunRequestPrivate(IotDeviceAdvisorRequest::StartSuiteRunAction, this))
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
 * \class QtAws::IotDeviceAdvisor::StartSuiteRunRequestPrivate
 * \brief The StartSuiteRunRequestPrivate class provides private implementation for StartSuiteRunRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a StartSuiteRunRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
StartSuiteRunRequestPrivate::StartSuiteRunRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, StartSuiteRunRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
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
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
