// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepublickeyrequest.h"
#include "deletepublickeyrequest_p.h"
#include "deletepublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeletePublicKeyRequest
 * \brief The DeletePublicKeyRequest class provides an interface for CloudFront DeletePublicKey requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deletePublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePublicKeyRequest::DeletePublicKeyRequest(const DeletePublicKeyRequest &other)
    : CloudFrontRequest(new DeletePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePublicKeyRequest object.
 */
DeletePublicKeyRequest::DeletePublicKeyRequest()
    : CloudFrontRequest(new DeletePublicKeyRequestPrivate(CloudFrontRequest::DeletePublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeletePublicKeyRequestPrivate
 * \brief The DeletePublicKeyRequestPrivate class provides private implementation for DeletePublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeletePublicKeyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeletePublicKeyRequestPrivate::DeletePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, DeletePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePublicKeyRequest
 * class' copy constructor.
 */
DeletePublicKeyRequestPrivate::DeletePublicKeyRequestPrivate(
    const DeletePublicKeyRequestPrivate &other, DeletePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
