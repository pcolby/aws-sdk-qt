// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserrequest.h"
#include "describeuserrequest_p.h"
#include "describeuserresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeUserRequest
 * \brief The DescribeUserRequest class provides an interface for Mq DescribeUser requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserRequest::DescribeUserRequest(const DescribeUserRequest &other)
    : MqRequest(new DescribeUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserRequest object.
 */
DescribeUserRequest::DescribeUserRequest()
    : MqRequest(new DescribeUserRequestPrivate(MqRequest::DescribeUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeUserRequestPrivate
 * \brief The DescribeUserRequestPrivate class provides private implementation for DescribeUserRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeUserRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const MqRequest::Action action, DescribeUserRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserRequest
 * class' copy constructor.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const DescribeUserRequestPrivate &other, DescribeUserRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
