// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationinstancerequest.h"
#include "describeapplicationinstancerequest_p.h"
#include "describeapplicationinstanceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceRequest
 * \brief The DescribeApplicationInstanceRequest class provides an interface for Panorama DescribeApplicationInstance requests.
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
 * \sa PanoramaClient::describeApplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationInstanceRequest::DescribeApplicationInstanceRequest(const DescribeApplicationInstanceRequest &other)
    : PanoramaRequest(new DescribeApplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationInstanceRequest object.
 */
DescribeApplicationInstanceRequest::DescribeApplicationInstanceRequest()
    : PanoramaRequest(new DescribeApplicationInstanceRequestPrivate(PanoramaRequest::DescribeApplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeApplicationInstanceRequestPrivate
 * \brief The DescribeApplicationInstanceRequestPrivate class provides private implementation for DescribeApplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeApplicationInstanceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeApplicationInstanceRequestPrivate::DescribeApplicationInstanceRequestPrivate(
    const PanoramaRequest::Action action, DescribeApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationInstanceRequest
 * class' copy constructor.
 */
DescribeApplicationInstanceRequestPrivate::DescribeApplicationInstanceRequestPrivate(
    const DescribeApplicationInstanceRequestPrivate &other, DescribeApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
