/*
    Copyright 2013-2019 Paul Colby

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
