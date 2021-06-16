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

#include "describebundlerequest.h"
#include "describebundlerequest_p.h"
#include "describebundleresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeBundleRequest
 * \brief The DescribeBundleRequest class provides an interface for Mobile DescribeBundle requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeBundle
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBundleRequest::DescribeBundleRequest(const DescribeBundleRequest &other)
    : MobileRequest(new DescribeBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBundleRequest object.
 */
DescribeBundleRequest::DescribeBundleRequest()
    : MobileRequest(new DescribeBundleRequestPrivate(MobileRequest::DescribeBundleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBundleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBundleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBundleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBundleResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::DescribeBundleRequestPrivate
 * \brief The DescribeBundleRequestPrivate class provides private implementation for DescribeBundleRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DescribeBundleRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const MobileRequest::Action action, DescribeBundleRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBundleRequest
 * class' copy constructor.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const DescribeBundleRequestPrivate &other, DescribeBundleRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
