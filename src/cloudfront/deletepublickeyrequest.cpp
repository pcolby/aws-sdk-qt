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
