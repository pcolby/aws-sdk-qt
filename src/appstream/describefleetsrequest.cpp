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

#include "describefleetsrequest.h"
#include "describefleetsrequest_p.h"
#include "describefleetsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeFleetsRequest
 * \brief The DescribeFleetsRequest class provides an interface for AppStream DescribeFleets requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeFleets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetsRequest::DescribeFleetsRequest(const DescribeFleetsRequest &other)
    : AppStreamRequest(new DescribeFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetsRequest object.
 */
DescribeFleetsRequest::DescribeFleetsRequest()
    : AppStreamRequest(new DescribeFleetsRequestPrivate(AppStreamRequest::DescribeFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DescribeFleetsRequestPrivate
 * \brief The DescribeFleetsRequestPrivate class provides private implementation for DescribeFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 *
 * Constructs a DescribeFleetsRequestPrivate object for AppStream \a action with,
 * public implementation \a q.
 */
DescribeFleetsRequestPrivate::DescribeFleetsRequestPrivate(
    const AppStreamRequest::Action action, DescribeFleetsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetsRequest
 * class' copy constructor.
 */
DescribeFleetsRequestPrivate::DescribeFleetsRequestPrivate(
    const DescribeFleetsRequestPrivate &other, DescribeFleetsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
