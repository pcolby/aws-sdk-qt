// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuitedefinitionrequest.h"
#include "getsuitedefinitionrequest_p.h"
#include "getsuitedefinitionresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteDefinitionRequest
 * \brief The GetSuiteDefinitionRequest class provides an interface for IotDeviceAdvisor GetSuiteDefinition requests.
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
 * \sa IotDeviceAdvisorClient::getSuiteDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetSuiteDefinitionRequest::GetSuiteDefinitionRequest(const GetSuiteDefinitionRequest &other)
    : IotDeviceAdvisorRequest(new GetSuiteDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSuiteDefinitionRequest object.
 */
GetSuiteDefinitionRequest::GetSuiteDefinitionRequest()
    : IotDeviceAdvisorRequest(new GetSuiteDefinitionRequestPrivate(IotDeviceAdvisorRequest::GetSuiteDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSuiteDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::GetSuiteDefinitionRequestPrivate
 * \brief The GetSuiteDefinitionRequestPrivate class provides private implementation for GetSuiteDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a GetSuiteDefinitionRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
GetSuiteDefinitionRequestPrivate::GetSuiteDefinitionRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, GetSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteDefinitionRequest
 * class' copy constructor.
 */
GetSuiteDefinitionRequestPrivate::GetSuiteDefinitionRequestPrivate(
    const GetSuiteDefinitionRequestPrivate &other, GetSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
