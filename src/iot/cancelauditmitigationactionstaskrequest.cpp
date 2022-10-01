// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelauditmitigationactionstaskrequest.h"
#include "cancelauditmitigationactionstaskrequest_p.h"
#include "cancelauditmitigationactionstaskresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CancelAuditMitigationActionsTaskRequest
 * \brief The CancelAuditMitigationActionsTaskRequest class provides an interface for IoT CancelAuditMitigationActionsTask requests.
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
 * \sa IoTClient::cancelAuditMitigationActionsTask
 */

/*!
 * Constructs a copy of \a other.
 */
CancelAuditMitigationActionsTaskRequest::CancelAuditMitigationActionsTaskRequest(const CancelAuditMitigationActionsTaskRequest &other)
    : IoTRequest(new CancelAuditMitigationActionsTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelAuditMitigationActionsTaskRequest object.
 */
CancelAuditMitigationActionsTaskRequest::CancelAuditMitigationActionsTaskRequest()
    : IoTRequest(new CancelAuditMitigationActionsTaskRequestPrivate(IoTRequest::CancelAuditMitigationActionsTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CancelAuditMitigationActionsTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelAuditMitigationActionsTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelAuditMitigationActionsTaskRequest::response(QNetworkReply * const reply) const
{
    return new CancelAuditMitigationActionsTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::CancelAuditMitigationActionsTaskRequestPrivate
 * \brief The CancelAuditMitigationActionsTaskRequestPrivate class provides private implementation for CancelAuditMitigationActionsTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CancelAuditMitigationActionsTaskRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
CancelAuditMitigationActionsTaskRequestPrivate::CancelAuditMitigationActionsTaskRequestPrivate(
    const IoTRequest::Action action, CancelAuditMitigationActionsTaskRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelAuditMitigationActionsTaskRequest
 * class' copy constructor.
 */
CancelAuditMitigationActionsTaskRequestPrivate::CancelAuditMitigationActionsTaskRequestPrivate(
    const CancelAuditMitigationActionsTaskRequestPrivate &other, CancelAuditMitigationActionsTaskRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
