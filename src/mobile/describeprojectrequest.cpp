// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectrequest.h"
#include "describeprojectrequest_p.h"
#include "describeprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeProjectRequest
 * \brief The DescribeProjectRequest class provides an interface for Mobile DescribeProject requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeProject
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProjectRequest::DescribeProjectRequest(const DescribeProjectRequest &other)
    : MobileRequest(new DescribeProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProjectRequest object.
 */
DescribeProjectRequest::DescribeProjectRequest()
    : MobileRequest(new DescribeProjectRequestPrivate(MobileRequest::DescribeProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProjectResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::DescribeProjectRequestPrivate
 * \brief The DescribeProjectRequestPrivate class provides private implementation for DescribeProjectRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DescribeProjectRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const MobileRequest::Action action, DescribeProjectRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProjectRequest
 * class' copy constructor.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const DescribeProjectRequestPrivate &other, DescribeProjectRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
