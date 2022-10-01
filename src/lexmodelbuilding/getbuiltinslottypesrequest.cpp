// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuiltinslottypesrequest.h"
#include "getbuiltinslottypesrequest_p.h"
#include "getbuiltinslottypesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesRequest
 * \brief The GetBuiltinSlotTypesRequest class provides an interface for LexModelBuilding GetBuiltinSlotTypes requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinSlotTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest(const GetBuiltinSlotTypesRequest &other)
    : LexModelBuildingRequest(new GetBuiltinSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBuiltinSlotTypesRequest object.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest()
    : LexModelBuildingRequest(new GetBuiltinSlotTypesRequestPrivate(LexModelBuildingRequest::GetBuiltinSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBuiltinSlotTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinSlotTypesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesRequestPrivate
 * \brief The GetBuiltinSlotTypesRequestPrivate class provides private implementation for GetBuiltinSlotTypesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinSlotTypesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinSlotTypesRequest
 * class' copy constructor.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const GetBuiltinSlotTypesRequestPrivate &other, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
