// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
