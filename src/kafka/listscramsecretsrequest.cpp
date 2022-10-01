// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listscramsecretsrequest.h"
#include "listscramsecretsrequest_p.h"
#include "listscramsecretsresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListScramSecretsRequest
 * \brief The ListScramSecretsRequest class provides an interface for Kafka ListScramSecrets requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listScramSecrets
 */

/*!
 * Constructs a copy of \a other.
 */
ListScramSecretsRequest::ListScramSecretsRequest(const ListScramSecretsRequest &other)
    : KafkaRequest(new ListScramSecretsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListScramSecretsRequest object.
 */
ListScramSecretsRequest::ListScramSecretsRequest()
    : KafkaRequest(new ListScramSecretsRequestPrivate(KafkaRequest::ListScramSecretsAction, this))
{

}

/*!
 * \reimp
 */
bool ListScramSecretsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListScramSecretsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListScramSecretsRequest::response(QNetworkReply * const reply) const
{
    return new ListScramSecretsResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::ListScramSecretsRequestPrivate
 * \brief The ListScramSecretsRequestPrivate class provides private implementation for ListScramSecretsRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListScramSecretsRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
ListScramSecretsRequestPrivate::ListScramSecretsRequestPrivate(
    const KafkaRequest::Action action, ListScramSecretsRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListScramSecretsRequest
 * class' copy constructor.
 */
ListScramSecretsRequestPrivate::ListScramSecretsRequestPrivate(
    const ListScramSecretsRequestPrivate &other, ListScramSecretsRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
