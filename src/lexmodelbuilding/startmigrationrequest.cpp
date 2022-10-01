// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmigrationrequest.h"
#include "startmigrationrequest_p.h"
#include "startmigrationresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::StartMigrationRequest
 * \brief The StartMigrationRequest class provides an interface for LexModelBuilding StartMigration requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::startMigration
 */

/*!
 * Constructs a copy of \a other.
 */
StartMigrationRequest::StartMigrationRequest(const StartMigrationRequest &other)
    : LexModelBuildingRequest(new StartMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMigrationRequest object.
 */
StartMigrationRequest::StartMigrationRequest()
    : LexModelBuildingRequest(new StartMigrationRequestPrivate(LexModelBuildingRequest::StartMigrationAction, this))
{

}

/*!
 * \reimp
 */
bool StartMigrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMigrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMigrationRequest::response(QNetworkReply * const reply) const
{
    return new StartMigrationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::StartMigrationRequestPrivate
 * \brief The StartMigrationRequestPrivate class provides private implementation for StartMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a StartMigrationRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
StartMigrationRequestPrivate::StartMigrationRequestPrivate(
    const LexModelBuildingRequest::Action action, StartMigrationRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMigrationRequest
 * class' copy constructor.
 */
StartMigrationRequestPrivate::StartMigrationRequestPrivate(
    const StartMigrationRequestPrivate &other, StartMigrationRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
