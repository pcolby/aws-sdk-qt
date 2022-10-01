// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationrequest.h"
#include "createconfigurationrequest_p.h"
#include "createconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateConfigurationRequest
 * \brief The CreateConfigurationRequest class provides an interface for Mq CreateConfiguration requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationRequest::CreateConfigurationRequest(const CreateConfigurationRequest &other)
    : MqRequest(new CreateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationRequest object.
 */
CreateConfigurationRequest::CreateConfigurationRequest()
    : MqRequest(new CreateConfigurationRequestPrivate(MqRequest::CreateConfigurationAction, this))
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
 * \class QtAws::Mq::CreateConfigurationRequestPrivate
 * \brief The CreateConfigurationRequestPrivate class provides private implementation for CreateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateConfigurationRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const MqRequest::Action action, CreateConfigurationRequest * const q)
    : MqRequestPrivate(action, q)
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
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
