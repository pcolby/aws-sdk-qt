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

#include "getfacedetectionrequest.h"
#include "getfacedetectionrequest_p.h"
#include "getfacedetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetFaceDetectionRequest
 *
 * \brief The GetFaceDetectionRequest class encapsulates Rekognition GetFaceDetection requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getFaceDetection
 */

/*!
 * @brief  Constructs a new GetFaceDetectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFaceDetectionRequest::GetFaceDetectionRequest(const GetFaceDetectionRequest &other)
    : RekognitionRequest(new GetFaceDetectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFaceDetectionRequest object.
 */
GetFaceDetectionRequest::GetFaceDetectionRequest()
    : RekognitionRequest(new GetFaceDetectionRequestPrivate(RekognitionRequest::GetFaceDetectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFaceDetectionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFaceDetectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFaceDetectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFaceDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetFaceDetectionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFaceDetectionRequestPrivate
 *
 * @brief  Private implementation for GetFaceDetectionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFaceDetectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetFaceDetectionRequest instance.
 */
GetFaceDetectionRequestPrivate::GetFaceDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFaceDetectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFaceDetectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFaceDetectionRequest instance.
 */
GetFaceDetectionRequestPrivate::GetFaceDetectionRequestPrivate(
    const GetFaceDetectionRequestPrivate &other, GetFaceDetectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
