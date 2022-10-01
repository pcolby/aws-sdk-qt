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

#include "createcustompluginrequest.h"
#include "createcustompluginrequest_p.h"
#include "createcustompluginresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateCustomPluginRequest
 * \brief The CreateCustomPluginRequest class provides an interface for KafkaConnect CreateCustomPlugin requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createCustomPlugin
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCustomPluginRequest::CreateCustomPluginRequest(const CreateCustomPluginRequest &other)
    : KafkaConnectRequest(new CreateCustomPluginRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCustomPluginRequest object.
 */
CreateCustomPluginRequest::CreateCustomPluginRequest()
    : KafkaConnectRequest(new CreateCustomPluginRequestPrivate(KafkaConnectRequest::CreateCustomPluginAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCustomPluginRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCustomPluginResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCustomPluginRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomPluginResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::CreateCustomPluginRequestPrivate
 * \brief The CreateCustomPluginRequestPrivate class provides private implementation for CreateCustomPluginRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateCustomPluginRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
CreateCustomPluginRequestPrivate::CreateCustomPluginRequestPrivate(
    const KafkaConnectRequest::Action action, CreateCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomPluginRequest
 * class' copy constructor.
 */
CreateCustomPluginRequestPrivate::CreateCustomPluginRequestPrivate(
    const CreateCustomPluginRequestPrivate &other, CreateCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
