// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfieldlevelencryptionrequest.h"
#include "getfieldlevelencryptionrequest_p.h"
#include "getfieldlevelencryptionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionRequest
 * \brief The GetFieldLevelEncryptionRequest class provides an interface for CloudFront GetFieldLevelEncryption requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
GetFieldLevelEncryptionRequest::GetFieldLevelEncryptionRequest(const GetFieldLevelEncryptionRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFieldLevelEncryptionRequest object.
 */
GetFieldLevelEncryptionRequest::GetFieldLevelEncryptionRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFieldLevelEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionRequestPrivate
 * \brief The GetFieldLevelEncryptionRequestPrivate class provides private implementation for GetFieldLevelEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetFieldLevelEncryptionRequestPrivate::GetFieldLevelEncryptionRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionRequest
 * class' copy constructor.
 */
GetFieldLevelEncryptionRequestPrivate::GetFieldLevelEncryptionRequestPrivate(
    const GetFieldLevelEncryptionRequestPrivate &other, GetFieldLevelEncryptionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
