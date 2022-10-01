/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
