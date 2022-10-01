// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationrequest.h"
#include "updateconfigurationrequest_p.h"
#include "updateconfigurationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateConfigurationRequest
 * \brief The UpdateConfigurationRequest class provides an interface for Kafka UpdateConfiguration requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest(const UpdateConfigurationRequest &other)
    : KafkaRequest(new UpdateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationRequest object.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest()
    : KafkaRequest(new UpdateConfigurationRequestPrivate(KafkaRequest::UpdateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateConfigurationRequestPrivate
 * \brief The UpdateConfigurationRequestPrivate class provides private implementation for UpdateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateConfigurationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const KafkaRequest::Action action, UpdateConfigurationRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationRequest
 * class' copy constructor.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const UpdateConfigurationRequestPrivate &other, UpdateConfigurationRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
