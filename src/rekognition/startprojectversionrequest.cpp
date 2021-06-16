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

#include "startprojectversionrequest.h"
#include "startprojectversionrequest_p.h"
#include "startprojectversionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartProjectVersionRequest
 * \brief The StartProjectVersionRequest class provides an interface for Rekognition StartProjectVersion requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startProjectVersion
 */

/*!
 * Constructs a copy of \a other.
 */
StartProjectVersionRequest::StartProjectVersionRequest(const StartProjectVersionRequest &other)
    : RekognitionRequest(new StartProjectVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartProjectVersionRequest object.
 */
StartProjectVersionRequest::StartProjectVersionRequest()
    : RekognitionRequest(new StartProjectVersionRequestPrivate(RekognitionRequest::StartProjectVersionAction, this))
{

}

/*!
 * \reimp
 */
bool StartProjectVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartProjectVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartProjectVersionRequest::response(QNetworkReply * const reply) const
{
    return new StartProjectVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StartProjectVersionRequestPrivate
 * \brief The StartProjectVersionRequestPrivate class provides private implementation for StartProjectVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartProjectVersionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StartProjectVersionRequestPrivate::StartProjectVersionRequestPrivate(
    const RekognitionRequest::Action action, StartProjectVersionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartProjectVersionRequest
 * class' copy constructor.
 */
StartProjectVersionRequestPrivate::StartProjectVersionRequestPrivate(
    const StartProjectVersionRequestPrivate &other, StartProjectVersionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
