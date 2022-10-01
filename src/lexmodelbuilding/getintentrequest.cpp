// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentrequest.h"
#include "getintentrequest_p.h"
#include "getintentresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentRequest
 * \brief The GetIntentRequest class provides an interface for LexModelBuilding GetIntent requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntent
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentRequest::GetIntentRequest(const GetIntentRequest &other)
    : LexModelBuildingRequest(new GetIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentRequest object.
 */
GetIntentRequest::GetIntentRequest()
    : LexModelBuildingRequest(new GetIntentRequestPrivate(LexModelBuildingRequest::GetIntentAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentRequestPrivate
 * \brief The GetIntentRequestPrivate class provides private implementation for GetIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const LexModelBuildingRequest::Action action, GetIntentRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentRequest
 * class' copy constructor.
 */
GetIntentRequestPrivate::GetIntentRequestPrivate(
    const GetIntentRequestPrivate &other, GetIntentRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
