// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotsrequest.h"
#include "getbotsrequest_p.h"
#include "getbotsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotsRequest
 * \brief The GetBotsRequest class provides an interface for LexModelBuilding GetBots requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBots
 */

/*!
 * Constructs a copy of \a other.
 */
GetBotsRequest::GetBotsRequest(const GetBotsRequest &other)
    : LexModelBuildingRequest(new GetBotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBotsRequest object.
 */
GetBotsRequest::GetBotsRequest()
    : LexModelBuildingRequest(new GetBotsRequestPrivate(LexModelBuildingRequest::GetBotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetBotsRequestPrivate
 * \brief The GetBotsRequestPrivate class provides private implementation for GetBotsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetBotsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBotsRequest
 * class' copy constructor.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const GetBotsRequestPrivate &other, GetBotsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
