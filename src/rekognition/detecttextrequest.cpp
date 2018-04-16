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

#include "detecttextrequest.h"
#include "detecttextrequest_p.h"
#include "detecttextresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectTextRequest
 *
 * \brief The DetectTextRequest class provides an interface for Rekognition DetectText requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectText
 */

/*!
 * @brief  Constructs a new DetectTextRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectTextRequest::DetectTextRequest(const DetectTextRequest &other)
    : RekognitionRequest(new DetectTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DetectTextRequest object.
 */
DetectTextRequest::DetectTextRequest()
    : RekognitionRequest(new DetectTextRequestPrivate(RekognitionRequest::DetectTextAction, this))
{

}

/*!
 * \reimp
 */
bool DetectTextRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DetectTextResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectTextResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectTextRequest::response(QNetworkReply * const reply) const
{
    return new DetectTextResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DetectTextRequestPrivate
 *
 * @brief  Private implementation for DetectTextRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetectTextRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DetectTextRequest instance.
 */
DetectTextRequestPrivate::DetectTextRequestPrivate(
    const RekognitionRequest::Action action, DetectTextRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DetectTextRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectTextRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectTextRequest instance.
 */
DetectTextRequestPrivate::DetectTextRequestPrivate(
    const DetectTextRequestPrivate &other, DetectTextRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
