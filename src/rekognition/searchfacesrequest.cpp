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

#include "searchfacesrequest.h"
#include "searchfacesrequest_p.h"
#include "searchfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::SearchFacesRequest
 * \brief The SearchFacesRequest class provides an interface for Rekognition SearchFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::searchFaces
 */

/*!
 * Constructs a copy of \a other.
 */
SearchFacesRequest::SearchFacesRequest(const SearchFacesRequest &other)
    : RekognitionRequest(new SearchFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchFacesRequest object.
 */
SearchFacesRequest::SearchFacesRequest()
    : RekognitionRequest(new SearchFacesRequestPrivate(RekognitionRequest::SearchFacesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchFacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchFacesRequest::response(QNetworkReply * const reply) const
{
    return new SearchFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::SearchFacesRequestPrivate
 * \brief The SearchFacesRequestPrivate class provides private implementation for SearchFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a SearchFacesRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
SearchFacesRequestPrivate::SearchFacesRequestPrivate(
    const RekognitionRequest::Action action, SearchFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchFacesRequest
 * class' copy constructor.
 */
SearchFacesRequestPrivate::SearchFacesRequestPrivate(
    const SearchFacesRequestPrivate &other, SearchFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
