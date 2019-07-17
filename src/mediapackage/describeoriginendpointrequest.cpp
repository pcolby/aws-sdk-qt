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

#include "describeoriginendpointrequest.h"
#include "describeoriginendpointrequest_p.h"
#include "describeoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointRequest
 * \brief The DescribeOriginEndpointRequest class provides an interface for MediaPackage DescribeOriginEndpoint requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeOriginEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOriginEndpointRequest::DescribeOriginEndpointRequest(const DescribeOriginEndpointRequest &other)
    : MediaPackageRequest(new DescribeOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOriginEndpointRequest object.
 */
DescribeOriginEndpointRequest::DescribeOriginEndpointRequest()
    : MediaPackageRequest(new DescribeOriginEndpointRequestPrivate(MediaPackageRequest::DescribeOriginEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOriginEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOriginEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOriginEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointRequestPrivate
 * \brief The DescribeOriginEndpointRequestPrivate class provides private implementation for DescribeOriginEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeOriginEndpointRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
DescribeOriginEndpointRequestPrivate::DescribeOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, DescribeOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOriginEndpointRequest
 * class' copy constructor.
 */
DescribeOriginEndpointRequestPrivate::DescribeOriginEndpointRequestPrivate(
    const DescribeOriginEndpointRequestPrivate &other, DescribeOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
