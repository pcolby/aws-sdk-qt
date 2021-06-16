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

#include "describefunctionrequest.h"
#include "describefunctionrequest_p.h"
#include "describefunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DescribeFunctionRequest
 * \brief The DescribeFunctionRequest class provides an interface for CloudFront DescribeFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::describeFunction
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFunctionRequest::DescribeFunctionRequest(const DescribeFunctionRequest &other)
    : CloudFrontRequest(new DescribeFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFunctionRequest object.
 */
DescribeFunctionRequest::DescribeFunctionRequest()
    : CloudFrontRequest(new DescribeFunctionRequestPrivate(CloudFrontRequest::DescribeFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DescribeFunctionRequestPrivate
 * \brief The DescribeFunctionRequestPrivate class provides private implementation for DescribeFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DescribeFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DescribeFunctionRequestPrivate::DescribeFunctionRequestPrivate(
    const CloudFrontRequest::Action action, DescribeFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFunctionRequest
 * class' copy constructor.
 */
DescribeFunctionRequestPrivate::DescribeFunctionRequestPrivate(
    const DescribeFunctionRequestPrivate &other, DescribeFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
