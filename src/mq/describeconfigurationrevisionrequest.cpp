/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionrequest_p.h"
#include "describeconfigurationrevisionresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionRequest
 * \brief The DescribeConfigurationRevisionRequest class provides an interface for MQ DescribeConfigurationRevision requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::describeConfigurationRevision
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest(const DescribeConfigurationRevisionRequest &other)
    : MqRequest(new DescribeConfigurationRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConfigurationRevisionRequest object.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest()
    : MqRequest(new DescribeConfigurationRevisionRequestPrivate(MqRequest::DescribeConfigurationRevisionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationRevisionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConfigurationRevisionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRevisionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationRevisionResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionRequestPrivate
 * \brief The DescribeConfigurationRevisionRequestPrivate class provides private implementation for DescribeConfigurationRevisionRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeConfigurationRevisionRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const MqRequest::Action action, DescribeConfigurationRevisionRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRevisionRequest
 * class' copy constructor.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const DescribeConfigurationRevisionRequestPrivate &other, DescribeConfigurationRevisionRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
