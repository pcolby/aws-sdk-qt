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

#include "deleteintentversionrequest.h"
#include "deleteintentversionrequest_p.h"
#include "deleteintentversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentVersionRequest
 * \brief The DeleteIntentVersionRequest class provides an interface for LexModelBuildingService DeleteIntentVersion requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteIntentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest(const DeleteIntentVersionRequest &other)
    : LexModelBuildingServiceRequest(new DeleteIntentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentVersionRequest object.
 */
DeleteIntentVersionRequest::DeleteIntentVersionRequest()
    : LexModelBuildingServiceRequest(new DeleteIntentVersionRequestPrivate(LexModelBuildingServiceRequest::DeleteIntentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentVersionRequestPrivate
 * \brief The DeleteIntentVersionRequestPrivate class provides private implementation for DeleteIntentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteIntentVersionRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteIntentVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentVersionRequest
 * class' copy constructor.
 */
DeleteIntentVersionRequestPrivate::DeleteIntentVersionRequestPrivate(
    const DeleteIntentVersionRequestPrivate &other, DeleteIntentVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
