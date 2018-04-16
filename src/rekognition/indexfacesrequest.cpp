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

#include "indexfacesrequest.h"
#include "indexfacesrequest_p.h"
#include "indexfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::IndexFacesRequest
 *
 * \brief The IndexFacesRequest class provides an interface for Rekognition IndexFaces requests.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::indexFaces
 */

/*!
 * @brief  Constructs a new IndexFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
IndexFacesRequest::IndexFacesRequest(const IndexFacesRequest &other)
    : RekognitionRequest(new IndexFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new IndexFacesRequest object.
 */
IndexFacesRequest::IndexFacesRequest()
    : RekognitionRequest(new IndexFacesRequestPrivate(RekognitionRequest::IndexFacesAction, this))
{

}

/*!
 * \reimp
 */
bool IndexFacesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an IndexFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An IndexFacesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * IndexFacesRequest::response(QNetworkReply * const reply) const
{
    return new IndexFacesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  IndexFacesRequestPrivate
 *
 * @brief  Private implementation for IndexFacesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new IndexFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public IndexFacesRequest instance.
 */
IndexFacesRequestPrivate::IndexFacesRequestPrivate(
    const RekognitionRequest::Action action, IndexFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new IndexFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the IndexFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public IndexFacesRequest instance.
 */
IndexFacesRequestPrivate::IndexFacesRequestPrivate(
    const IndexFacesRequestPrivate &other, IndexFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
