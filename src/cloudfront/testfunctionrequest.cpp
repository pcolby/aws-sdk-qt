// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
