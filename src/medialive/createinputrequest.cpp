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

#include "createinputrequest.h"
#include "createinputrequest_p.h"
#include "createinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputRequest
 *
 * \brief The CreateInputRequest class encapsulates MediaLive CreateInput requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::createInput
 */

/*!
 * @brief  Constructs a new CreateInputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInputRequest::CreateInputRequest(const CreateInputRequest &other)
    : MediaLiveRequest(new CreateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateInputRequest object.
 */
CreateInputRequest::CreateInputRequest()
    : MediaLiveRequest(new CreateInputRequestPrivate(MediaLiveRequest::CreateInputAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInputRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateInputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInputResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateInputRequestPrivate
 *
 * @brief  Private implementation for CreateInputRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInputRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public CreateInputRequest instance.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const MediaLiveRequest::Action action, CreateInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInputRequest instance.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const CreateInputRequestPrivate &other, CreateInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
