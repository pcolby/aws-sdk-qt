// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
