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

#include "getoriginaccesscontrolrequest.h"
#include "getoriginaccesscontrolrequest_p.h"
#include "getoriginaccesscontrolresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlRequest
 * \brief The GetOriginAccessControlRequest class provides an interface for CloudFront GetOriginAccessControl requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControl
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginAccessControlRequest::GetOriginAccessControlRequest(const GetOriginAccessControlRequest &other)
    : CloudFrontRequest(new GetOriginAccessControlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginAccessControlRequest object.
 */
GetOriginAccessControlRequest::GetOriginAccessControlRequest()
    : CloudFrontRequest(new GetOriginAccessControlRequestPrivate(CloudFrontRequest::GetOriginAccessControlAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginAccessControlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginAccessControlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginAccessControlRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginAccessControlResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlRequestPrivate
 * \brief The GetOriginAccessControlRequestPrivate class provides private implementation for GetOriginAccessControlRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginAccessControlRequestPrivate::GetOriginAccessControlRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginAccessControlRequest
 * class' copy constructor.
 */
GetOriginAccessControlRequestPrivate::GetOriginAccessControlRequestPrivate(
    const GetOriginAccessControlRequestPrivate &other, GetOriginAccessControlRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
