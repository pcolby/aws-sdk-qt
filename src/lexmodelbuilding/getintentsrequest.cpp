// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentsrequest.h"
#include "getintentsrequest_p.h"
#include "getintentsresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentsRequest
 * \brief The GetIntentsRequest class provides an interface for LexModelBuilding GetIntents requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntents
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntentsRequest::GetIntentsRequest(const GetIntentsRequest &other)
    : LexModelBuildingRequest(new GetIntentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntentsRequest object.
 */
GetIntentsRequest::GetIntentsRequest()
    : LexModelBuildingRequest(new GetIntentsRequestPrivate(LexModelBuildingRequest::GetIntentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntentsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentsRequestPrivate
 * \brief The GetIntentsRequestPrivate class provides private implementation for GetIntentsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentsRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const LexModelBuildingRequest::Action action, GetIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntentsRequest
 * class' copy constructor.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const GetIntentsRequestPrivate &other, GetIntentsRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
