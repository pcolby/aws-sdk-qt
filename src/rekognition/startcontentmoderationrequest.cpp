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

#include "startcontentmoderationrequest.h"
#include "startcontentmoderationrequest_p.h"
#include "startcontentmoderationresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartContentModerationRequest
 *
 * \brief The StartContentModerationRequest class provides an interface for Rekognition StartContentModeration requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startContentModeration
 */

/*!
 * @brief  Constructs a new StartContentModerationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartContentModerationRequest::StartContentModerationRequest(const StartContentModerationRequest &other)
    : RekognitionRequest(new StartContentModerationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartContentModerationRequest object.
 */
StartContentModerationRequest::StartContentModerationRequest()
    : RekognitionRequest(new StartContentModerationRequestPrivate(RekognitionRequest::StartContentModerationAction, this))
{

}

/*!
 * \reimp
 */
bool StartContentModerationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartContentModerationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartContentModerationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * StartContentModerationRequest::response(QNetworkReply * const reply) const
{
    return new StartContentModerationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartContentModerationRequestPrivate
 *
 * @brief  Private implementation for StartContentModerationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartContentModerationRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartContentModerationRequest instance.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const RekognitionRequest::Action action, StartContentModerationRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartContentModerationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartContentModerationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartContentModerationRequest instance.
 */
StartContentModerationRequestPrivate::StartContentModerationRequestPrivate(
    const StartContentModerationRequestPrivate &other, StartContentModerationRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
