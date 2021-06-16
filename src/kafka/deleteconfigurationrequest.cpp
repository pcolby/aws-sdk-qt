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
