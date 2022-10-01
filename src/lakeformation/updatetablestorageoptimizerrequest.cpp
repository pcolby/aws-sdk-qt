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

#include "updatetablestorageoptimizerrequest.h"
#include "updatetablestorageoptimizerrequest_p.h"
#include "updatetablestorageoptimizerresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateTableStorageOptimizerRequest
 * \brief The UpdateTableStorageOptimizerRequest class provides an interface for LakeFormation UpdateTableStorageOptimizer requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateTableStorageOptimizer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTableStorageOptimizerRequest::UpdateTableStorageOptimizerRequest(const UpdateTableStorageOptimizerRequest &other)
    : LakeFormationRequest(new UpdateTableStorageOptimizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTableStorageOptimizerRequest object.
 */
UpdateTableStorageOptimizerRequest::UpdateTableStorageOptimizerRequest()
    : LakeFormationRequest(new UpdateTableStorageOptimizerRequestPrivate(LakeFormationRequest::UpdateTableStorageOptimizerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTableStorageOptimizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTableStorageOptimizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTableStorageOptimizerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTableStorageOptimizerResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::UpdateTableStorageOptimizerRequestPrivate
 * \brief The UpdateTableStorageOptimizerRequestPrivate class provides private implementation for UpdateTableStorageOptimizerRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateTableStorageOptimizerRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
UpdateTableStorageOptimizerRequestPrivate::UpdateTableStorageOptimizerRequestPrivate(
    const LakeFormationRequest::Action action, UpdateTableStorageOptimizerRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTableStorageOptimizerRequest
 * class' copy constructor.
 */
UpdateTableStorageOptimizerRequestPrivate::UpdateTableStorageOptimizerRequestPrivate(
    const UpdateTableStorageOptimizerRequestPrivate &other, UpdateTableStorageOptimizerRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
