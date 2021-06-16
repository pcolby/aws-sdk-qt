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

#include "deletesuitedefinitionrequest.h"
#include "deletesuitedefinitionrequest_p.h"
#include "deletesuitedefinitionresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::DeleteSuiteDefinitionRequest
 * \brief The DeleteSuiteDefinitionRequest class provides an interface for IoTDeviceAdvisor DeleteSuiteDefinition requests.
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
 * \sa IoTDeviceAdvisorClient::deleteSuiteDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSuiteDefinitionRequest::DeleteSuiteDefinitionRequest(const DeleteSuiteDefinitionRequest &other)
    : IoTDeviceAdvisorRequest(new DeleteSuiteDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSuiteDefinitionRequest object.
 */
DeleteSuiteDefinitionRequest::DeleteSuiteDefinitionRequest()
    : IoTDeviceAdvisorRequest(new DeleteSuiteDefinitionRequestPrivate(IoTDeviceAdvisorRequest::DeleteSuiteDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSuiteDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSuiteDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSuiteDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSuiteDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDeviceAdvisor::DeleteSuiteDefinitionRequestPrivate
 * \brief The DeleteSuiteDefinitionRequestPrivate class provides private implementation for DeleteSuiteDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a DeleteSuiteDefinitionRequestPrivate object for IoTDeviceAdvisor \a action,
 * with public implementation \a q.
 */
DeleteSuiteDefinitionRequestPrivate::DeleteSuiteDefinitionRequestPrivate(
    const IoTDeviceAdvisorRequest::Action action, DeleteSuiteDefinitionRequest * const q)
    : IoTDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSuiteDefinitionRequest
 * class' copy constructor.
 */
DeleteSuiteDefinitionRequestPrivate::DeleteSuiteDefinitionRequestPrivate(
    const DeleteSuiteDefinitionRequestPrivate &other, DeleteSuiteDefinitionRequest * const q)
    : IoTDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
