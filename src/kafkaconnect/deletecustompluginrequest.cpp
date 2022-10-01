// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
