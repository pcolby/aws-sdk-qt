// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
