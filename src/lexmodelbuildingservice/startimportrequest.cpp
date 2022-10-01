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

#include "startimportrequest.h"
#include "startimportrequest_p.h"
#include "startimportresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::StartImportRequest
 * \brief The StartImportRequest class provides an interface for LexModelBuilding StartImport requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::startImport
 */

/*!
 * Constructs a copy of \a other.
 */
StartImportRequest::StartImportRequest(const StartImportRequest &other)
    : LexModelBuildingRequest(new StartImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImportRequest object.
 */
StartImportRequest::StartImportRequest()
    : LexModelBuildingRequest(new StartImportRequestPrivate(LexModelBuildingRequest::StartImportAction, this))
{

}

/*!
 * \reimp
 */
bool StartImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImportRequest::response(QNetworkReply * const reply) const
{
    return new StartImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::StartImportRequestPrivate
 * \brief The StartImportRequestPrivate class provides private implementation for StartImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a StartImportRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const LexModelBuildingRequest::Action action, StartImportRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImportRequest
 * class' copy constructor.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const StartImportRequestPrivate &other, StartImportRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
