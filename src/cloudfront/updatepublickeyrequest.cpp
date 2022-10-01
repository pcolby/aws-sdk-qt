// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublickeyrequest.h"
#include "updatepublickeyrequest_p.h"
#include "updatepublickeyresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdatePublicKeyRequest
 * \brief The UpdatePublicKeyRequest class provides an interface for CloudFront UpdatePublicKey requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updatePublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePublicKeyRequest::UpdatePublicKeyRequest(const UpdatePublicKeyRequest &other)
    : CloudFrontRequest(new UpdatePublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePublicKeyRequest object.
 */
UpdatePublicKeyRequest::UpdatePublicKeyRequest()
    : CloudFrontRequest(new UpdatePublicKeyRequestPrivate(CloudFrontRequest::UpdatePublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdatePublicKeyRequestPrivate
 * \brief The UpdatePublicKeyRequestPrivate class provides private implementation for UpdatePublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdatePublicKeyRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdatePublicKeyRequestPrivate::UpdatePublicKeyRequestPrivate(
    const CloudFrontRequest::Action action, UpdatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePublicKeyRequest
 * class' copy constructor.
 */
UpdatePublicKeyRequestPrivate::UpdatePublicKeyRequestPrivate(
    const UpdatePublicKeyRequestPrivate &other, UpdatePublicKeyRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
