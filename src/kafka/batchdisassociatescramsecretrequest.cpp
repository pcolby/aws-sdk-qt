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
