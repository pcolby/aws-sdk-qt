// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterrequest.h"
#include "deleteclusterrequest_p.h"
#include "deleteclusterresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DeleteClusterRequest
 * \brief The DeleteClusterRequest class provides an interface for Kafka DeleteCluster requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::deleteCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClusterRequest::DeleteClusterRequest(const DeleteClusterRequest &other)
    : KafkaRequest(new DeleteClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClusterRequest object.
 */
DeleteClusterRequest::DeleteClusterRequest()
    : KafkaRequest(new DeleteClusterRequestPrivate(KafkaRequest::DeleteClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::DeleteClusterRequestPrivate
 * \brief The DeleteClusterRequestPrivate class provides private implementation for DeleteClusterRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DeleteClusterRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const KafkaRequest::Action action, DeleteClusterRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterRequest
 * class' copy constructor.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const DeleteClusterRequestPrivate &other, DeleteClusterRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
