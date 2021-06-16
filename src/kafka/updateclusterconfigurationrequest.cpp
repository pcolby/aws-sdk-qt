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

#include "updateclusterconfigurationrequest.h"
#include "updateclusterconfigurationrequest_p.h"
#include "updateclusterconfigurationresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateClusterConfigurationRequest
 * \brief The UpdateClusterConfigurationRequest class provides an interface for Kafka UpdateClusterConfiguration requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateClusterConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterConfigurationRequest::UpdateClusterConfigurationRequest(const UpdateClusterConfigurationRequest &other)
    : KafkaRequest(new UpdateClusterConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterConfigurationRequest object.
 */
UpdateClusterConfigurationRequest::UpdateClusterConfigurationRequest()
    : KafkaRequest(new UpdateClusterConfigurationRequestPrivate(KafkaRequest::UpdateClusterConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateClusterConfigurationRequestPrivate
 * \brief The UpdateClusterConfigurationRequestPrivate class provides private implementation for UpdateClusterConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateClusterConfigurationRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateClusterConfigurationRequestPrivate::UpdateClusterConfigurationRequestPrivate(
    const KafkaRequest::Action action, UpdateClusterConfigurationRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterConfigurationRequest
 * class' copy constructor.
 */
UpdateClusterConfigurationRequestPrivate::UpdateClusterConfigurationRequestPrivate(
    const UpdateClusterConfigurationRequestPrivate &other, UpdateClusterConfigurationRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
