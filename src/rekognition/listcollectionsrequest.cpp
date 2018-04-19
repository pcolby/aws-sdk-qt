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

#include "listcollectionsrequest.h"
#include "listcollectionsrequest_p.h"
#include "listcollectionsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListCollectionsRequest
 * \brief The ListCollectionsRequest class provides an interface for Rekognition ListCollections requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listCollections
 */

/*!
 * Constructs a copy of \a other.
 */
ListCollectionsRequest::ListCollectionsRequest(const ListCollectionsRequest &other)
    : RekognitionRequest(new ListCollectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCollectionsRequest object.
 */
ListCollectionsRequest::ListCollectionsRequest()
    : RekognitionRequest(new ListCollectionsRequestPrivate(RekognitionRequest::ListCollectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCollectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCollectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCollectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::ListCollectionsRequestPrivate
 * \brief The ListCollectionsRequestPrivate class provides private implementation for ListCollectionsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a ListCollectionsRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
ListCollectionsRequestPrivate::ListCollectionsRequestPrivate(
    const RekognitionRequest::Action action, ListCollectionsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCollectionsRequest
 * class' copy constructor.
 */
ListCollectionsRequestPrivate::ListCollectionsRequestPrivate(
    const ListCollectionsRequestPrivate &other, ListCollectionsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
