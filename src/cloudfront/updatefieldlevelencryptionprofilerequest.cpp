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

#include "updatefieldlevelencryptionprofilerequest.h"
#include "updatefieldlevelencryptionprofilerequest_p.h"
#include "updatefieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionProfileRequest
 * \brief The UpdateFieldLevelEncryptionProfileRequest class provides an interface for CloudFront UpdateFieldLevelEncryptionProfile requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFieldLevelEncryptionProfileRequest::UpdateFieldLevelEncryptionProfileRequest(const UpdateFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new UpdateFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFieldLevelEncryptionProfileRequest object.
 */
UpdateFieldLevelEncryptionProfileRequest::UpdateFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new UpdateFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::UpdateFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFieldLevelEncryptionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionProfileRequestPrivate
 * \brief The UpdateFieldLevelEncryptionProfileRequestPrivate class provides private implementation for UpdateFieldLevelEncryptionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionProfileRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateFieldLevelEncryptionProfileRequestPrivate::UpdateFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, UpdateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 */
UpdateFieldLevelEncryptionProfileRequestPrivate::UpdateFieldLevelEncryptionProfileRequestPrivate(
    const UpdateFieldLevelEncryptionProfileRequestPrivate &other, UpdateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
