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

#include "putintentrequest.h"
#include "putintentrequest_p.h"
#include "putintentresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutIntentRequest
 * \brief The PutIntentRequest class provides an interface for LexModelBuildingService PutIntent requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putIntent
 */

/*!
 * Constructs a copy of \a other.
 */
PutIntentRequest::PutIntentRequest(const PutIntentRequest &other)
    : LexModelBuildingServiceRequest(new PutIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutIntentRequest object.
 */
PutIntentRequest::PutIntentRequest()
    : LexModelBuildingServiceRequest(new PutIntentRequestPrivate(LexModelBuildingServiceRequest::PutIntentAction, this))
{

}

/*!
 * \reimp
 */
bool PutIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutIntentRequest::response(QNetworkReply * const reply) const
{
    return new PutIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::PutIntentRequestPrivate
 * \brief The PutIntentRequestPrivate class provides private implementation for PutIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutIntentRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutIntentRequest
 * class' copy constructor.
 */
PutIntentRequestPrivate::PutIntentRequestPrivate(
    const PutIntentRequestPrivate &other, PutIntentRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
