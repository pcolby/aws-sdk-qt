// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
