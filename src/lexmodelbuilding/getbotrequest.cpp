// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotrequest.h"
#include "getbotrequest_p.h"
#include "getbotresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotRequest
 * \brief The GetBotRequest class provides an interface for LexModelBuilding GetBot requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBot
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotRequest::GetBotRequest(const GetBotRequest &other)
    : LexModelBuildingRequest(new GetBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotRequest object.
 */
GetBotRequest::GetBotRequest()
    : LexModelBuildingRequest(new GetBotRequestPrivate(LexModelBuildingRequest::GetBotAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotRequest::response(QNetworkReply * const reply) const
{
    return new GetBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotRequestPrivate
 * \brief The GetBotRequestPrivate class provides private implementation for GetBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotRequest
 * class' copy constructor.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const GetBotRequestPrivate &other, GetBotRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
