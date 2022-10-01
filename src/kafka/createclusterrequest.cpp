// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclusterrequest.h"
#include "createclusterrequest_p.h"
#include "createclusterresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateClusterRequest
 * \brief The CreateClusterRequest class provides an interface for Kafka CreateCluster requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClusterRequest::CreateClusterRequest(const CreateClusterRequest &other)
    : KafkaRequest(new CreateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClusterRequest object.
 */
CreateClusterRequest::CreateClusterRequest()
    : KafkaRequest(new CreateClusterRequestPrivate(KafkaRequest::CreateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::CreateClusterRequestPrivate
 * \brief The CreateClusterRequestPrivate class provides private implementation for CreateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateClusterRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const KafkaRequest::Action action, CreateClusterRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterRequest
 * class' copy constructor.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CreateClusterRequestPrivate &other, CreateClusterRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
