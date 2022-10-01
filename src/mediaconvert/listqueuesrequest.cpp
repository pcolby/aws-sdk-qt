// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqueuesrequest.h"
#include "listqueuesrequest_p.h"
#include "listqueuesresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListQueuesRequest
 * \brief The ListQueuesRequest class provides an interface for MediaConvert ListQueues requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listQueues
 */

/*!
 * Constructs a copy of \a other.
 */
ListQueuesRequest::ListQueuesRequest(const ListQueuesRequest &other)
    : MediaConvertRequest(new ListQueuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQueuesRequest object.
 */
ListQueuesRequest::ListQueuesRequest()
    : MediaConvertRequest(new ListQueuesRequestPrivate(MediaConvertRequest::ListQueuesAction, this))
{

}

/*!
 * \reimp
 */
bool ListQueuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQueuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueuesRequest::response(QNetworkReply * const reply) const
{
    return new ListQueuesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::ListQueuesRequestPrivate
 * \brief The ListQueuesRequestPrivate class provides private implementation for ListQueuesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListQueuesRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const MediaConvertRequest::Action action, ListQueuesRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQueuesRequest
 * class' copy constructor.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const ListQueuesRequestPrivate &other, ListQueuesRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
