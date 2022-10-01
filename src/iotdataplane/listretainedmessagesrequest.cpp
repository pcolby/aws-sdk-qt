// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listretainedmessagesrequest.h"
#include "listretainedmessagesrequest_p.h"
#include "listretainedmessagesresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::ListRetainedMessagesRequest
 * \brief The ListRetainedMessagesRequest class provides an interface for IoTDataPlane ListRetainedMessages requests.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::listRetainedMessages
 */

/*!
 * Constructs a copy of \a other.
 */
ListRetainedMessagesRequest::ListRetainedMessagesRequest(const ListRetainedMessagesRequest &other)
    : IoTDataPlaneRequest(new ListRetainedMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRetainedMessagesRequest object.
 */
ListRetainedMessagesRequest::ListRetainedMessagesRequest()
    : IoTDataPlaneRequest(new ListRetainedMessagesRequestPrivate(IoTDataPlaneRequest::ListRetainedMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRetainedMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRetainedMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRetainedMessagesRequest::response(QNetworkReply * const reply) const
{
    return new ListRetainedMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::ListRetainedMessagesRequestPrivate
 * \brief The ListRetainedMessagesRequestPrivate class provides private implementation for ListRetainedMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a ListRetainedMessagesRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
ListRetainedMessagesRequestPrivate::ListRetainedMessagesRequestPrivate(
    const IoTDataPlaneRequest::Action action, ListRetainedMessagesRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRetainedMessagesRequest
 * class' copy constructor.
 */
ListRetainedMessagesRequestPrivate::ListRetainedMessagesRequestPrivate(
    const ListRetainedMessagesRequestPrivate &other, ListRetainedMessagesRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
