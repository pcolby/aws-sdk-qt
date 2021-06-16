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

#include "getcompatiblekafkaversionsrequest.h"
#include "getcompatiblekafkaversionsrequest_p.h"
#include "getcompatiblekafkaversionsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::GetCompatibleKafkaVersionsRequest
 * \brief The GetCompatibleKafkaVersionsRequest class provides an interface for Kafka GetCompatibleKafkaVersions requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::getCompatibleKafkaVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetCompatibleKafkaVersionsRequest::GetCompatibleKafkaVersionsRequest(const GetCompatibleKafkaVersionsRequest &other)
    : KafkaRequest(new GetCompatibleKafkaVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCompatibleKafkaVersionsRequest object.
 */
GetCompatibleKafkaVersionsRequest::GetCompatibleKafkaVersionsRequest()
    : KafkaRequest(new GetCompatibleKafkaVersionsRequestPrivate(KafkaRequest::GetCompatibleKafkaVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCompatibleKafkaVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCompatibleKafkaVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCompatibleKafkaVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetCompatibleKafkaVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::GetCompatibleKafkaVersionsRequestPrivate
 * \brief The GetCompatibleKafkaVersionsRequestPrivate class provides private implementation for GetCompatibleKafkaVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a GetCompatibleKafkaVersionsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
GetCompatibleKafkaVersionsRequestPrivate::GetCompatibleKafkaVersionsRequestPrivate(
    const KafkaRequest::Action action, GetCompatibleKafkaVersionsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCompatibleKafkaVersionsRequest
 * class' copy constructor.
 */
GetCompatibleKafkaVersionsRequestPrivate::GetCompatibleKafkaVersionsRequestPrivate(
    const GetCompatibleKafkaVersionsRequestPrivate &other, GetCompatibleKafkaVersionsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
