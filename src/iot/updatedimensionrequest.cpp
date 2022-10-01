// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedimensionrequest.h"
#include "updatedimensionrequest_p.h"
#include "updatedimensionresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateDimensionRequest
 * \brief The UpdateDimensionRequest class provides an interface for IoT UpdateDimension requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::updateDimension
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDimensionRequest::UpdateDimensionRequest(const UpdateDimensionRequest &other)
    : IoTRequest(new UpdateDimensionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDimensionRequest object.
 */
UpdateDimensionRequest::UpdateDimensionRequest()
    : IoTRequest(new UpdateDimensionRequestPrivate(IoTRequest::UpdateDimensionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDimensionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDimensionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDimensionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDimensionResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::UpdateDimensionRequestPrivate
 * \brief The UpdateDimensionRequestPrivate class provides private implementation for UpdateDimensionRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateDimensionRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
UpdateDimensionRequestPrivate::UpdateDimensionRequestPrivate(
    const IoTRequest::Action action, UpdateDimensionRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDimensionRequest
 * class' copy constructor.
 */
UpdateDimensionRequestPrivate::UpdateDimensionRequestPrivate(
    const UpdateDimensionRequestPrivate &other, UpdateDimensionRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
