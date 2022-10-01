// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcerequest.h"
#include "updateresourcerequest_p.h"
#include "updateresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateResourceRequest
 * \brief The UpdateResourceRequest class provides an interface for LakeFormation UpdateResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateResource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceRequest::UpdateResourceRequest(const UpdateResourceRequest &other)
    : LakeFormationRequest(new UpdateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceRequest object.
 */
UpdateResourceRequest::UpdateResourceRequest()
    : LakeFormationRequest(new UpdateResourceRequestPrivate(LakeFormationRequest::UpdateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::UpdateResourceRequestPrivate
 * \brief The UpdateResourceRequestPrivate class provides private implementation for UpdateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const LakeFormationRequest::Action action, UpdateResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceRequest
 * class' copy constructor.
 */
UpdateResourceRequestPrivate::UpdateResourceRequestPrivate(
    const UpdateResourceRequestPrivate &other, UpdateResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
