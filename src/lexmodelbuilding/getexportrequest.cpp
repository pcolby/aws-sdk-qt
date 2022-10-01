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

#include "getexportrequest.h"
#include "getexportrequest_p.h"
#include "getexportresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetExportRequest
 * \brief The GetExportRequest class provides an interface for LexModelBuilding GetExport requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getExport
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportRequest::GetExportRequest(const GetExportRequest &other)
    : LexModelBuildingRequest(new GetExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportRequest object.
 */
GetExportRequest::GetExportRequest()
    : LexModelBuildingRequest(new GetExportRequestPrivate(LexModelBuildingRequest::GetExportAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportRequest::response(QNetworkReply * const reply) const
{
    return new GetExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetExportRequestPrivate
 * \brief The GetExportRequestPrivate class provides private implementation for GetExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetExportRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const LexModelBuildingRequest::Action action, GetExportRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportRequest
 * class' copy constructor.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const GetExportRequestPrivate &other, GetExportRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
