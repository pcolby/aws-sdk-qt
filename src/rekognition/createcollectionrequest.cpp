/*
    Copyright 2013-2020 Paul Colby

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

#include "createcollectionrequest.h"
#include "createcollectionrequest_p.h"
#include "createcollectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateCollectionRequest
 * \brief The CreateCollectionRequest class provides an interface for Rekognition CreateCollection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createCollection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCollectionRequest::CreateCollectionRequest(const CreateCollectionRequest &other)
    : RekognitionRequest(new CreateCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCollectionRequest object.
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
 * Returns a CreateCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCollectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::CreateCollectionRequestPrivate
 * \brief The CreateCollectionRequestPrivate class provides private implementation for CreateCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateCollectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
CreateCollectionRequestPrivate::CreateCollectionRequestPrivate(
    const RekognitionRequest::Action action, CreateCollectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCollectionRequest
 * class' copy constructor.
 */
CreateCollectionRequestPrivate::CreateCollectionRequestPrivate(
    const CreateCollectionRequestPrivate &other, CreateCollectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
