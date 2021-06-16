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

#include "describeprojectversionsrequest.h"
#include "describeprojectversionsrequest_p.h"
#include "describeprojectversionsresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeProjectVersionsRequest
 * \brief The DescribeProjectVersionsRequest class provides an interface for Rekognition DescribeProjectVersions requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeProjectVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProjectVersionsRequest::DescribeProjectVersionsRequest(const DescribeProjectVersionsRequest &other)
    : RekognitionRequest(new DescribeProjectVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProjectVersionsRequest object.
 */
DescribeProjectVersionsRequest::DescribeProjectVersionsRequest()
    : RekognitionRequest(new DescribeProjectVersionsRequestPrivate(RekognitionRequest::DescribeProjectVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProjectVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProjectVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProjectVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProjectVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::DescribeProjectVersionsRequestPrivate
 * \brief The DescribeProjectVersionsRequestPrivate class provides private implementation for DescribeProjectVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeProjectVersionsRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
DescribeProjectVersionsRequestPrivate::DescribeProjectVersionsRequestPrivate(
    const RekognitionRequest::Action action, DescribeProjectVersionsRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProjectVersionsRequest
 * class' copy constructor.
 */
DescribeProjectVersionsRequestPrivate::DescribeProjectVersionsRequestPrivate(
    const DescribeProjectVersionsRequestPrivate &other, DescribeProjectVersionsRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
