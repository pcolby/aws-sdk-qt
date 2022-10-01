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

#include "createworkerconfigurationrequest.h"
#include "createworkerconfigurationrequest_p.h"
#include "createworkerconfigurationresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateWorkerConfigurationRequest
 * \brief The CreateWorkerConfigurationRequest class provides an interface for KafkaConnect CreateWorkerConfiguration requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createWorkerConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkerConfigurationRequest::CreateWorkerConfigurationRequest(const CreateWorkerConfigurationRequest &other)
    : KafkaConnectRequest(new CreateWorkerConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkerConfigurationRequest object.
 */
CreateWorkerConfigurationRequest::CreateWorkerConfigurationRequest()
    : KafkaConnectRequest(new CreateWorkerConfigurationRequestPrivate(KafkaConnectRequest::CreateWorkerConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkerConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkerConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkerConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkerConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::CreateWorkerConfigurationRequestPrivate
 * \brief The CreateWorkerConfigurationRequestPrivate class provides private implementation for CreateWorkerConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateWorkerConfigurationRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
CreateWorkerConfigurationRequestPrivate::CreateWorkerConfigurationRequestPrivate(
    const KafkaConnectRequest::Action action, CreateWorkerConfigurationRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkerConfigurationRequest
 * class' copy constructor.
 */
CreateWorkerConfigurationRequestPrivate::CreateWorkerConfigurationRequestPrivate(
    const CreateWorkerConfigurationRequestPrivate &other, CreateWorkerConfigurationRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
