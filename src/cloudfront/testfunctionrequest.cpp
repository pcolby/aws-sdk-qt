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

#include "testfunctionrequest.h"
#include "testfunctionrequest_p.h"
#include "testfunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::TestFunctionRequest
 * \brief The TestFunctionRequest class provides an interface for CloudFront TestFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::testFunction
 */

/*!
 * Constructs a copy of \a other.
 */
TestFunctionRequest::TestFunctionRequest(const TestFunctionRequest &other)
    : CloudFrontRequest(new TestFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestFunctionRequest object.
 */
TestFunctionRequest::TestFunctionRequest()
    : CloudFrontRequest(new TestFunctionRequestPrivate(CloudFrontRequest::TestFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool TestFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestFunctionRequest::response(QNetworkReply * const reply) const
{
    return new TestFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::TestFunctionRequestPrivate
 * \brief The TestFunctionRequestPrivate class provides private implementation for TestFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a TestFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
TestFunctionRequestPrivate::TestFunctionRequestPrivate(
    const CloudFrontRequest::Action action, TestFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestFunctionRequest
 * class' copy constructor.
 */
TestFunctionRequestPrivate::TestFunctionRequestPrivate(
    const TestFunctionRequestPrivate &other, TestFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
