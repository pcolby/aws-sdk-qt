// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdisassociatescramsecretrequest.h"
#include "batchdisassociatescramsecretrequest_p.h"
#include "batchdisassociatescramsecretresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::BatchDisassociateScramSecretRequest
 * \brief The BatchDisassociateScramSecretRequest class provides an interface for Kafka BatchDisassociateScramSecret requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::batchDisassociateScramSecret
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDisassociateScramSecretRequest::BatchDisassociateScramSecretRequest(const BatchDisassociateScramSecretRequest &other)
    : KafkaRequest(new BatchDisassociateScramSecretRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDisassociateScramSecretRequest object.
 */
BatchDisassociateScramSecretRequest::BatchDisassociateScramSecretRequest()
    : KafkaRequest(new BatchDisassociateScramSecretRequestPrivate(KafkaRequest::BatchDisassociateScramSecretAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDisassociateScramSecretRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDisassociateScramSecretResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDisassociateScramSecretRequest::response(QNetworkReply * const reply) const
{
    return new BatchDisassociateScramSecretResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::BatchDisassociateScramSecretRequestPrivate
 * \brief The BatchDisassociateScramSecretRequestPrivate class provides private implementation for BatchDisassociateScramSecretRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a BatchDisassociateScramSecretRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
BatchDisassociateScramSecretRequestPrivate::BatchDisassociateScramSecretRequestPrivate(
    const KafkaRequest::Action action, BatchDisassociateScramSecretRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDisassociateScramSecretRequest
 * class' copy constructor.
 */
BatchDisassociateScramSecretRequestPrivate::BatchDisassociateScramSecretRequestPrivate(
    const BatchDisassociateScramSecretRequestPrivate &other, BatchDisassociateScramSecretRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
