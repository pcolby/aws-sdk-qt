// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbillinggrouprequest.h"
#include "createbillinggrouprequest_p.h"
#include "createbillinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateBillingGroupRequest
 * \brief The CreateBillingGroupRequest class provides an interface for IoT CreateBillingGroup requests.
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
 * \sa IoTClient::createBillingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBillingGroupRequest::CreateBillingGroupRequest(const CreateBillingGroupRequest &other)
    : IoTRequest(new CreateBillingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBillingGroupRequest object.
 */
CreateBillingGroupRequest::CreateBillingGroupRequest()
    : IoTRequest(new CreateBillingGroupRequestPrivate(IoTRequest::CreateBillingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBillingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBillingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBillingGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateBillingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::CreateBillingGroupRequestPrivate
 * \brief The CreateBillingGroupRequestPrivate class provides private implementation for CreateBillingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateBillingGroupRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
CreateBillingGroupRequestPrivate::CreateBillingGroupRequestPrivate(
    const IoTRequest::Action action, CreateBillingGroupRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBillingGroupRequest
 * class' copy constructor.
 */
CreateBillingGroupRequestPrivate::CreateBillingGroupRequestPrivate(
    const CreateBillingGroupRequestPrivate &other, CreateBillingGroupRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
