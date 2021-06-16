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

#include "createbotrequest.h"
#include "createbotrequest_p.h"
#include "createbotresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotRequest
 * \brief The CreateBotRequest class provides an interface for LexModelsV2 CreateBot requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBotRequest::CreateBotRequest(const CreateBotRequest &other)
    : LexModelsV2Request(new CreateBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBotRequest object.
 */
CreateBotRequest::CreateBotRequest()
    : LexModelsV2Request(new CreateBotRequestPrivate(LexModelsV2Request::CreateBotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateBotRequestPrivate
 * \brief The CreateBotRequestPrivate class provides private implementation for CreateBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateBotRequestPrivate::CreateBotRequestPrivate(
    const LexModelsV2Request::Action action, CreateBotRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBotRequest
 * class' copy constructor.
 */
CreateBotRequestPrivate::CreateBotRequestPrivate(
    const CreateBotRequestPrivate &other, CreateBotRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
