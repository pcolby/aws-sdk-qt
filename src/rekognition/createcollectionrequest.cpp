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

#include "createcollectionrequest.h"
#include "createcollectionrequest_p.h"
#include "createcollectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateCollectionRequest
 *
 * \brief The CreateCollectionRequest class encapsulates Rekognition CreateCollection requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createCollection
 */

/*!
 * @brief  Constructs a new CreateCollectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCollectionRequest::CreateCollectionRequest(const CreateCollectionRequest &other)
    : RekognitionRequest(new CreateCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateCollectionRequest object.
 */
CreateCollectionRequest::CreateCollectionRequest()
    : RekognitionRequest(new CreateCollectionRequestPrivate(RekognitionRequest::CreateCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCollectionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateCollectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCollectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCollectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCollectionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateCollectionRequestPrivate
 *
 * @brief  Private implementation for CreateCollectionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCollectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public CreateCollectionRequest instance.
 */
CreateCollectionRequestPrivate::CreateCollectionRequestPrivate(
    const RekognitionRequest::Action action, CreateCollectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCollectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCollectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCollectionRequest instance.
 */
CreateCollectionRequestPrivate::CreateCollectionRequestPrivate(
    const CreateCollectionRequestPrivate &other, CreateCollectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
