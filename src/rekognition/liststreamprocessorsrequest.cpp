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

#include "liststreamprocessorsrequest.h"
#include "liststreamprocessorsrequest_p.h"
#include "liststreamprocessorsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListStreamProcessorsRequest
 * \brief The ListStreamProcessorsRequest class provides an interface for Rekognition ListStreamProcessors requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listStreamProcessors
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamProcessorsRequest::ListStreamProcessorsRequest(const ListStreamProcessorsRequest &other)
    : RekognitionRequest(new ListStreamProcessorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamProcessorsRequest object.
 */
ListStreamProcessorsRequest::ListStreamProcessorsRequest()
    : RekognitionRequest(new ListStreamProcessorsRequestPrivate(RekognitionRequest::ListStreamProcessorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamProcessorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamProcessorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamProcessorsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamProcessorsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::ListStreamProcessorsRequestPrivate
 * \brief The ListStreamProcessorsRequestPrivate class provides private implementation for ListStreamProcessorsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 *
 * Constructs a ListStreamProcessorsRequestPrivate object for Rekognition \a action with,
 * public implementation \a q.
 */
ListStreamProcessorsRequestPrivate::ListStreamProcessorsRequestPrivate(
    const RekognitionRequest::Action action, ListStreamProcessorsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamProcessorsRequest
 * class' copy constructor.
 */
ListStreamProcessorsRequestPrivate::ListStreamProcessorsRequestPrivate(
    const ListStreamProcessorsRequestPrivate &other, ListStreamProcessorsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
