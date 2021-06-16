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

#include "deleteintentrequest.h"
#include "deleteintentrequest_p.h"
#include "deleteintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteIntentRequest
 * \brief The DeleteIntentRequest class provides an interface for LexModelsV2 DeleteIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentRequest::DeleteIntentRequest(const DeleteIntentRequest &other)
    : LexModelsV2Request(new DeleteIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentRequest object.
 */
DeleteIntentRequest::DeleteIntentRequest()
    : LexModelsV2Request(new DeleteIntentRequestPrivate(LexModelsV2Request::DeleteIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteIntentRequestPrivate
 * \brief The DeleteIntentRequestPrivate class provides private implementation for DeleteIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const LexModelsV2Request::Action action, DeleteIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentRequest
 * class' copy constructor.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const DeleteIntentRequestPrivate &other, DeleteIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
