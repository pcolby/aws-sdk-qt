// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclusterv2request.h"
#include "createclusterv2request_p.h"
#include "createclusterv2response.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateClusterV2Request
 * \brief The CreateClusterV2Request class provides an interface for Kafka CreateClusterV2 requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createClusterV2
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClusterV2Request::CreateClusterV2Request(const CreateClusterV2Request &other)
    : KafkaRequest(new CreateClusterV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClusterV2Request object.
 */
CreateClusterV2Request::CreateClusterV2Request()
    : KafkaRequest(new CreateClusterV2RequestPrivate(KafkaRequest::CreateClusterV2Action, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClusterV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterV2Request::response(QNetworkReply * const reply) const
{
    return new CreateClusterV2Response(*this, reply);
}

/*!
 * \class QtAws::Kafka::CreateClusterV2RequestPrivate
 * \brief The CreateClusterV2RequestPrivate class provides private implementation for CreateClusterV2Request.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateClusterV2RequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
CreateClusterV2RequestPrivate::CreateClusterV2RequestPrivate(
    const KafkaRequest::Action action, CreateClusterV2Request * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterV2Request
 * class' copy constructor.
 */
CreateClusterV2RequestPrivate::CreateClusterV2RequestPrivate(
    const CreateClusterV2RequestPrivate &other, CreateClusterV2Request * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
