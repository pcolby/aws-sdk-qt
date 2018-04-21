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

#include "deleteutterancesrequest.h"
#include "deleteutterancesrequest_p.h"
#include "deleteutterancesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteUtterancesRequest
 * \brief The DeleteUtterancesRequest class provides an interface for LexModelBuildingService DeleteUtterances requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteUtterances
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest(const DeleteUtterancesRequest &other)
    : LexModelBuildingServiceRequest(new DeleteUtterancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUtterancesRequest object.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest()
    : LexModelBuildingServiceRequest(new DeleteUtterancesRequestPrivate(LexModelBuildingServiceRequest::DeleteUtterancesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUtterancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUtterancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUtterancesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUtterancesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteUtterancesRequestPrivate
 * \brief The DeleteUtterancesRequestPrivate class provides private implementation for DeleteUtterancesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteUtterancesRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteUtterancesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUtterancesRequest
 * class' copy constructor.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const DeleteUtterancesRequestPrivate &other, DeleteUtterancesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
