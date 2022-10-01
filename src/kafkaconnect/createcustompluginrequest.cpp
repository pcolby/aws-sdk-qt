// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
