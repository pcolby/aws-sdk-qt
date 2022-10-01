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

#include "deletecustompluginrequest.h"
#include "deletecustompluginrequest_p.h"
#include "deletecustompluginresponse.h"
#include "kafkaconnectrequest_p.h"

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DeleteCustomPluginRequest
 * \brief The DeleteCustomPluginRequest class provides an interface for KafkaConnect DeleteCustomPlugin requests.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::deleteCustomPlugin
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomPluginRequest::DeleteCustomPluginRequest(const DeleteCustomPluginRequest &other)
    : KafkaConnectRequest(new DeleteCustomPluginRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomPluginRequest object.
 */
DeleteCustomPluginRequest::DeleteCustomPluginRequest()
    : KafkaConnectRequest(new DeleteCustomPluginRequestPrivate(KafkaConnectRequest::DeleteCustomPluginAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomPluginRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomPluginResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomPluginRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomPluginResponse(*this, reply);
}

/*!
 * \class QtAws::KafkaConnect::DeleteCustomPluginRequestPrivate
 * \brief The DeleteCustomPluginRequestPrivate class provides private implementation for DeleteCustomPluginRequest.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DeleteCustomPluginRequestPrivate object for KafkaConnect \a action,
 * with public implementation \a q.
 */
DeleteCustomPluginRequestPrivate::DeleteCustomPluginRequestPrivate(
    const KafkaConnectRequest::Action action, DeleteCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomPluginRequest
 * class' copy constructor.
 */
DeleteCustomPluginRequestPrivate::DeleteCustomPluginRequestPrivate(
    const DeleteCustomPluginRequestPrivate &other, DeleteCustomPluginRequest * const q)
    : KafkaConnectRequestPrivate(other, q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
