// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfieldlevelencryptionconfigrequest.h"
#include "createfieldlevelencryptionconfigrequest_p.h"
#include "createfieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigRequest
 * \brief The CreateFieldLevelEncryptionConfigRequest class provides an interface for CloudFront CreateFieldLevelEncryptionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest(const CreateFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFieldLevelEncryptionConfigRequest object.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::CreateFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFieldLevelEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigRequestPrivate
 * \brief The CreateFieldLevelEncryptionConfigRequestPrivate class provides private implementation for CreateFieldLevelEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CreateFieldLevelEncryptionConfigRequestPrivate &other, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
