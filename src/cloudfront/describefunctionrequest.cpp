// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
