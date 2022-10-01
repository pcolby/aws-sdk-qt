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
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetMigrationRequest
 * \brief The GetMigrationRequest class provides an interface for LexModelBuildingService GetMigration requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getMigration
 */

/*!
 * Constructs a copy of \a other.
 */
GetMigrationRequest::GetMigrationRequest(const GetMigrationRequest &other)
    : LexModelBuildingServiceRequest(new GetMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMigrationRequest object.
 */
GetMigrationRequest::GetMigrationRequest()
    : LexModelBuildingServiceRequest(new GetMigrationRequestPrivate(LexModelBuildingServiceRequest::GetMigrationAction, this))
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
 * \class QtAws::LexModelBuildingService::GetMigrationRequestPrivate
 * \brief The GetMigrationRequestPrivate class provides private implementation for GetMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetMigrationRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetMigrationRequestPrivate::GetMigrationRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetMigrationRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
