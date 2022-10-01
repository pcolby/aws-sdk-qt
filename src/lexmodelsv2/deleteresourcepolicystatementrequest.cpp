// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
