// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserrequest.h"
#include "createuserrequest_p.h"
#include "createuserresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateUserRequest
 * \brief The CreateUserRequest class provides an interface for Mq CreateUser requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createUser
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserRequest::CreateUserRequest(const CreateUserRequest &other)
    : MqRequest(new CreateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserRequest object.
 */
CreateUserRequest::CreateUserRequest()
    : MqRequest(new CreateUserRequestPrivate(MqRequest::CreateUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::CreateUserRequestPrivate
 * \brief The CreateUserRequestPrivate class provides private implementation for CreateUserRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateUserRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const MqRequest::Action action, CreateUserRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserRequest
 * class' copy constructor.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const CreateUserRequestPrivate &other, CreateUserRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
