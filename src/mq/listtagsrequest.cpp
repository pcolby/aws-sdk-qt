// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListTagsRequest
 * \brief The ListTagsRequest class provides an interface for Mq ListTags requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : MqRequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : MqRequest(new ListTagsRequestPrivate(MqRequest::ListTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::ListTagsRequestPrivate
 * \brief The ListTagsRequestPrivate class provides private implementation for ListTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListTagsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const MqRequest::Action action, ListTagsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
