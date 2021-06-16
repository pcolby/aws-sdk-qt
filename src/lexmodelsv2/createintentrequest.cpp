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

#include "createintentrequest.h"
#include "createintentrequest_p.h"
#include "createintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateIntentRequest
 * \brief The CreateIntentRequest class provides an interface for LexModelsV2 CreateIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createIntent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntentRequest::CreateIntentRequest(const CreateIntentRequest &other)
    : LexModelsV2Request(new CreateIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntentRequest object.
 */
CreateIntentRequest::CreateIntentRequest()
    : LexModelsV2Request(new CreateIntentRequestPrivate(LexModelsV2Request::CreateIntentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntentRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateIntentRequestPrivate
 * \brief The CreateIntentRequestPrivate class provides private implementation for CreateIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateIntentRequestPrivate::CreateIntentRequestPrivate(
    const LexModelsV2Request::Action action, CreateIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntentRequest
 * class' copy constructor.
 */
CreateIntentRequestPrivate::CreateIntentRequestPrivate(
    const CreateIntentRequestPrivate &other, CreateIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
