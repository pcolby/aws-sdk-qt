// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getslottypesrequest.h"
#include "getslottypesrequest_p.h"
#include "getslottypesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesRequest
 * \brief The GetSlotTypesRequest class provides an interface for LexModelBuilding GetSlotTypes requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypesRequest::GetSlotTypesRequest(const GetSlotTypesRequest &other)
    : LexModelBuildingRequest(new GetSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypesRequest object.
 */
GetSlotTypesRequest::GetSlotTypesRequest()
    : LexModelBuildingRequest(new GetSlotTypesRequestPrivate(LexModelBuildingRequest::GetSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesRequestPrivate
 * \brief The GetSlotTypesRequestPrivate class provides private implementation for GetSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const LexModelBuildingRequest::Action action, GetSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypesRequest
 * class' copy constructor.
 */
GetSlotTypesRequestPrivate::GetSlotTypesRequestPrivate(
    const GetSlotTypesRequestPrivate &other, GetSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
