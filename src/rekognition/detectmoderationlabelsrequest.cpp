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

#include "detectmoderationlabelsrequest.h"
#include "detectmoderationlabelsrequest_p.h"
#include "detectmoderationlabelsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectModerationLabelsRequest
 *
 * \brief The DetectModerationLabelsRequest class provides an interface for Rekognition DetectModerationLabels requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectModerationLabels
 */

/*!
 * @brief  Constructs a new DetectModerationLabelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectModerationLabelsRequest::DetectModerationLabelsRequest(const DetectModerationLabelsRequest &other)
    : RekognitionRequest(new DetectModerationLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DetectModerationLabelsRequest object.
 */
DetectModerationLabelsRequest::DetectModerationLabelsRequest()
    : RekognitionRequest(new DetectModerationLabelsRequestPrivate(RekognitionRequest::DetectModerationLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool DetectModerationLabelsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DetectModerationLabelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectModerationLabelsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectModerationLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DetectModerationLabelsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DetectModerationLabelsRequestPrivate
 *
 * @brief  Private implementation for DetectModerationLabelsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetectModerationLabelsRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DetectModerationLabelsRequest instance.
 */
DetectModerationLabelsRequestPrivate::DetectModerationLabelsRequestPrivate(
    const RekognitionRequest::Action action, DetectModerationLabelsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DetectModerationLabelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectModerationLabelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectModerationLabelsRequest instance.
 */
DetectModerationLabelsRequestPrivate::DetectModerationLabelsRequestPrivate(
    const DetectModerationLabelsRequestPrivate &other, DetectModerationLabelsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
