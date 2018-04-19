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

#include "deletecollectionrequest.h"
#include "deletecollectionrequest_p.h"
#include "deletecollectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteCollectionRequest
 * \brief The DeleteCollectionRequest class provides an interface for Rekognition DeleteCollection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCollectionRequest::DeleteCollectionRequest(const DeleteCollectionRequest &other)
    : RekognitionRequest(new DeleteCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCollectionRequest object.
 */
DeleteCollectionRequest::DeleteCollectionRequest()
    : RekognitionRequest(new DeleteCollectionRequestPrivate(RekognitionRequest::DeleteCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DeleteCollectionRequestPrivate
 * \brief The DeleteCollectionRequestPrivate class provides private implementation for DeleteCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteCollectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DeleteCollectionRequestPrivate::DeleteCollectionRequestPrivate(
    const RekognitionRequest::Action action, DeleteCollectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCollectionRequest
 * class' copy constructor.
 */
DeleteCollectionRequestPrivate::DeleteCollectionRequestPrivate(
    const DeleteCollectionRequestPrivate &other, DeleteCollectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
