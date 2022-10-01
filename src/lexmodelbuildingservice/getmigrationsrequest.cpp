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

#include "getmigrationsrequest.h"
#include "getmigrationsrequest_p.h"
#include "getmigrationsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetMigrationsRequest
 * \brief The GetMigrationsRequest class provides an interface for LexModelBuildingService GetMigrations requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getMigrations
 */

/*!
 * Constructs a copy of \a other.
 */
GetMigrationsRequest::GetMigrationsRequest(const GetMigrationsRequest &other)
    : LexModelBuildingServiceRequest(new GetMigrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMigrationsRequest object.
 */
GetMigrationsRequest::GetMigrationsRequest()
    : LexModelBuildingServiceRequest(new GetMigrationsRequestPrivate(LexModelBuildingServiceRequest::GetMigrationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMigrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMigrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMigrationsRequest::response(QNetworkReply * const reply) const
{
    return new GetMigrationsResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetMigrationsRequestPrivate
 * \brief The GetMigrationsRequestPrivate class provides private implementation for GetMigrationsRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetMigrationsRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetMigrationsRequestPrivate::GetMigrationsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetMigrationsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMigrationsRequest
 * class' copy constructor.
 */
GetMigrationsRequestPrivate::GetMigrationsRequestPrivate(
    const GetMigrationsRequestPrivate &other, GetMigrationsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
