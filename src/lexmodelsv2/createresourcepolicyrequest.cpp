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
