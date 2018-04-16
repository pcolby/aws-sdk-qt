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

#include "createqueuerequest.h"
#include "createqueuerequest_p.h"
#include "createqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateQueueRequest
 *
 * \brief The CreateQueueRequest class encapsulates MediaConvert CreateQueue requests.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::createQueue
 */

/*!
 * @brief  Constructs a new CreateQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateQueueRequest::CreateQueueRequest(const CreateQueueRequest &other)
    : MediaConvertRequest(new CreateQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateQueueRequest object.
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
 * @brief  Construct an CreateQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateQueueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueueResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateQueueRequestPrivate
 *
 * @brief  Private implementation for CreateQueueRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateQueueRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public CreateQueueRequest instance.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const MediaConvertRequest::Action action, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateQueueRequest instance.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const CreateQueueRequestPrivate &other, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
