// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintentrequest.h"
#include "putintentrequest_p.h"
#include "putintentresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutIntentRequest
 * \brief The PutIntentRequest class provides an interface for LexModelBuilding PutIntent requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putIntent
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntentRequest::PutIntentRequest(const PutIntentRequest &other)
    : LexModelBuildingRequest(new PutIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntentRequest object.
 */
PutIntentRequest::PutIntentRequest()
    : LexModelBuildingRequest(new PutIntentRequestPrivate(LexModelBuildingRequest::PutIntentAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntentRequest::response(QNetworkReply * const reply) const
{
    return new PutIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::PutIntentRequestPrivate
 * \brief The PutIntentRequestPrivate class provides private implementation for PutIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutIntentRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const LexModelBuildingRequest::Action action, PutIntentRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntentRequest
 * class' copy constructor.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const PutIntentRequestPrivate &other, PutIntentRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
