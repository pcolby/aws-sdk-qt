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

#include "describecustompluginrequest.h"
#include "describecustompluginrequest_p.h"
#include "describecustompluginresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginRequest
 * \brief The DescribeCustomPluginRequest class provides an interface for KafkaConnect DescribeCustomPlugin requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeCustomPlugin
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCustomPluginRequest::DescribeCustomPluginRequest(const DescribeCustomPluginRequest &other)
    : KafkaConnectRequest(new DescribeCustomPluginRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCustomPluginRequest object.
 */
DescribeCustomPluginRequest::DescribeCustomPluginRequest()
    : KafkaConnectRequest(new DescribeCustomPluginRequestPrivate(KafkaConnectRequest::DescribeCustomPluginAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCustomPluginRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCustomPluginResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCustomPluginRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCustomPluginResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginRequestPrivate
 * \brief The DescribeCustomPluginRequestPrivate class provides private implementation for DescribeCustomPluginRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeCustomPluginRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
DescribeCustomPluginRequestPrivate::DescribeCustomPluginRequestPrivate(
    const KafkaConnectRequest::Action action, DescribeCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCustomPluginRequest
 * class' copy constructor.
 */
DescribeCustomPluginRequestPrivate::DescribeCustomPluginRequestPrivate(
    const DescribeCustomPluginRequestPrivate &other, DescribeCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
