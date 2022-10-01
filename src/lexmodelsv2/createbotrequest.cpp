// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
