// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmigrationrequest.h"
#include "getmigrationrequest_p.h"
#include "getmigrationresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetMigrationRequest
 * \brief The GetMigrationRequest class provides an interface for LexModelBuilding GetMigration requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getMigration
 */

/*!
 * Constructs a copy of \a other.
 */
GetMigrationRequest::GetMigrationRequest(const GetMigrationRequest &other)
    : LexModelBuildingRequest(new GetMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMigrationRequest object.
 */
GetMigrationRequest::GetMigrationRequest()
    : LexModelBuildingRequest(new GetMigrationRequestPrivate(LexModelBuildingRequest::GetMigrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetMigrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMigrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMigrationRequest::response(QNetworkReply * const reply) const
{
    return new GetMigrationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetMigrationRequestPrivate
 * \brief The GetMigrationRequestPrivate class provides private implementation for GetMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetMigrationRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetMigrationRequestPrivate::GetMigrationRequestPrivate(
    const LexModelBuildingRequest::Action action, GetMigrationRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMigrationRequest
 * class' copy constructor.
 */
GetMigrationRequestPrivate::GetMigrationRequestPrivate(
    const GetMigrationRequestPrivate &other, GetMigrationRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
