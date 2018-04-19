/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createconfigurationrequest.h"
#include "createconfigurationrequest_p.h"
#include "createconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::CreateConfigurationRequest
 * \brief The CreateConfigurationRequest class provides an interface for MQ CreateConfiguration requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::createConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationRequest::CreateConfigurationRequest(const CreateConfigurationRequest &other)
    : MQRequest(new CreateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationRequest object.
 */
CreateConfigurationRequest::CreateConfigurationRequest()
    : MQRequest(new CreateConfigurationRequestPrivate(MQRequest::CreateConfigurationAction, this))
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
 * \class QtAws::MQ::CreateConfigurationRequestPrivate
 * \brief The CreateConfigurationRequestPrivate class provides private implementation for CreateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a CreateConfigurationRequestPrivate object for MQ \a action,
 * with public implementation \a q.
 */
CreateConfigurationRequestPrivate::CreateConfigurationRequestPrivate(
    const MQRequest::Action action, CreateConfigurationRequest * const q)
    : MQRequestPrivate(action, q)
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
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
