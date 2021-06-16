/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchfacesbyimagerequest.h"
#include "searchfacesbyimagerequest_p.h"
#include "searchfacesbyimageresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::SearchFacesByImageRequest
 * \brief The SearchFacesByImageRequest class provides an interface for Rekognition SearchFacesByImage requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::searchFacesByImage
 */

/*!
 * Constructs a copy of \a other.
 */
SearchFacesByImageRequest::SearchFacesByImageRequest(const SearchFacesByImageRequest &other)
    : RekognitionRequest(new SearchFacesByImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchFacesByImageRequest object.
 */
SearchFacesByImageRequest::SearchFacesByImageRequest()
    : RekognitionRequest(new SearchFacesByImageRequestPrivate(RekognitionRequest::SearchFacesByImageAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFacesByImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchFacesByImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFacesByImageRequest::response(QNetworkReply * const reply) const
{
    return new SearchFacesByImageResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::SearchFacesByImageRequestPrivate
 * \brief The SearchFacesByImageRequestPrivate class provides private implementation for SearchFacesByImageRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a SearchFacesByImageRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
SearchFacesByImageRequestPrivate::SearchFacesByImageRequestPrivate(
    const RekognitionRequest::Action action, SearchFacesByImageRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchFacesByImageRequest
 * class' copy constructor.
 */
SearchFacesByImageRequestPrivate::SearchFacesByImageRequestPrivate(
    const SearchFacesByImageRequestPrivate &other, SearchFacesByImageRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
