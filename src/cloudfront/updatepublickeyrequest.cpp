/*
    Copyright 2013-2019 Paul Colby

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
