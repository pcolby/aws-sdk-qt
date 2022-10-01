// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenoderequest.h"
#include "describenoderequest_p.h"
#include "describenoderesponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeNodeRequest
 * \brief The DescribeNodeRequest class provides an interface for Panorama DescribeNode requests.
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
 * \sa PanoramaClient::describeNode
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNodeRequest::DescribeNodeRequest(const DescribeNodeRequest &other)
    : PanoramaRequest(new DescribeNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNodeRequest object.
 */
DescribeNodeRequest::DescribeNodeRequest()
    : PanoramaRequest(new DescribeNodeRequestPrivate(PanoramaRequest::DescribeNodeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNodeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNodeResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DescribeNodeRequestPrivate
 * \brief The DescribeNodeRequestPrivate class provides private implementation for DescribeNodeRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeNodeRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DescribeNodeRequestPrivate::DescribeNodeRequestPrivate(
    const PanoramaRequest::Action action, DescribeNodeRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNodeRequest
 * class' copy constructor.
 */
DescribeNodeRequestPrivate::DescribeNodeRequestPrivate(
    const DescribeNodeRequestPrivate &other, DescribeNodeRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
