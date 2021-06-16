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

#include "describebrokerinstanceoptionsrequest.h"
#include "describebrokerinstanceoptionsrequest_p.h"
#include "describebrokerinstanceoptionsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeBrokerInstanceOptionsRequest
 * \brief The DescribeBrokerInstanceOptionsRequest class provides an interface for MQ DescribeBrokerInstanceOptions requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeBrokerInstanceOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBrokerInstanceOptionsRequest::DescribeBrokerInstanceOptionsRequest(const DescribeBrokerInstanceOptionsRequest &other)
    : MqRequest(new DescribeBrokerInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBrokerInstanceOptionsRequest object.
 */
DescribeBrokerInstanceOptionsRequest::DescribeBrokerInstanceOptionsRequest()
    : MqRequest(new DescribeBrokerInstanceOptionsRequestPrivate(MqRequest::DescribeBrokerInstanceOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBrokerInstanceOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBrokerInstanceOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBrokerInstanceOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerInstanceOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DescribeBrokerInstanceOptionsRequestPrivate
 * \brief The DescribeBrokerInstanceOptionsRequestPrivate class provides private implementation for DescribeBrokerInstanceOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeBrokerInstanceOptionsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeBrokerInstanceOptionsRequestPrivate::DescribeBrokerInstanceOptionsRequestPrivate(
    const MqRequest::Action action, DescribeBrokerInstanceOptionsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerInstanceOptionsRequest
 * class' copy constructor.
 */
DescribeBrokerInstanceOptionsRequestPrivate::DescribeBrokerInstanceOptionsRequestPrivate(
    const DescribeBrokerInstanceOptionsRequestPrivate &other, DescribeBrokerInstanceOptionsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
