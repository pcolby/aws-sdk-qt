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

#include "startmigrationrequest.h"
#include "startmigrationrequest_p.h"
#include "startmigrationresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::StartMigrationRequest
 * \brief The StartMigrationRequest class provides an interface for LexModelBuildingService StartMigration requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::startMigration
 */

/*!
 * Constructs a copy of \a other.
 */
StartMigrationRequest::StartMigrationRequest(const StartMigrationRequest &other)
    : LexModelBuildingServiceRequest(new StartMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMigrationRequest object.
 */
StartMigrationRequest::StartMigrationRequest()
    : LexModelBuildingServiceRequest(new StartMigrationRequestPrivate(LexModelBuildingServiceRequest::StartMigrationAction, this))
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
 * \class QtAws::LexModelBuildingService::StartMigrationRequestPrivate
 * \brief The StartMigrationRequestPrivate class provides private implementation for StartMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a StartMigrationRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
StartMigrationRequestPrivate::StartMigrationRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, StartMigrationRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
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
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
