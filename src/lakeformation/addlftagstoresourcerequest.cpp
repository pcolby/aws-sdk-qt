// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addlftagstoresourcerequest.h"
#include "addlftagstoresourcerequest_p.h"
#include "addlftagstoresourceresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceRequest
 * \brief The AddLFTagsToResourceRequest class provides an interface for LakeFormation AddLFTagsToResource requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::addLFTagsToResource
 */

/*!
 * Constructs a copy of \a other.
 */
AddLFTagsToResourceRequest::AddLFTagsToResourceRequest(const AddLFTagsToResourceRequest &other)
    : LakeFormationRequest(new AddLFTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddLFTagsToResourceRequest object.
 */
AddLFTagsToResourceRequest::AddLFTagsToResourceRequest()
    : LakeFormationRequest(new AddLFTagsToResourceRequestPrivate(LakeFormationRequest::AddLFTagsToResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddLFTagsToResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddLFTagsToResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddLFTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddLFTagsToResourceResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceRequestPrivate
 * \brief The AddLFTagsToResourceRequestPrivate class provides private implementation for AddLFTagsToResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AddLFTagsToResourceRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
AddLFTagsToResourceRequestPrivate::AddLFTagsToResourceRequestPrivate(
    const LakeFormationRequest::Action action, AddLFTagsToResourceRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddLFTagsToResourceRequest
 * class' copy constructor.
 */
AddLFTagsToResourceRequestPrivate::AddLFTagsToResourceRequestPrivate(
    const AddLFTagsToResourceRequestPrivate &other, AddLFTagsToResourceRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
