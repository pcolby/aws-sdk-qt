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

#include "createdatacellsfilterrequest.h"
#include "createdatacellsfilterrequest_p.h"
#include "createdatacellsfilterresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CreateDataCellsFilterRequest
 * \brief The CreateDataCellsFilterRequest class provides an interface for LakeFormation CreateDataCellsFilter requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::createDataCellsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataCellsFilterRequest::CreateDataCellsFilterRequest(const CreateDataCellsFilterRequest &other)
    : LakeFormationRequest(new CreateDataCellsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataCellsFilterRequest object.
 */
CreateDataCellsFilterRequest::CreateDataCellsFilterRequest()
    : LakeFormationRequest(new CreateDataCellsFilterRequestPrivate(LakeFormationRequest::CreateDataCellsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataCellsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataCellsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataCellsFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataCellsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::CreateDataCellsFilterRequestPrivate
 * \brief The CreateDataCellsFilterRequestPrivate class provides private implementation for CreateDataCellsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CreateDataCellsFilterRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
CreateDataCellsFilterRequestPrivate::CreateDataCellsFilterRequestPrivate(
    const LakeFormationRequest::Action action, CreateDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataCellsFilterRequest
 * class' copy constructor.
 */
CreateDataCellsFilterRequestPrivate::CreateDataCellsFilterRequestPrivate(
    const CreateDataCellsFilterRequestPrivate &other, CreateDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
