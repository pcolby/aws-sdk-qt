// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
