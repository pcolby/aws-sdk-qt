// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateUserRequest
 * \brief The UpdateUserRequest class provides an interface for Mq UpdateUser requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateUser
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : MqRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : MqRequest(new UpdateUserRequestPrivate(MqRequest::UpdateUserAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::UpdateUserRequestPrivate
 * \brief The UpdateUserRequestPrivate class provides private implementation for UpdateUserRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateUserRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const MqRequest::Action action, UpdateUserRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
