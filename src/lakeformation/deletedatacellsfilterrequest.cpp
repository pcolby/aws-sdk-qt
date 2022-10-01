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

#include "deletedatacellsfilterrequest.h"
#include "deletedatacellsfilterrequest_p.h"
#include "deletedatacellsfilterresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterRequest
 * \brief The DeleteDataCellsFilterRequest class provides an interface for LakeFormation DeleteDataCellsFilter requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteDataCellsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataCellsFilterRequest::DeleteDataCellsFilterRequest(const DeleteDataCellsFilterRequest &other)
    : LakeFormationRequest(new DeleteDataCellsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataCellsFilterRequest object.
 */
DeleteDataCellsFilterRequest::DeleteDataCellsFilterRequest()
    : LakeFormationRequest(new DeleteDataCellsFilterRequestPrivate(LakeFormationRequest::DeleteDataCellsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataCellsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataCellsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataCellsFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataCellsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterRequestPrivate
 * \brief The DeleteDataCellsFilterRequestPrivate class provides private implementation for DeleteDataCellsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteDataCellsFilterRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeleteDataCellsFilterRequestPrivate::DeleteDataCellsFilterRequestPrivate(
    const LakeFormationRequest::Action action, DeleteDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataCellsFilterRequest
 * class' copy constructor.
 */
DeleteDataCellsFilterRequestPrivate::DeleteDataCellsFilterRequestPrivate(
    const DeleteDataCellsFilterRequestPrivate &other, DeleteDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
