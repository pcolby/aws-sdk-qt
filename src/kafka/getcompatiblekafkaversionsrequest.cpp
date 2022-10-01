// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
