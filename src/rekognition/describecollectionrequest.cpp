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

#include "describecollectionrequest.h"
#include "describecollectionrequest_p.h"
#include "describecollectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeCollectionRequest
 * \brief The DescribeCollectionRequest class provides an interface for Rekognition DescribeCollection requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCollectionRequest::DescribeCollectionRequest(const DescribeCollectionRequest &other)
    : RekognitionRequest(new DescribeCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCollectionRequest object.
 */
DescribeCollectionRequest::DescribeCollectionRequest()
    : RekognitionRequest(new DescribeCollectionRequestPrivate(RekognitionRequest::DescribeCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DescribeCollectionRequestPrivate
 * \brief The DescribeCollectionRequestPrivate class provides private implementation for DescribeCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeCollectionRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DescribeCollectionRequestPrivate::DescribeCollectionRequestPrivate(
    const RekognitionRequest::Action action, DescribeCollectionRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCollectionRequest
 * class' copy constructor.
 */
DescribeCollectionRequestPrivate::DescribeCollectionRequestPrivate(
    const DescribeCollectionRequestPrivate &other, DescribeCollectionRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
