// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsrequest.h"
#include "deletetagsrequest_p.h"
#include "deletetagsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DeleteTagsRequest
 * \brief The DeleteTagsRequest class provides an interface for Mq DeleteTags requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::deleteTags
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagsRequest::DeleteTagsRequest(const DeleteTagsRequest &other)
    : MqRequest(new DeleteTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagsRequest object.
 */
DeleteTagsRequest::DeleteTagsRequest()
    : MqRequest(new DeleteTagsRequestPrivate(MqRequest::DeleteTagsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DeleteTagsRequestPrivate
 * \brief The DeleteTagsRequestPrivate class provides private implementation for DeleteTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DeleteTagsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const MqRequest::Action action, DeleteTagsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsRequest
 * class' copy constructor.
 */
DeleteTagsRequestPrivate::DeleteTagsRequestPrivate(
    const DeleteTagsRequestPrivate &other, DeleteTagsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
