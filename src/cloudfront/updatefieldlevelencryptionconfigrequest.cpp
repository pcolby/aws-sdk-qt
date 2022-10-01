// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefieldlevelencryptionconfigrequest.h"
#include "updatefieldlevelencryptionconfigrequest_p.h"
#include "updatefieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigRequest
 * \brief The UpdateFieldLevelEncryptionConfigRequest class provides an interface for CloudFront UpdateFieldLevelEncryptionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFieldLevelEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFieldLevelEncryptionConfigRequest::UpdateFieldLevelEncryptionConfigRequest(const UpdateFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new UpdateFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigRequest object.
 */
UpdateFieldLevelEncryptionConfigRequest::UpdateFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new UpdateFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::UpdateFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFieldLevelEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::UpdateFieldLevelEncryptionConfigRequestPrivate
 * \brief The UpdateFieldLevelEncryptionConfigRequestPrivate class provides private implementation for UpdateFieldLevelEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFieldLevelEncryptionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
UpdateFieldLevelEncryptionConfigRequestPrivate::UpdateFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, UpdateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 */
UpdateFieldLevelEncryptionConfigRequestPrivate::UpdateFieldLevelEncryptionConfigRequestPrivate(
    const UpdateFieldLevelEncryptionConfigRequestPrivate &other, UpdateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
