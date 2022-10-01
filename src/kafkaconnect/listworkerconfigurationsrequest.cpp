// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkerconfigurationsrequest.h"
#include "listworkerconfigurationsrequest_p.h"
#include "listworkerconfigurationsresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsRequest
 * \brief The ListWorkerConfigurationsRequest class provides an interface for KafkaConnect ListWorkerConfigurations requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listWorkerConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkerConfigurationsRequest::ListWorkerConfigurationsRequest(const ListWorkerConfigurationsRequest &other)
    : KafkaConnectRequest(new ListWorkerConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkerConfigurationsRequest object.
 */
ListWorkerConfigurationsRequest::ListWorkerConfigurationsRequest()
    : KafkaConnectRequest(new ListWorkerConfigurationsRequestPrivate(KafkaConnectRequest::ListWorkerConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkerConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkerConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkerConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkerConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsRequestPrivate
 * \brief The ListWorkerConfigurationsRequestPrivate class provides private implementation for ListWorkerConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListWorkerConfigurationsRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
ListWorkerConfigurationsRequestPrivate::ListWorkerConfigurationsRequestPrivate(
    const KafkaConnectRequest::Action action, ListWorkerConfigurationsRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkerConfigurationsRequest
 * class' copy constructor.
 */
ListWorkerConfigurationsRequestPrivate::ListWorkerConfigurationsRequestPrivate(
    const ListWorkerConfigurationsRequestPrivate &other, ListWorkerConfigurationsRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
