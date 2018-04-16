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

#include "createstreamprocessorrequest.h"
#include "createstreamprocessorrequest_p.h"
#include "createstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateStreamProcessorRequest
 *
 * \brief The CreateStreamProcessorRequest class provides an interface for Rekognition CreateStreamProcessor requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createStreamProcessor
 */

/*!
 * @brief  Constructs a new CreateStreamProcessorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamProcessorRequest::CreateStreamProcessorRequest(const CreateStreamProcessorRequest &other)
    : RekognitionRequest(new CreateStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateStreamProcessorRequest object.
 */
CreateStreamProcessorRequest::CreateStreamProcessorRequest()
    : RekognitionRequest(new CreateStreamProcessorRequestPrivate(RekognitionRequest::CreateStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateStreamProcessorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamProcessorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamProcessorResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateStreamProcessorRequestPrivate
 *
 * @brief  Private implementation for CreateStreamProcessorRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamProcessorRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public CreateStreamProcessorRequest instance.
 */
CreateStreamProcessorRequestPrivate::CreateStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, CreateStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamProcessorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamProcessorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamProcessorRequest instance.
 */
CreateStreamProcessorRequestPrivate::CreateStreamProcessorRequestPrivate(
    const CreateStreamProcessorRequestPrivate &other, CreateStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
