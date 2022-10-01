// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcepolicyrequest.h"
#include "createresourcepolicyrequest_p.h"
#include "createresourcepolicyresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyRequest
 * \brief The CreateResourcePolicyRequest class provides an interface for LexModelsV2 CreateResourcePolicy requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourcePolicyRequest::CreateResourcePolicyRequest(const CreateResourcePolicyRequest &other)
    : LexModelsV2Request(new CreateResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourcePolicyRequest object.
 */
CreateResourcePolicyRequest::CreateResourcePolicyRequest()
    : LexModelsV2Request(new CreateResourcePolicyRequestPrivate(LexModelsV2Request::CreateResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyRequestPrivate
 * \brief The CreateResourcePolicyRequestPrivate class provides private implementation for CreateResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateResourcePolicyRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateResourcePolicyRequestPrivate::CreateResourcePolicyRequestPrivate(
    const LexModelsV2Request::Action action, CreateResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourcePolicyRequest
 * class' copy constructor.
 */
CreateResourcePolicyRequestPrivate::CreateResourcePolicyRequestPrivate(
    const CreateResourcePolicyRequestPrivate &other, CreateResourcePolicyRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
