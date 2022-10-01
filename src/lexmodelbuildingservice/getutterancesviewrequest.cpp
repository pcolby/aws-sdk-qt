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
