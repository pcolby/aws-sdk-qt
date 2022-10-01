// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbootstrapbrokersrequest.h"
#include "getbootstrapbrokersrequest_p.h"
#include "getbootstrapbrokersresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersRequest
 * \brief The GetBootstrapBrokersRequest class provides an interface for Kafka GetBootstrapBrokers requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::getBootstrapBrokers
 */

/*!
 * Constructs a copy of \a other.
 */
GetBootstrapBrokersRequest::GetBootstrapBrokersRequest(const GetBootstrapBrokersRequest &other)
    : KafkaRequest(new GetBootstrapBrokersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBootstrapBrokersRequest object.
 */
GetBootstrapBrokersRequest::GetBootstrapBrokersRequest()
    : KafkaRequest(new GetBootstrapBrokersRequestPrivate(KafkaRequest::GetBootstrapBrokersAction, this))
{

}

/*!
 * \reimp
 */
bool GetBootstrapBrokersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBootstrapBrokersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBootstrapBrokersRequest::response(QNetworkReply * const reply) const
{
    return new GetBootstrapBrokersResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersRequestPrivate
 * \brief The GetBootstrapBrokersRequestPrivate class provides private implementation for GetBootstrapBrokersRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a GetBootstrapBrokersRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
GetBootstrapBrokersRequestPrivate::GetBootstrapBrokersRequestPrivate(
    const KafkaRequest::Action action, GetBootstrapBrokersRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBootstrapBrokersRequest
 * class' copy constructor.
 */
GetBootstrapBrokersRequestPrivate::GetBootstrapBrokersRequestPrivate(
    const GetBootstrapBrokersRequestPrivate &other, GetBootstrapBrokersRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
