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

#include "listauditmitigationactionsexecutionsrequest.h"
#include "listauditmitigationactionsexecutionsrequest_p.h"
#include "listauditmitigationactionsexecutionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListAuditMitigationActionsExecutionsRequest
 * \brief The ListAuditMitigationActionsExecutionsRequest class provides an interface for IoT ListAuditMitigationActionsExecutions requests.
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
 * \sa IoTClient::listAuditMitigationActionsExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListAuditMitigationActionsExecutionsRequest::ListAuditMitigationActionsExecutionsRequest(const ListAuditMitigationActionsExecutionsRequest &other)
    : IoTRequest(new ListAuditMitigationActionsExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAuditMitigationActionsExecutionsRequest object.
 */
ListAuditMitigationActionsExecutionsRequest::ListAuditMitigationActionsExecutionsRequest()
    : IoTRequest(new ListAuditMitigationActionsExecutionsRequestPrivate(IoTRequest::ListAuditMitigationActionsExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAuditMitigationActionsExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAuditMitigationActionsExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAuditMitigationActionsExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListAuditMitigationActionsExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListAuditMitigationActionsExecutionsRequestPrivate
 * \brief The ListAuditMitigationActionsExecutionsRequestPrivate class provides private implementation for ListAuditMitigationActionsExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListAuditMitigationActionsExecutionsRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
ListAuditMitigationActionsExecutionsRequestPrivate::ListAuditMitigationActionsExecutionsRequestPrivate(
    const IoTRequest::Action action, ListAuditMitigationActionsExecutionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAuditMitigationActionsExecutionsRequest
 * class' copy constructor.
 */
ListAuditMitigationActionsExecutionsRequestPrivate::ListAuditMitigationActionsExecutionsRequestPrivate(
    const ListAuditMitigationActionsExecutionsRequestPrivate &other, ListAuditMitigationActionsExecutionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
