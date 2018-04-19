/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a ListQueuesRequestPrivate object for MediaConvert \a action with,
 * public implementation \a q.
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
