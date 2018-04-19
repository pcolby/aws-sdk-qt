/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteintentrequest.h"
#include "deleteintentrequest_p.h"
#include "deleteintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentRequest
 * \brief The DeleteIntentRequest class provides an interface for LexModelBuildingService DeleteIntent requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIntentRequest::DeleteIntentRequest(const DeleteIntentRequest &other)
    : LexModelBuildingServiceRequest(new DeleteIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIntentRequest object.
 */
DeleteIntentRequest::DeleteIntentRequest()
    : LexModelBuildingServiceRequest(new DeleteIntentRequestPrivate(LexModelBuildingServiceRequest::DeleteIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIntentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteIntentRequestPrivate
 * \brief The DeleteIntentRequestPrivate class provides private implementation for DeleteIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 *
 * Constructs a DeleteIntentRequestPrivate object for LexModelBuildingService \a action with,
 * public implementation \a q.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntentRequest
 * class' copy constructor.
 */
DeleteIntentRequestPrivate::DeleteIntentRequestPrivate(
    const DeleteIntentRequestPrivate &other, DeleteIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
