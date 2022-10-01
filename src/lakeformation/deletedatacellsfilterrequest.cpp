// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
