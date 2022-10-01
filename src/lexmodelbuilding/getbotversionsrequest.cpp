// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotversionsrequest.h"
#include "getbotversionsrequest_p.h"
#include "getbotversionsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotVersionsRequest
 * \brief The GetBotVersionsRequest class provides an interface for LexModelBuilding GetBotVersions requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotVersionsRequest::GetBotVersionsRequest(const GetBotVersionsRequest &other)
    : LexModelBuildingRequest(new GetBotVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotVersionsRequest object.
 */
GetBotVersionsRequest::GetBotVersionsRequest()
    : LexModelBuildingRequest(new GetBotVersionsRequestPrivate(LexModelBuildingRequest::GetBotVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotVersionsRequestPrivate
 * \brief The GetBotVersionsRequestPrivate class provides private implementation for GetBotVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotVersionsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotVersionsRequest
 * class' copy constructor.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const GetBotVersionsRequestPrivate &other, GetBotVersionsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
