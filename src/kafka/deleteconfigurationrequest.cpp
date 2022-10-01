// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationrequest.h"
#include "deleteconfigurationrequest_p.h"
#include "deleteconfigurationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DeleteConfigurationRequest
 * \brief The DeleteConfigurationRequest class provides an interface for Kafka DeleteConfiguration requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::deleteConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigurationRequest::DeleteConfigurationRequest(const DeleteConfigurationRequest &other)
    : KafkaRequest(new DeleteConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigurationRequest object.
 */
DeleteConfigurationRequest::DeleteConfigurationRequest()
    : KafkaRequest(new DeleteConfigurationRequestPrivate(KafkaRequest::DeleteConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::DeleteConfigurationRequestPrivate
 * \brief The DeleteConfigurationRequestPrivate class provides private implementation for DeleteConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DeleteConfigurationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
DeleteConfigurationRequestPrivate::DeleteConfigurationRequestPrivate(
    const KafkaRequest::Action action, DeleteConfigurationRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationRequest
 * class' copy constructor.
 */
DeleteConfigurationRequestPrivate::DeleteConfigurationRequestPrivate(
    const DeleteConfigurationRequestPrivate &other, DeleteConfigurationRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
