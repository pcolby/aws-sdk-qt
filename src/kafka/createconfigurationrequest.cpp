// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationrequest.h"
#include "createconfigurationrequest_p.h"
#include "createconfigurationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateConfigurationRequest
 * \brief The CreateConfigurationRequest class provides an interface for Kafka CreateConfiguration requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationRequest::CreateConfigurationRequest(const CreateConfigurationRequest &other)
    : KafkaRequest(new CreateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationRequest object.
 */
CreateConfigurationRequest::CreateConfigurationRequest()
    : KafkaRequest(new CreateConfigurationRequestPrivate(KafkaRequest::CreateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::CreateConfigurationRequestPrivate
 * \brief The CreateConfigurationRequestPrivate class provides private implementation for CreateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateConfigurationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const KafkaRequest::Action action, CreateConfigurationRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationRequest
 * class' copy constructor.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const CreateConfigurationRequestPrivate &other, CreateConfigurationRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
