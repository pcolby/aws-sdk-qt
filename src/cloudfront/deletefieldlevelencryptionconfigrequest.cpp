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

#include "deletefieldlevelencryptionconfigrequest.h"
#include "deletefieldlevelencryptionconfigrequest_p.h"
#include "deletefieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigRequest
 * \brief The DeleteFieldLevelEncryptionConfigRequest class provides an interface for CloudFront DeleteFieldLevelEncryptionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFieldLevelEncryptionConfigRequest::DeleteFieldLevelEncryptionConfigRequest(const DeleteFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new DeleteFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigRequest object.
 */
DeleteFieldLevelEncryptionConfigRequest::DeleteFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new DeleteFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::DeleteFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFieldLevelEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionConfigRequestPrivate
 * \brief The DeleteFieldLevelEncryptionConfigRequestPrivate class provides private implementation for DeleteFieldLevelEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteFieldLevelEncryptionConfigRequestPrivate::DeleteFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, DeleteFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 */
DeleteFieldLevelEncryptionConfigRequestPrivate::DeleteFieldLevelEncryptionConfigRequestPrivate(
    const DeleteFieldLevelEncryptionConfigRequestPrivate &other, DeleteFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
