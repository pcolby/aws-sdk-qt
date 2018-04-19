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

#include "listfacesrequest.h"
#include "listfacesrequest_p.h"
#include "listfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListFacesRequest
 * \brief The ListFacesRequest class provides an interface for Rekognition ListFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listFaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListFacesRequest::ListFacesRequest(const ListFacesRequest &other)
    : RekognitionRequest(new ListFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFacesRequest object.
 */
ListFacesRequest::ListFacesRequest()
    : RekognitionRequest(new ListFacesRequestPrivate(RekognitionRequest::ListFacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFacesRequest::response(QNetworkReply * const reply) const
{
    return new ListFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::ListFacesRequestPrivate
 * \brief The ListFacesRequestPrivate class provides private implementation for ListFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a ListFacesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
ListFacesRequestPrivate::ListFacesRequestPrivate(
    const RekognitionRequest::Action action, ListFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFacesRequest
 * class' copy constructor.
 */
ListFacesRequestPrivate::ListFacesRequestPrivate(
    const ListFacesRequestPrivate &other, ListFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
