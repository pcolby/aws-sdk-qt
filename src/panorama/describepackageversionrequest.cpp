// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackageversionrequest.h"
#include "describepackageversionrequest_p.h"
#include "describepackageversionresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribePackageVersionRequest
 * \brief The DescribePackageVersionRequest class provides an interface for Panorama DescribePackageVersion requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::describePackageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackageVersionRequest::DescribePackageVersionRequest(const DescribePackageVersionRequest &other)
    : PanoramaRequest(new DescribePackageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackageVersionRequest object.
 */
DescribePackageVersionRequest::DescribePackageVersionRequest()
    : PanoramaRequest(new DescribePackageVersionRequestPrivate(PanoramaRequest::DescribePackageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribePackageVersionRequestPrivate
 * \brief The DescribePackageVersionRequestPrivate class provides private implementation for DescribePackageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribePackageVersionRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribePackageVersionRequestPrivate::DescribePackageVersionRequestPrivate(
    const PanoramaRequest::Action action, DescribePackageVersionRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackageVersionRequest
 * class' copy constructor.
 */
DescribePackageVersionRequestPrivate::DescribePackageVersionRequestPrivate(
    const DescribePackageVersionRequestPrivate &other, DescribePackageVersionRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
