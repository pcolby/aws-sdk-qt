// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletev2logginglevelrequest.h"
#include "deletev2logginglevelrequest_p.h"
#include "deletev2logginglevelresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelRequest
 * \brief The DeleteV2LoggingLevelRequest class provides an interface for IoT DeleteV2LoggingLevel requests.
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
 * \sa IoTClient::deleteV2LoggingLevel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest(const DeleteV2LoggingLevelRequest &other)
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteV2LoggingLevelRequest object.
 */
DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest()
    : IoTRequest(new DeleteV2LoggingLevelRequestPrivate(IoTRequest::DeleteV2LoggingLevelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteV2LoggingLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteV2LoggingLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteV2LoggingLevelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteV2LoggingLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelRequestPrivate
 * \brief The DeleteV2LoggingLevelRequestPrivate class provides private implementation for DeleteV2LoggingLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteV2LoggingLevelRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const IoTRequest::Action action, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteV2LoggingLevelRequest
 * class' copy constructor.
 */
DeleteV2LoggingLevelRequestPrivate::DeleteV2LoggingLevelRequestPrivate(
    const DeleteV2LoggingLevelRequestPrivate &other, DeleteV2LoggingLevelRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
