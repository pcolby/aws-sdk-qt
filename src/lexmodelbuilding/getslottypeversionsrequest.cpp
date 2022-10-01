// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getslottypeversionsrequest.h"
#include "getslottypeversionsrequest_p.h"
#include "getslottypeversionsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeVersionsRequest
 * \brief The GetSlotTypeVersionsRequest class provides an interface for LexModelBuilding GetSlotTypeVersions requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotTypeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest(const GetSlotTypeVersionsRequest &other)
    : LexModelBuildingRequest(new GetSlotTypeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSlotTypeVersionsRequest object.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest()
    : LexModelBuildingRequest(new GetSlotTypeVersionsRequestPrivate(LexModelBuildingRequest::GetSlotTypeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSlotTypeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeVersionsRequestPrivate
 * \brief The GetSlotTypeVersionsRequestPrivate class provides private implementation for GetSlotTypeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypeVersionsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetSlotTypeVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeVersionsRequest
 * class' copy constructor.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const GetSlotTypeVersionsRequestPrivate &other, GetSlotTypeVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
