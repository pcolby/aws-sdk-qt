// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getutterancesviewrequest.h"
#include "getutterancesviewrequest_p.h"
#include "getutterancesviewresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetUtterancesViewRequest
 * \brief The GetUtterancesViewRequest class provides an interface for LexModelBuilding GetUtterancesView requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getUtterancesView
 */

/*!
 * Constructs a copy of \a other.
 */
GetUtterancesViewRequest::GetUtterancesViewRequest(const GetUtterancesViewRequest &other)
    : LexModelBuildingRequest(new GetUtterancesViewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUtterancesViewRequest object.
 */
GetUtterancesViewRequest::GetUtterancesViewRequest()
    : LexModelBuildingRequest(new GetUtterancesViewRequestPrivate(LexModelBuildingRequest::GetUtterancesViewAction, this))
{

}

/*!
 * \reimp
 */
bool GetUtterancesViewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUtterancesViewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUtterancesViewRequest::response(QNetworkReply * const reply) const
{
    return new GetUtterancesViewResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetUtterancesViewRequestPrivate
 * \brief The GetUtterancesViewRequestPrivate class provides private implementation for GetUtterancesViewRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetUtterancesViewRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetUtterancesViewRequestPrivate::GetUtterancesViewRequestPrivate(
    const LexModelBuildingRequest::Action action, GetUtterancesViewRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUtterancesViewRequest
 * class' copy constructor.
 */
GetUtterancesViewRequestPrivate::GetUtterancesViewRequestPrivate(
    const GetUtterancesViewRequestPrivate &other, GetUtterancesViewRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
