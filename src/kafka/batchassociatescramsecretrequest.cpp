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
