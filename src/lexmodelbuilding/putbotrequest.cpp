// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbotrequest.h"
#include "putbotrequest_p.h"
#include "putbotresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutBotRequest
 * \brief The PutBotRequest class provides an interface for LexModelBuilding PutBot requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putBot
 */

/*!
 * Constructs a copy of \a other.
 */
PutBotRequest::PutBotRequest(const PutBotRequest &other)
    : LexModelBuildingRequest(new PutBotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBotRequest object.
 */
PutBotRequest::PutBotRequest()
    : LexModelBuildingRequest(new PutBotRequestPrivate(LexModelBuildingRequest::PutBotAction, this))
{

}

/*!
 * \reimp
 */
bool PutBotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBotRequest::response(QNetworkReply * const reply) const
{
    return new PutBotResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::PutBotRequestPrivate
 * \brief The PutBotRequestPrivate class provides private implementation for PutBotRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutBotRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const LexModelBuildingRequest::Action action, PutBotRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBotRequest
 * class' copy constructor.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const PutBotRequestPrivate &other, PutBotRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
