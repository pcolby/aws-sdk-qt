/*
    Copyright 2013-2018 Paul Colby

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

#include "comparefacesrequest.h"
#include "comparefacesrequest_p.h"
#include "comparefacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CompareFacesRequest
 * \brief The CompareFacesRequest class provides an interface for Rekognition CompareFaces requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::compareFaces
 */

/*!
 * Constructs a copy of \a other.
 */
CompareFacesRequest::CompareFacesRequest(const CompareFacesRequest &other)
    : RekognitionRequest(new CompareFacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompareFacesRequest object.
 */
CompareFacesRequest::CompareFacesRequest()
    : RekognitionRequest(new CompareFacesRequestPrivate(RekognitionRequest::CompareFacesAction, this))
{

}

/*!
 * \reimp
 */
bool CompareFacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompareFacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompareFacesRequest::response(QNetworkReply * const reply) const
{
    return new CompareFacesResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::CompareFacesRequestPrivate
 * \brief The CompareFacesRequestPrivate class provides private implementation for CompareFacesRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CompareFacesRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
CompareFacesRequestPrivate::CompareFacesRequestPrivate(
    const RekognitionRequest::Action action, CompareFacesRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompareFacesRequest
 * class' copy constructor.
 */
CompareFacesRequestPrivate::CompareFacesRequestPrivate(
    const CompareFacesRequestPrivate &other, CompareFacesRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
