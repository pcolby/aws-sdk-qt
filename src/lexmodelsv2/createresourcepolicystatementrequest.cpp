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

#include "createresourcepolicystatementrequest.h"
#include "createresourcepolicystatementrequest_p.h"
#include "createresourcepolicystatementresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyStatementRequest
 * \brief The CreateResourcePolicyStatementRequest class provides an interface for LexModelsV2 CreateResourcePolicyStatement requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createResourcePolicyStatement
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourcePolicyStatementRequest::CreateResourcePolicyStatementRequest(const CreateResourcePolicyStatementRequest &other)
    : LexModelsV2Request(new CreateResourcePolicyStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourcePolicyStatementRequest object.
 */
CreateResourcePolicyStatementRequest::CreateResourcePolicyStatementRequest()
    : LexModelsV2Request(new CreateResourcePolicyStatementRequestPrivate(LexModelsV2Request::CreateResourcePolicyStatementAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourcePolicyStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourcePolicyStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourcePolicyStatementRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourcePolicyStatementResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyStatementRequestPrivate
 * \brief The CreateResourcePolicyStatementRequestPrivate class provides private implementation for CreateResourcePolicyStatementRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateResourcePolicyStatementRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateResourcePolicyStatementRequestPrivate::CreateResourcePolicyStatementRequestPrivate(
    const LexModelsV2Request::Action action, CreateResourcePolicyStatementRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourcePolicyStatementRequest
 * class' copy constructor.
 */
CreateResourcePolicyStatementRequestPrivate::CreateResourcePolicyStatementRequestPrivate(
    const CreateResourcePolicyStatementRequestPrivate &other, CreateResourcePolicyStatementRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
