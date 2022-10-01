// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmanagedjobtemplatesrequest.h"
#include "listmanagedjobtemplatesrequest_p.h"
#include "listmanagedjobtemplatesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListManagedJobTemplatesRequest
 * \brief The ListManagedJobTemplatesRequest class provides an interface for IoT ListManagedJobTemplates requests.
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
 * \sa IoTClient::listManagedJobTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListManagedJobTemplatesRequest::ListManagedJobTemplatesRequest(const ListManagedJobTemplatesRequest &other)
    : IoTRequest(new ListManagedJobTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListManagedJobTemplatesRequest object.
 */
ListManagedJobTemplatesRequest::ListManagedJobTemplatesRequest()
    : IoTRequest(new ListManagedJobTemplatesRequestPrivate(IoTRequest::ListManagedJobTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListManagedJobTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListManagedJobTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListManagedJobTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListManagedJobTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListManagedJobTemplatesRequestPrivate
 * \brief The ListManagedJobTemplatesRequestPrivate class provides private implementation for ListManagedJobTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListManagedJobTemplatesRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
ListManagedJobTemplatesRequestPrivate::ListManagedJobTemplatesRequestPrivate(
    const IoTRequest::Action action, ListManagedJobTemplatesRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListManagedJobTemplatesRequest
 * class' copy constructor.
 */
ListManagedJobTemplatesRequestPrivate::ListManagedJobTemplatesRequestPrivate(
    const ListManagedJobTemplatesRequestPrivate &other, ListManagedJobTemplatesRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
