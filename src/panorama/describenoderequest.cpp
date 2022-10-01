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
