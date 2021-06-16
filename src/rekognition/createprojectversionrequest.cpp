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

#include "createprojectversionrequest.h"
#include "createprojectversionrequest_p.h"
#include "createprojectversionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateProjectVersionRequest
 * \brief The CreateProjectVersionRequest class provides an interface for Rekognition CreateProjectVersion requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createProjectVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProjectVersionRequest::CreateProjectVersionRequest(const CreateProjectVersionRequest &other)
    : RekognitionRequest(new CreateProjectVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProjectVersionRequest object.
 */
CreateProjectVersionRequest::CreateProjectVersionRequest()
    : RekognitionRequest(new CreateProjectVersionRequestPrivate(RekognitionRequest::CreateProjectVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProjectVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProjectVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProjectVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateProjectVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::CreateProjectVersionRequestPrivate
 * \brief The CreateProjectVersionRequestPrivate class provides private implementation for CreateProjectVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateProjectVersionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
CreateProjectVersionRequestPrivate::CreateProjectVersionRequestPrivate(
    const RekognitionRequest::Action action, CreateProjectVersionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProjectVersionRequest
 * class' copy constructor.
 */
CreateProjectVersionRequestPrivate::CreateProjectVersionRequestPrivate(
    const CreateProjectVersionRequestPrivate &other, CreateProjectVersionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
