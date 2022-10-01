// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesuitedefinitionrequest.h"
#include "updatesuitedefinitionrequest_p.h"
#include "updatesuitedefinitionresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::UpdateSuiteDefinitionRequest
 * \brief The UpdateSuiteDefinitionRequest class provides an interface for IotDeviceAdvisor UpdateSuiteDefinition requests.
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
 * \sa IotDeviceAdvisorClient::updateSuiteDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSuiteDefinitionRequest::UpdateSuiteDefinitionRequest(const UpdateSuiteDefinitionRequest &other)
    : IotDeviceAdvisorRequest(new UpdateSuiteDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSuiteDefinitionRequest object.
 */
UpdateSuiteDefinitionRequest::UpdateSuiteDefinitionRequest()
    : IotDeviceAdvisorRequest(new UpdateSuiteDefinitionRequestPrivate(IotDeviceAdvisorRequest::UpdateSuiteDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSuiteDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSuiteDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSuiteDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSuiteDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::UpdateSuiteDefinitionRequestPrivate
 * \brief The UpdateSuiteDefinitionRequestPrivate class provides private implementation for UpdateSuiteDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a UpdateSuiteDefinitionRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
UpdateSuiteDefinitionRequestPrivate::UpdateSuiteDefinitionRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, UpdateSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSuiteDefinitionRequest
 * class' copy constructor.
 */
UpdateSuiteDefinitionRequestPrivate::UpdateSuiteDefinitionRequestPrivate(
    const UpdateSuiteDefinitionRequestPrivate &other, UpdateSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
