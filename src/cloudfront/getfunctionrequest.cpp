// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctionrequest.h"
#include "getfunctionrequest_p.h"
#include "getfunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFunctionRequest
 * \brief The GetFunctionRequest class provides an interface for CloudFront GetFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFunction
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionRequest::GetFunctionRequest(const GetFunctionRequest &other)
    : CloudFrontRequest(new GetFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionRequest object.
 */
GetFunctionRequest::GetFunctionRequest()
    : CloudFrontRequest(new GetFunctionRequestPrivate(CloudFrontRequest::GetFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFunctionRequestPrivate
 * \brief The GetFunctionRequestPrivate class provides private implementation for GetFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const CloudFrontRequest::Action action, GetFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionRequest
 * class' copy constructor.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const GetFunctionRequestPrivate &other, GetFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
