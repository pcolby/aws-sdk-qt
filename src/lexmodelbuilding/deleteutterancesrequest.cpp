// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteutterancesrequest.h"
#include "deleteutterancesrequest_p.h"
#include "deleteutterancesresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteUtterancesRequest
 * \brief The DeleteUtterancesRequest class provides an interface for LexModelBuilding DeleteUtterances requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteUtterances
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest(const DeleteUtterancesRequest &other)
    : LexModelBuildingRequest(new DeleteUtterancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUtterancesRequest object.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest()
    : LexModelBuildingRequest(new DeleteUtterancesRequestPrivate(LexModelBuildingRequest::DeleteUtterancesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUtterancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUtterancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUtterancesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUtterancesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::DeleteUtterancesRequestPrivate
 * \brief The DeleteUtterancesRequestPrivate class provides private implementation for DeleteUtterancesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteUtterancesRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const LexModelBuildingRequest::Action action, DeleteUtterancesRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUtterancesRequest
 * class' copy constructor.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const DeleteUtterancesRequestPrivate &other, DeleteUtterancesRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
