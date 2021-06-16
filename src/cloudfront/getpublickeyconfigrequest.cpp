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

#include "getpublickeyconfigrequest.h"
#include "getpublickeyconfigrequest_p.h"
#include "getpublickeyconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigRequest
 * \brief The GetPublicKeyConfigRequest class provides an interface for CloudFront GetPublicKeyConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKeyConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetPublicKeyConfigRequest::GetPublicKeyConfigRequest(const GetPublicKeyConfigRequest &other)
    : CloudFrontRequest(new GetPublicKeyConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPublicKeyConfigRequest object.
 */
GetPublicKeyConfigRequest::GetPublicKeyConfigRequest()
    : CloudFrontRequest(new GetPublicKeyConfigRequestPrivate(CloudFrontRequest::GetPublicKeyConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicKeyConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPublicKeyConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicKeyConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicKeyConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigRequestPrivate
 * \brief The GetPublicKeyConfigRequestPrivate class provides private implementation for GetPublicKeyConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetPublicKeyConfigRequestPrivate::GetPublicKeyConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetPublicKeyConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPublicKeyConfigRequest
 * class' copy constructor.
 */
GetPublicKeyConfigRequestPrivate::GetPublicKeyConfigRequestPrivate(
    const GetPublicKeyConfigRequestPrivate &other, GetPublicKeyConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
