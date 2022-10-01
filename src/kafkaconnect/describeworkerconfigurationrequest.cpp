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

#include "describeworkerconfigurationrequest.h"
#include "describeworkerconfigurationrequest_p.h"
#include "describeworkerconfigurationresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeWorkerConfigurationRequest
 * \brief The DescribeWorkerConfigurationRequest class provides an interface for KafkaConnect DescribeWorkerConfiguration requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeWorkerConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkerConfigurationRequest::DescribeWorkerConfigurationRequest(const DescribeWorkerConfigurationRequest &other)
    : KafkaConnectRequest(new DescribeWorkerConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkerConfigurationRequest object.
 */
DescribeWorkerConfigurationRequest::DescribeWorkerConfigurationRequest()
    : KafkaConnectRequest(new DescribeWorkerConfigurationRequestPrivate(KafkaConnectRequest::DescribeWorkerConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkerConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkerConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkerConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkerConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::DescribeWorkerConfigurationRequestPrivate
 * \brief The DescribeWorkerConfigurationRequestPrivate class provides private implementation for DescribeWorkerConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeWorkerConfigurationRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
DescribeWorkerConfigurationRequestPrivate::DescribeWorkerConfigurationRequestPrivate(
    const KafkaConnectRequest::Action action, DescribeWorkerConfigurationRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkerConfigurationRequest
 * class' copy constructor.
 */
DescribeWorkerConfigurationRequestPrivate::DescribeWorkerConfigurationRequestPrivate(
    const DescribeWorkerConfigurationRequestPrivate &other, DescribeWorkerConfigurationRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
