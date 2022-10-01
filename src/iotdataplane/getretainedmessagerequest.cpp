// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getretainedmessagerequest.h"
#include "getretainedmessagerequest_p.h"
#include "getretainedmessageresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::GetRetainedMessageRequest
 * \brief The GetRetainedMessageRequest class provides an interface for IoTDataPlane GetRetainedMessage requests.
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
 * \sa IoTDataPlaneClient::getRetainedMessage
 */

/*!
 * Constructs a copy of \a other.
 */
GetRetainedMessageRequest::GetRetainedMessageRequest(const GetRetainedMessageRequest &other)
    : IoTDataPlaneRequest(new GetRetainedMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRetainedMessageRequest object.
 */
GetRetainedMessageRequest::GetRetainedMessageRequest()
    : IoTDataPlaneRequest(new GetRetainedMessageRequestPrivate(IoTDataPlaneRequest::GetRetainedMessageAction, this))
{

}

/*!
 * \reimp
 */
bool GetRetainedMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRetainedMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRetainedMessageRequest::response(QNetworkReply * const reply) const
{
    return new GetRetainedMessageResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::GetRetainedMessageRequestPrivate
 * \brief The GetRetainedMessageRequestPrivate class provides private implementation for GetRetainedMessageRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a GetRetainedMessageRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
GetRetainedMessageRequestPrivate::GetRetainedMessageRequestPrivate(
    const IoTDataPlaneRequest::Action action, GetRetainedMessageRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRetainedMessageRequest
 * class' copy constructor.
 */
GetRetainedMessageRequestPrivate::GetRetainedMessageRequestPrivate(
    const GetRetainedMessageRequestPrivate &other, GetRetainedMessageRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
