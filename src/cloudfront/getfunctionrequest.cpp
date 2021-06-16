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
