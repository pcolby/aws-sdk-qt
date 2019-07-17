/*
    Copyright 2013-2019 Paul Colby

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

#include "deletestreamprocessorrequest.h"
#include "deletestreamprocessorrequest_p.h"
#include "deletestreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteStreamProcessorRequest
 * \brief The DeleteStreamProcessorRequest class provides an interface for Rekognition DeleteStreamProcessor requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteStreamProcessor
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamProcessorRequest::DeleteStreamProcessorRequest(const DeleteStreamProcessorRequest &other)
    : RekognitionRequest(new DeleteStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamProcessorRequest object.
 */
DeleteStreamProcessorRequest::DeleteStreamProcessorRequest()
    : RekognitionRequest(new DeleteStreamProcessorRequestPrivate(RekognitionRequest::DeleteStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamProcessorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamProcessorResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DeleteStreamProcessorRequestPrivate
 * \brief The DeleteStreamProcessorRequestPrivate class provides private implementation for DeleteStreamProcessorRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteStreamProcessorRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DeleteStreamProcessorRequestPrivate::DeleteStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, DeleteStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamProcessorRequest
 * class' copy constructor.
 */
DeleteStreamProcessorRequestPrivate::DeleteStreamProcessorRequestPrivate(
    const DeleteStreamProcessorRequestPrivate &other, DeleteStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
