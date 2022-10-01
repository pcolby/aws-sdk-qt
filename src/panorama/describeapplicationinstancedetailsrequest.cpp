// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationinstancedetailsrequest.h"
#include "describeapplicationinstancedetailsrequest_p.h"
#include "describeapplicationinstancedetailsresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceDetailsRequest
 * \brief The DescribeApplicationInstanceDetailsRequest class provides an interface for Panorama DescribeApplicationInstanceDetails requests.
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
 * \sa PanoramaClient::describeApplicationInstanceDetails
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationInstanceDetailsRequest::DescribeApplicationInstanceDetailsRequest(const DescribeApplicationInstanceDetailsRequest &other)
    : PanoramaRequest(new DescribeApplicationInstanceDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationInstanceDetailsRequest object.
 */
DescribeApplicationInstanceDetailsRequest::DescribeApplicationInstanceDetailsRequest()
    : PanoramaRequest(new DescribeApplicationInstanceDetailsRequestPrivate(PanoramaRequest::DescribeApplicationInstanceDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationInstanceDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationInstanceDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationInstanceDetailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationInstanceDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceDetailsRequestPrivate
 * \brief The DescribeApplicationInstanceDetailsRequestPrivate class provides private implementation for DescribeApplicationInstanceDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeApplicationInstanceDetailsRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeApplicationInstanceDetailsRequestPrivate::DescribeApplicationInstanceDetailsRequestPrivate(
    const PanoramaRequest::Action action, DescribeApplicationInstanceDetailsRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationInstanceDetailsRequest
 * class' copy constructor.
 */
DescribeApplicationInstanceDetailsRequestPrivate::DescribeApplicationInstanceDetailsRequestPrivate(
    const DescribeApplicationInstanceDetailsRequestPrivate &other, DescribeApplicationInstanceDetailsRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
