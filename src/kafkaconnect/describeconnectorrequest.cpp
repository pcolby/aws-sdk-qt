// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
