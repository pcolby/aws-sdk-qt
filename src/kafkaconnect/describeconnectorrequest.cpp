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

#include "describeconnectorrequest.h"
#include "describeconnectorrequest_p.h"
#include "describeconnectorresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeConnectorRequest
 * \brief The DescribeConnectorRequest class provides an interface for KafkaConnect DescribeConnector requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeConnector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectorRequest::DescribeConnectorRequest(const DescribeConnectorRequest &other)
    : KafkaConnectRequest(new DescribeConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectorRequest object.
 */
DescribeConnectorRequest::DescribeConnectorRequest()
    : KafkaConnectRequest(new DescribeConnectorRequestPrivate(KafkaConnectRequest::DescribeConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::DescribeConnectorRequestPrivate
 * \brief The DescribeConnectorRequestPrivate class provides private implementation for DescribeConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeConnectorRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
DescribeConnectorRequestPrivate::DescribeConnectorRequestPrivate(
    const KafkaConnectRequest::Action action, DescribeConnectorRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectorRequest
 * class' copy constructor.
 */
DescribeConnectorRequestPrivate::DescribeConnectorRequestPrivate(
    const DescribeConnectorRequestPrivate &other, DescribeConnectorRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
