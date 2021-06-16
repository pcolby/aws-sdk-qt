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

#include "deleteprojectversionrequest.h"
#include "deleteprojectversionrequest_p.h"
#include "deleteprojectversionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteProjectVersionRequest
 * \brief The DeleteProjectVersionRequest class provides an interface for Rekognition DeleteProjectVersion requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteProjectVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProjectVersionRequest::DeleteProjectVersionRequest(const DeleteProjectVersionRequest &other)
    : RekognitionRequest(new DeleteProjectVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProjectVersionRequest object.
 */
DeleteProjectVersionRequest::DeleteProjectVersionRequest()
    : RekognitionRequest(new DeleteProjectVersionRequestPrivate(RekognitionRequest::DeleteProjectVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProjectVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DeleteProjectVersionRequestPrivate
 * \brief The DeleteProjectVersionRequestPrivate class provides private implementation for DeleteProjectVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteProjectVersionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DeleteProjectVersionRequestPrivate::DeleteProjectVersionRequestPrivate(
    const RekognitionRequest::Action action, DeleteProjectVersionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectVersionRequest
 * class' copy constructor.
 */
DeleteProjectVersionRequestPrivate::DeleteProjectVersionRequestPrivate(
    const DeleteProjectVersionRequestPrivate &other, DeleteProjectVersionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
