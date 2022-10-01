// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionprofileconfigrequest.h"
#include "getfieldlevelencryptionprofileconfigrequest_p.h"
#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigRequest
 * \brief The GetFieldLevelEncryptionProfileConfigRequest class provides an interface for CloudFront GetFieldLevelEncryptionProfileConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfileConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest(const GetFieldLevelEncryptionProfileConfigRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigRequest object.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionProfileConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionProfileConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFieldLevelEncryptionProfileConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionProfileConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionProfileConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigRequestPrivate
 * \brief The GetFieldLevelEncryptionProfileConfigRequestPrivate class provides private implementation for GetFieldLevelEncryptionProfileConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionProfileConfigRequest
 * class' copy constructor.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const GetFieldLevelEncryptionProfileConfigRequestPrivate &other, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
