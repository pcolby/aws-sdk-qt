// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyRequest
 * \brief The DeleteResourcePolicyRequest class provides an interface for LexModelsV2 DeleteResourcePolicy requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : LexModelsV2Request(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : LexModelsV2Request(new DeleteResourcePolicyRequestPrivate(LexModelsV2Request::DeleteResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyRequestPrivate
 * \brief The DeleteResourcePolicyRequestPrivate class provides private implementation for DeleteResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteResourcePolicyRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const LexModelsV2Request::Action action, DeleteResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
