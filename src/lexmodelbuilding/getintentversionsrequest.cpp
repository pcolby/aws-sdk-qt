// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentversionsrequest.h"
#include "getintentversionsrequest_p.h"
#include "getintentversionsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentVersionsRequest
 * \brief The GetIntentVersionsRequest class provides an interface for LexModelBuilding GetIntentVersions requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntentVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentVersionsRequest::GetIntentVersionsRequest(const GetIntentVersionsRequest &other)
    : LexModelBuildingRequest(new GetIntentVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentVersionsRequest object.
 */
GetIntentVersionsRequest::GetIntentVersionsRequest()
    : LexModelBuildingRequest(new GetIntentVersionsRequestPrivate(LexModelBuildingRequest::GetIntentVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentVersionsRequestPrivate
 * \brief The GetIntentVersionsRequestPrivate class provides private implementation for GetIntentVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentVersionsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetIntentVersionsRequestPrivate::GetIntentVersionsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetIntentVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentVersionsRequest
 * class' copy constructor.
 */
GetIntentVersionsRequestPrivate::GetIntentVersionsRequestPrivate(
    const GetIntentVersionsRequestPrivate &other, GetIntentVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
