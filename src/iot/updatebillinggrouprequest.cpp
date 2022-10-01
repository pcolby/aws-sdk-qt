// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebillinggrouprequest.h"
#include "updatebillinggrouprequest_p.h"
#include "updatebillinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateBillingGroupRequest
 * \brief The UpdateBillingGroupRequest class provides an interface for IoT UpdateBillingGroup requests.
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
 * \sa IoTClient::updateBillingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBillingGroupRequest::UpdateBillingGroupRequest(const UpdateBillingGroupRequest &other)
    : IoTRequest(new UpdateBillingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBillingGroupRequest object.
 */
UpdateBillingGroupRequest::UpdateBillingGroupRequest()
    : IoTRequest(new UpdateBillingGroupRequestPrivate(IoTRequest::UpdateBillingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBillingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBillingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBillingGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBillingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::UpdateBillingGroupRequestPrivate
 * \brief The UpdateBillingGroupRequestPrivate class provides private implementation for UpdateBillingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateBillingGroupRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
UpdateBillingGroupRequestPrivate::UpdateBillingGroupRequestPrivate(
    const IoTRequest::Action action, UpdateBillingGroupRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBillingGroupRequest
 * class' copy constructor.
 */
UpdateBillingGroupRequestPrivate::UpdateBillingGroupRequestPrivate(
    const UpdateBillingGroupRequestPrivate &other, UpdateBillingGroupRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
