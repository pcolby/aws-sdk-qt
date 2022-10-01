// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putappinstanceretentionsettingsrequest.h"
#include "putappinstanceretentionsettingsrequest_p.h"
#include "putappinstanceretentionsettingsresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::PutAppInstanceRetentionSettingsRequest
 * \brief The PutAppInstanceRetentionSettingsRequest class provides an interface for ChimeSdkIdentity PutAppInstanceRetentionSettings requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::putAppInstanceRetentionSettings
 */

/*!
 * Constructs a copy of \a other.
 */
PutAppInstanceRetentionSettingsRequest::PutAppInstanceRetentionSettingsRequest(const PutAppInstanceRetentionSettingsRequest &other)
    : ChimeSdkIdentityRequest(new PutAppInstanceRetentionSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAppInstanceRetentionSettingsRequest object.
 */
PutAppInstanceRetentionSettingsRequest::PutAppInstanceRetentionSettingsRequest()
    : ChimeSdkIdentityRequest(new PutAppInstanceRetentionSettingsRequestPrivate(ChimeSdkIdentityRequest::PutAppInstanceRetentionSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool PutAppInstanceRetentionSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAppInstanceRetentionSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAppInstanceRetentionSettingsRequest::response(QNetworkReply * const reply) const
{
    return new PutAppInstanceRetentionSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::PutAppInstanceRetentionSettingsRequestPrivate
 * \brief The PutAppInstanceRetentionSettingsRequestPrivate class provides private implementation for PutAppInstanceRetentionSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a PutAppInstanceRetentionSettingsRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
PutAppInstanceRetentionSettingsRequestPrivate::PutAppInstanceRetentionSettingsRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, PutAppInstanceRetentionSettingsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAppInstanceRetentionSettingsRequest
 * class' copy constructor.
 */
PutAppInstanceRetentionSettingsRequestPrivate::PutAppInstanceRetentionSettingsRequestPrivate(
    const PutAppInstanceRetentionSettingsRequestPrivate &other, PutAppInstanceRetentionSettingsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
