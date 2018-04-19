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
 * \brief The IndexFacesRequest class provides an interface for Rekognition IndexFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::indexFaces
 */

/*!
 * Constructs a copy of \a other.
 */
IndexFacesRequest::IndexFacesRequest(const IndexFacesRequest &other)
    : RekognitionRequest(new IndexFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IndexFacesRequest object.
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
 * Returns a IndexFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IndexFacesRequest::response(QNetworkReply * const reply) const
{
    return new IndexFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::IndexFacesRequestPrivate
 * \brief The IndexFacesRequestPrivate class provides private implementation for IndexFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a IndexFacesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
IndexFacesRequestPrivate::IndexFacesRequestPrivate(
    const RekognitionRequest::Action action, IndexFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IndexFacesRequest
 * class' copy constructor.
 */
IndexFacesRequestPrivate::IndexFacesRequestPrivate(
    const IndexFacesRequestPrivate &other, IndexFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
