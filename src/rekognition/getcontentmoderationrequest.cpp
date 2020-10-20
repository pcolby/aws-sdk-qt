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

#include "getcontentmoderationrequest.h"
#include "getcontentmoderationrequest_p.h"
#include "getcontentmoderationresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetContentModerationRequest
 * \brief The GetContentModerationRequest class provides an interface for Rekognition GetContentModeration requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getContentModeration
 */

/*!
 * Constructs a copy of \a other.
 */
GetContentModerationRequest::GetContentModerationRequest(const GetContentModerationRequest &other)
    : RekognitionRequest(new GetContentModerationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContentModerationRequest object.
 */
GetContentModerationRequest::GetContentModerationRequest()
    : RekognitionRequest(new GetContentModerationRequestPrivate(RekognitionRequest::GetContentModerationAction, this))
{

}

/*!
 * \reimp
 */
bool GetContentModerationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContentModerationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContentModerationRequest::response(QNetworkReply * const reply) const
{
    return new GetContentModerationResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::GetContentModerationRequestPrivate
 * \brief The GetContentModerationRequestPrivate class provides private implementation for GetContentModerationRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetContentModerationRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
GetContentModerationRequestPrivate::GetContentModerationRequestPrivate(
    const RekognitionRequest::Action action, GetContentModerationRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContentModerationRequest
 * class' copy constructor.
 */
GetContentModerationRequestPrivate::GetContentModerationRequestPrivate(
    const GetContentModerationRequestPrivate &other, GetContentModerationRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
