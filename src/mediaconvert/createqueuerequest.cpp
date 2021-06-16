/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createqueuerequest.h"
#include "createqueuerequest_p.h"
#include "createqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateQueueRequest
 * \brief The CreateQueueRequest class provides an interface for MediaConvert CreateQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createQueue
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQueueRequest::CreateQueueRequest(const CreateQueueRequest &other)
    : MediaConvertRequest(new CreateQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQueueRequest object.
 */
CreateQueueRequest::CreateQueueRequest()
    : MediaConvertRequest(new CreateQueueRequestPrivate(MediaConvertRequest::CreateQueueAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::CreateQueueRequestPrivate
 * \brief The CreateQueueRequestPrivate class provides private implementation for CreateQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateQueueRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const MediaConvertRequest::Action action, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQueueRequest
 * class' copy constructor.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const CreateQueueRequestPrivate &other, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
