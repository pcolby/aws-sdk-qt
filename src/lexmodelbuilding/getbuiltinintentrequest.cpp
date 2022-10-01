// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuiltinintentrequest.h"
#include "getbuiltinintentrequest_p.h"
#include "getbuiltinintentresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentRequest
 * \brief The GetBuiltinIntentRequest class provides an interface for LexModelBuilding GetBuiltinIntent requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinIntent
 */

/*!
 * Constructs a copy of \a other.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest(const GetBuiltinIntentRequest &other)
    : LexModelBuildingRequest(new GetBuiltinIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBuiltinIntentRequest object.
 */
GetBuiltinIntentRequest::GetBuiltinIntentRequest()
    : LexModelBuildingRequest(new GetBuiltinIntentRequestPrivate(LexModelBuildingRequest::GetBuiltinIntentAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBuiltinIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentRequestPrivate
 * \brief The GetBuiltinIntentRequestPrivate class provides private implementation for GetBuiltinIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinIntentRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBuiltinIntentRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinIntentRequest
 * class' copy constructor.
 */
GetBuiltinIntentRequestPrivate::GetBuiltinIntentRequestPrivate(
    const GetBuiltinIntentRequestPrivate &other, GetBuiltinIntentRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
