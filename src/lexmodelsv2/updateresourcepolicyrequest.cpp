// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcepolicyrequest.h"
#include "updateresourcepolicyrequest_p.h"
#include "updateresourcepolicyresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateResourcePolicyRequest
 * \brief The UpdateResourcePolicyRequest class provides an interface for LexModelsV2 UpdateResourcePolicy requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourcePolicyRequest::UpdateResourcePolicyRequest(const UpdateResourcePolicyRequest &other)
    : LexModelsV2Request(new UpdateResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourcePolicyRequest object.
 */
UpdateResourcePolicyRequest::UpdateResourcePolicyRequest()
    : LexModelsV2Request(new UpdateResourcePolicyRequestPrivate(LexModelsV2Request::UpdateResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateResourcePolicyRequestPrivate
 * \brief The UpdateResourcePolicyRequestPrivate class provides private implementation for UpdateResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateResourcePolicyRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateResourcePolicyRequestPrivate::UpdateResourcePolicyRequestPrivate(
    const LexModelsV2Request::Action action, UpdateResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourcePolicyRequest
 * class' copy constructor.
 */
UpdateResourcePolicyRequestPrivate::UpdateResourcePolicyRequestPrivate(
    const UpdateResourcePolicyRequestPrivate &other, UpdateResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
