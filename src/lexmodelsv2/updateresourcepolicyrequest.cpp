/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
