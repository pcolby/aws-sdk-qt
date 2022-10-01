// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprovisioningtemplateversionsrequest.h"
#include "listprovisioningtemplateversionsrequest_p.h"
#include "listprovisioningtemplateversionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListProvisioningTemplateVersionsRequest
 * \brief The ListProvisioningTemplateVersionsRequest class provides an interface for IoT ListProvisioningTemplateVersions requests.
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
 * \sa IoTClient::listProvisioningTemplateVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListProvisioningTemplateVersionsRequest::ListProvisioningTemplateVersionsRequest(const ListProvisioningTemplateVersionsRequest &other)
    : IoTRequest(new ListProvisioningTemplateVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProvisioningTemplateVersionsRequest object.
 */
ListProvisioningTemplateVersionsRequest::ListProvisioningTemplateVersionsRequest()
    : IoTRequest(new ListProvisioningTemplateVersionsRequestPrivate(IoTRequest::ListProvisioningTemplateVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProvisioningTemplateVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProvisioningTemplateVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisioningTemplateVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisioningTemplateVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListProvisioningTemplateVersionsRequestPrivate
 * \brief The ListProvisioningTemplateVersionsRequestPrivate class provides private implementation for ListProvisioningTemplateVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListProvisioningTemplateVersionsRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
ListProvisioningTemplateVersionsRequestPrivate::ListProvisioningTemplateVersionsRequestPrivate(
    const IoTRequest::Action action, ListProvisioningTemplateVersionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProvisioningTemplateVersionsRequest
 * class' copy constructor.
 */
ListProvisioningTemplateVersionsRequestPrivate::ListProvisioningTemplateVersionsRequestPrivate(
    const ListProvisioningTemplateVersionsRequestPrivate &other, ListProvisioningTemplateVersionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
