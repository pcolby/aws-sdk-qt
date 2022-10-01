// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatacellsfilterrequest.h"
#include "listdatacellsfilterrequest_p.h"
#include "listdatacellsfilterresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterRequest
 * \brief The ListDataCellsFilterRequest class provides an interface for LakeFormation ListDataCellsFilter requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listDataCellsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataCellsFilterRequest::ListDataCellsFilterRequest(const ListDataCellsFilterRequest &other)
    : LakeFormationRequest(new ListDataCellsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataCellsFilterRequest object.
 */
ListDataCellsFilterRequest::ListDataCellsFilterRequest()
    : LakeFormationRequest(new ListDataCellsFilterRequestPrivate(LakeFormationRequest::ListDataCellsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataCellsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataCellsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataCellsFilterRequest::response(QNetworkReply * const reply) const
{
    return new ListDataCellsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterRequestPrivate
 * \brief The ListDataCellsFilterRequestPrivate class provides private implementation for ListDataCellsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListDataCellsFilterRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListDataCellsFilterRequestPrivate::ListDataCellsFilterRequestPrivate(
    const LakeFormationRequest::Action action, ListDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataCellsFilterRequest
 * class' copy constructor.
 */
ListDataCellsFilterRequestPrivate::ListDataCellsFilterRequestPrivate(
    const ListDataCellsFilterRequestPrivate &other, ListDataCellsFilterRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
