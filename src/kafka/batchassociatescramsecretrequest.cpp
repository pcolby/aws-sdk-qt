// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchassociatescramsecretrequest.h"
#include "batchassociatescramsecretrequest_p.h"
#include "batchassociatescramsecretresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::BatchAssociateScramSecretRequest
 * \brief The BatchAssociateScramSecretRequest class provides an interface for Kafka BatchAssociateScramSecret requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::batchAssociateScramSecret
 */

/*!
 * Constructs a copy of \a other.
 */
BatchAssociateScramSecretRequest::BatchAssociateScramSecretRequest(const BatchAssociateScramSecretRequest &other)
    : KafkaRequest(new BatchAssociateScramSecretRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchAssociateScramSecretRequest object.
 */
BatchAssociateScramSecretRequest::BatchAssociateScramSecretRequest()
    : KafkaRequest(new BatchAssociateScramSecretRequestPrivate(KafkaRequest::BatchAssociateScramSecretAction, this))
{

}

/*!
 * \reimp
 */
bool BatchAssociateScramSecretRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchAssociateScramSecretResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchAssociateScramSecretRequest::response(QNetworkReply * const reply) const
{
    return new BatchAssociateScramSecretResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::BatchAssociateScramSecretRequestPrivate
 * \brief The BatchAssociateScramSecretRequestPrivate class provides private implementation for BatchAssociateScramSecretRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a BatchAssociateScramSecretRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
BatchAssociateScramSecretRequestPrivate::BatchAssociateScramSecretRequestPrivate(
    const KafkaRequest::Action action, BatchAssociateScramSecretRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchAssociateScramSecretRequest
 * class' copy constructor.
 */
BatchAssociateScramSecretRequestPrivate::BatchAssociateScramSecretRequestPrivate(
    const BatchAssociateScramSecretRequestPrivate &other, BatchAssociateScramSecretRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
