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

#include "stopprojectversionrequest.h"
#include "stopprojectversionrequest_p.h"
#include "stopprojectversionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StopProjectVersionRequest
 * \brief The StopProjectVersionRequest class provides an interface for Rekognition StopProjectVersion requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::stopProjectVersion
 */

/*!
 * Constructs a copy of \a other.
 */
StopProjectVersionRequest::StopProjectVersionRequest(const StopProjectVersionRequest &other)
    : RekognitionRequest(new StopProjectVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopProjectVersionRequest object.
 */
StopProjectVersionRequest::StopProjectVersionRequest()
    : RekognitionRequest(new StopProjectVersionRequestPrivate(RekognitionRequest::StopProjectVersionAction, this))
{

}

/*!
 * \reimp
 */
bool StopProjectVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopProjectVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopProjectVersionRequest::response(QNetworkReply * const reply) const
{
    return new StopProjectVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::StopProjectVersionRequestPrivate
 * \brief The StopProjectVersionRequestPrivate class provides private implementation for StopProjectVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StopProjectVersionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
StopProjectVersionRequestPrivate::StopProjectVersionRequestPrivate(
    const RekognitionRequest::Action action, StopProjectVersionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopProjectVersionRequest
 * class' copy constructor.
 */
StopProjectVersionRequestPrivate::StopProjectVersionRequestPrivate(
    const StopProjectVersionRequestPrivate &other, StopProjectVersionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
