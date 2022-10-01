// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionprofilerequest.h"
#include "getfieldlevelencryptionprofilerequest_p.h"
#include "getfieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileRequest
 * \brief The GetFieldLevelEncryptionProfileRequest class provides an interface for CloudFront GetFieldLevelEncryptionProfile requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetFieldLevelEncryptionProfileRequest::GetFieldLevelEncryptionProfileRequest(const GetFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFieldLevelEncryptionProfileRequest object.
 */
GetFieldLevelEncryptionProfileRequest::GetFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFieldLevelEncryptionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileRequestPrivate
 * \brief The GetFieldLevelEncryptionProfileRequestPrivate class provides private implementation for GetFieldLevelEncryptionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetFieldLevelEncryptionProfileRequestPrivate::GetFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 */
GetFieldLevelEncryptionProfileRequestPrivate::GetFieldLevelEncryptionProfileRequestPrivate(
    const GetFieldLevelEncryptionProfileRequestPrivate &other, GetFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
