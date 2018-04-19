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

#include "addtagstostreamrequest.h"
#include "addtagstostreamrequest_p.h"
#include "addtagstostreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::AddTagsToStreamRequest
 * \brief The AddTagsToStreamRequest class provides an interface for Kinesis AddTagsToStream requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::addTagsToStream
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToStreamRequest::AddTagsToStreamRequest(const AddTagsToStreamRequest &other)
    : KinesisRequest(new AddTagsToStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToStreamRequest object.
 */
AddTagsToStreamRequest::AddTagsToStreamRequest()
    : KinesisRequest(new AddTagsToStreamRequestPrivate(KinesisRequest::AddTagsToStreamAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToStreamRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::AddTagsToStreamRequestPrivate
 * \brief The AddTagsToStreamRequestPrivate class provides private implementation for AddTagsToStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 *
 * Constructs a AddTagsToStreamRequestPrivate object for Kinesis \a action with,
 * public implementation \a q.
 */
AddTagsToStreamRequestPrivate::AddTagsToStreamRequestPrivate(
    const KinesisRequest::Action action, AddTagsToStreamRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToStreamRequest
 * class' copy constructor.
 */
AddTagsToStreamRequestPrivate::AddTagsToStreamRequestPrivate(
    const AddTagsToStreamRequestPrivate &other, AddTagsToStreamRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
