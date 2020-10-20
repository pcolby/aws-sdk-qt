/*
    Copyright 2013-2020 Paul Colby

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

#include "getpublickeyrequest.h"
#include "getpublickeyrequest_p.h"
#include "getpublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyRequest
 * \brief The GetPublicKeyRequest class provides an interface for CloudFront GetPublicKey requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetPublicKeyRequest::GetPublicKeyRequest(const GetPublicKeyRequest &other)
    : CloudFrontRequest(new GetPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPublicKeyRequest object.
 */
GetPublicKeyRequest::GetPublicKeyRequest()
    : CloudFrontRequest(new GetPublicKeyRequestPrivate(CloudFrontRequest::GetPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyRequestPrivate
 * \brief The GetPublicKeyRequestPrivate class provides private implementation for GetPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetPublicKeyRequestPrivate::GetPublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, GetPublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPublicKeyRequest
 * class' copy constructor.
 */
GetPublicKeyRequestPrivate::GetPublicKeyRequestPrivate(
    const GetPublicKeyRequestPrivate &other, GetPublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
