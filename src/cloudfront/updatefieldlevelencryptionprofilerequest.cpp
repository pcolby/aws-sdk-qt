// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
