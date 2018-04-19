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

#include "getimportrequest.h"
#include "getimportrequest_p.h"
#include "getimportresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetImportRequest
 * \brief The GetImportRequest class provides an interface for LexModelBuildingService GetImport requests.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getImport
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportRequest::GetImportRequest(const GetImportRequest &other)
    : LexModelBuildingServiceRequest(new GetImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportRequest object.
 */
GetImportRequest::GetImportRequest()
    : LexModelBuildingServiceRequest(new GetImportRequestPrivate(LexModelBuildingServiceRequest::GetImportAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportRequest::response(QNetworkReply * const reply) const
{
    return new GetImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuildingService::GetImportRequestPrivate
 * \brief The GetImportRequestPrivate class provides private implementation for GetImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetImportRequestPrivate object for LexModelBuildingService \a action,
 * with public implementation \a q.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetImportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportRequest
 * class' copy constructor.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const GetImportRequestPrivate &other, GetImportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
