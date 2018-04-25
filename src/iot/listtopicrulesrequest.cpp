/*
    Copyright 2013-2018 Paul Colby

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

#include "listtopicrulesrequest.h"
#include "listtopicrulesrequest_p.h"
#include "listtopicrulesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListTopicRulesRequest
 * \brief The ListTopicRulesRequest class provides an interface for IoT ListTopicRules requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listTopicRules
 */

/*!
 * Constructs a copy of \a other.
 */
ListTopicRulesRequest::ListTopicRulesRequest(const ListTopicRulesRequest &other)
    : IoTRequest(new ListTopicRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTopicRulesRequest object.
 */
ListTopicRulesRequest::ListTopicRulesRequest()
    : IoTRequest(new ListTopicRulesRequestPrivate(IoTRequest::ListTopicRulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTopicRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTopicRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTopicRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicRulesResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListTopicRulesRequestPrivate
 * \brief The ListTopicRulesRequestPrivate class provides private implementation for ListTopicRulesRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListTopicRulesRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
ListTopicRulesRequestPrivate::ListTopicRulesRequestPrivate(
    const IoTRequest::Action action, ListTopicRulesRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTopicRulesRequest
 * class' copy constructor.
 */
ListTopicRulesRequestPrivate::ListTopicRulesRequestPrivate(
    const ListTopicRulesRequestPrivate &other, ListTopicRulesRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
