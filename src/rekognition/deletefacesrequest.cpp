/*
    Copyright 2013-2019 Paul Colby

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

#include "deletefacesrequest.h"
#include "deletefacesrequest_p.h"
#include "deletefacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteFacesRequest
 * \brief The DeleteFacesRequest class provides an interface for Rekognition DeleteFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteFaces
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFacesRequest::DeleteFacesRequest(const DeleteFacesRequest &other)
    : RekognitionRequest(new DeleteFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFacesRequest object.
 */
DeleteFacesRequest::DeleteFacesRequest()
    : RekognitionRequest(new DeleteFacesRequestPrivate(RekognitionRequest::DeleteFacesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFacesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DeleteFacesRequestPrivate
 * \brief The DeleteFacesRequestPrivate class provides private implementation for DeleteFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteFacesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DeleteFacesRequestPrivate::DeleteFacesRequestPrivate(
    const RekognitionRequest::Action action, DeleteFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFacesRequest
 * class' copy constructor.
 */
DeleteFacesRequestPrivate::DeleteFacesRequestPrivate(
    const DeleteFacesRequestPrivate &other, DeleteFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
