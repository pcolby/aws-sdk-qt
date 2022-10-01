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

#include "getoriginaccesscontrolconfigrequest.h"
#include "getoriginaccesscontrolconfigrequest_p.h"
#include "getoriginaccesscontrolconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigRequest
 * \brief The GetOriginAccessControlConfigRequest class provides an interface for CloudFront GetOriginAccessControlConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getOriginAccessControlConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetOriginAccessControlConfigRequest::GetOriginAccessControlConfigRequest(const GetOriginAccessControlConfigRequest &other)
    : CloudFrontRequest(new GetOriginAccessControlConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOriginAccessControlConfigRequest object.
 */
GetOriginAccessControlConfigRequest::GetOriginAccessControlConfigRequest()
    : CloudFrontRequest(new GetOriginAccessControlConfigRequestPrivate(CloudFrontRequest::GetOriginAccessControlConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetOriginAccessControlConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOriginAccessControlConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOriginAccessControlConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetOriginAccessControlConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetOriginAccessControlConfigRequestPrivate
 * \brief The GetOriginAccessControlConfigRequestPrivate class provides private implementation for GetOriginAccessControlConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetOriginAccessControlConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetOriginAccessControlConfigRequestPrivate::GetOriginAccessControlConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetOriginAccessControlConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOriginAccessControlConfigRequest
 * class' copy constructor.
 */
GetOriginAccessControlConfigRequestPrivate::GetOriginAccessControlConfigRequestPrivate(
    const GetOriginAccessControlConfigRequestPrivate &other, GetOriginAccessControlConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
