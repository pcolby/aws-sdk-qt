// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createintentversionrequest.h"
#include "createintentversionrequest_p.h"
#include "createintentversionresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionRequest
 * \brief The CreateIntentVersionRequest class provides an interface for LexModelBuilding CreateIntentVersion requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createIntentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest(const CreateIntentVersionRequest &other)
    : LexModelBuildingRequest(new CreateIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntentVersionRequest object.
 */
CreateIntentVersionRequest::CreateIntentVersionRequest()
    : LexModelBuildingRequest(new CreateIntentVersionRequestPrivate(LexModelBuildingRequest::CreateIntentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionRequestPrivate
 * \brief The CreateIntentVersionRequestPrivate class provides private implementation for CreateIntentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateIntentVersionRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const LexModelBuildingRequest::Action action, CreateIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntentVersionRequest
 * class' copy constructor.
 */
CreateIntentVersionRequestPrivate::CreateIntentVersionRequestPrivate(
    const CreateIntentVersionRequestPrivate &other, CreateIntentVersionRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
