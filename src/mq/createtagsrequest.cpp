// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtagsrequest.h"
#include "createtagsrequest_p.h"
#include "createtagsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateTagsRequest
 * \brief The CreateTagsRequest class provides an interface for Mq CreateTags requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTagsRequest::CreateTagsRequest(const CreateTagsRequest &other)
    : MqRequest(new CreateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTagsRequest object.
 */
CreateTagsRequest::CreateTagsRequest()
    : MqRequest(new CreateTagsRequestPrivate(MqRequest::CreateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::CreateTagsRequestPrivate
 * \brief The CreateTagsRequestPrivate class provides private implementation for CreateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateTagsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const MqRequest::Action action, CreateTagsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTagsRequest
 * class' copy constructor.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const CreateTagsRequestPrivate &other, CreateTagsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
