// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
