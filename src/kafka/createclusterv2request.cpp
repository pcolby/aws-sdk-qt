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

#include "createclusterv2request.h"
#include "createclusterv2request_p.h"
#include "createclusterv2response.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::CreateClusterV2Request
 * \brief The CreateClusterV2Request class provides an interface for Kafka CreateClusterV2 requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::createClusterV2
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClusterV2Request::CreateClusterV2Request(const CreateClusterV2Request &other)
    : KafkaRequest(new CreateClusterV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClusterV2Request object.
 */
CreateClusterV2Request::CreateClusterV2Request()
    : KafkaRequest(new CreateClusterV2RequestPrivate(KafkaRequest::CreateClusterV2Action, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClusterV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterV2Request::response(QNetworkReply * const reply) const
{
    return new CreateClusterV2Response(*this, reply);
}

/*!
 * \class QtAws::Kafka::CreateClusterV2RequestPrivate
 * \brief The CreateClusterV2RequestPrivate class provides private implementation for CreateClusterV2Request.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a CreateClusterV2RequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
CreateClusterV2RequestPrivate::CreateClusterV2RequestPrivate(
    const KafkaRequest::Action action, CreateClusterV2Request * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterV2Request
 * class' copy constructor.
 */
CreateClusterV2RequestPrivate::CreateClusterV2RequestPrivate(
    const CreateClusterV2RequestPrivate &other, CreateClusterV2Request * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
