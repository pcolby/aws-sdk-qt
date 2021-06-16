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

#include "deleteresourcepolicystatementrequest.h"
#include "deleteresourcepolicystatementrequest_p.h"
#include "deleteresourcepolicystatementresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyStatementRequest
 * \brief The DeleteResourcePolicyStatementRequest class provides an interface for LexModelsV2 DeleteResourcePolicyStatement requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteResourcePolicyStatement
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourcePolicyStatementRequest::DeleteResourcePolicyStatementRequest(const DeleteResourcePolicyStatementRequest &other)
    : LexModelsV2Request(new DeleteResourcePolicyStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourcePolicyStatementRequest object.
 */
DeleteResourcePolicyStatementRequest::DeleteResourcePolicyStatementRequest()
    : LexModelsV2Request(new DeleteResourcePolicyStatementRequestPrivate(LexModelsV2Request::DeleteResourcePolicyStatementAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourcePolicyStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourcePolicyStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyStatementRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyStatementResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyStatementRequestPrivate
 * \brief The DeleteResourcePolicyStatementRequestPrivate class provides private implementation for DeleteResourcePolicyStatementRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteResourcePolicyStatementRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteResourcePolicyStatementRequestPrivate::DeleteResourcePolicyStatementRequestPrivate(
    const LexModelsV2Request::Action action, DeleteResourcePolicyStatementRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyStatementRequest
 * class' copy constructor.
 */
DeleteResourcePolicyStatementRequestPrivate::DeleteResourcePolicyStatementRequestPrivate(
    const DeleteResourcePolicyStatementRequestPrivate &other, DeleteResourcePolicyStatementRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
