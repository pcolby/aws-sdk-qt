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

#include "updatesecurityrequest.h"
#include "updatesecurityrequest_p.h"
#include "updatesecurityresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateSecurityRequest
 * \brief The UpdateSecurityRequest class provides an interface for Kafka UpdateSecurity requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateSecurity
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSecurityRequest::UpdateSecurityRequest(const UpdateSecurityRequest &other)
    : KafkaRequest(new UpdateSecurityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSecurityRequest object.
 */
UpdateSecurityRequest::UpdateSecurityRequest()
    : KafkaRequest(new UpdateSecurityRequestPrivate(KafkaRequest::UpdateSecurityAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSecurityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSecurityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecurityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecurityResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateSecurityRequestPrivate
 * \brief The UpdateSecurityRequestPrivate class provides private implementation for UpdateSecurityRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateSecurityRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateSecurityRequestPrivate::UpdateSecurityRequestPrivate(
    const KafkaRequest::Action action, UpdateSecurityRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecurityRequest
 * class' copy constructor.
 */
UpdateSecurityRequestPrivate::UpdateSecurityRequestPrivate(
    const UpdateSecurityRequestPrivate &other, UpdateSecurityRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
