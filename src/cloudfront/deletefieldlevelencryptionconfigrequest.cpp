// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
