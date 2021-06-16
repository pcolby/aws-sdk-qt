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

#include "updateintentrequest.h"
#include "updateintentrequest_p.h"
#include "updateintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateIntentRequest
 * \brief The UpdateIntentRequest class provides an interface for LexModelsV2 UpdateIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateIntent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntentRequest::UpdateIntentRequest(const UpdateIntentRequest &other)
    : LexModelsV2Request(new UpdateIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntentRequest object.
 */
UpdateIntentRequest::UpdateIntentRequest()
    : LexModelsV2Request(new UpdateIntentRequestPrivate(LexModelsV2Request::UpdateIntentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateIntentRequestPrivate
 * \brief The UpdateIntentRequestPrivate class provides private implementation for UpdateIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateIntentRequestPrivate::UpdateIntentRequestPrivate(
    const LexModelsV2Request::Action action, UpdateIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntentRequest
 * class' copy constructor.
 */
UpdateIntentRequestPrivate::UpdateIntentRequestPrivate(
    const UpdateIntentRequestPrivate &other, UpdateIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
