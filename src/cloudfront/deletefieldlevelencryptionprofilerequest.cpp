// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefieldlevelencryptionprofilerequest.h"
#include "deletefieldlevelencryptionprofilerequest_p.h"
#include "deletefieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionProfileRequest
 * \brief The DeleteFieldLevelEncryptionProfileRequest class provides an interface for CloudFront DeleteFieldLevelEncryptionProfile requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFieldLevelEncryptionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFieldLevelEncryptionProfileRequest::DeleteFieldLevelEncryptionProfileRequest(const DeleteFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new DeleteFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFieldLevelEncryptionProfileRequest object.
 */
DeleteFieldLevelEncryptionProfileRequest::DeleteFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new DeleteFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::DeleteFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFieldLevelEncryptionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteFieldLevelEncryptionProfileRequestPrivate
 * \brief The DeleteFieldLevelEncryptionProfileRequestPrivate class provides private implementation for DeleteFieldLevelEncryptionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFieldLevelEncryptionProfileRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteFieldLevelEncryptionProfileRequestPrivate::DeleteFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, DeleteFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 */
DeleteFieldLevelEncryptionProfileRequestPrivate::DeleteFieldLevelEncryptionProfileRequestPrivate(
    const DeleteFieldLevelEncryptionProfileRequestPrivate &other, DeleteFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
