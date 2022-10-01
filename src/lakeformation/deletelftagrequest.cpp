// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelftagrequest.h"
#include "deletelftagrequest_p.h"
#include "deletelftagresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteLFTagRequest
 * \brief The DeleteLFTagRequest class provides an interface for LakeFormation DeleteLFTag requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteLFTag
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLFTagRequest::DeleteLFTagRequest(const DeleteLFTagRequest &other)
    : LakeFormationRequest(new DeleteLFTagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLFTagRequest object.
 */
DeleteLFTagRequest::DeleteLFTagRequest()
    : LakeFormationRequest(new DeleteLFTagRequestPrivate(LakeFormationRequest::DeleteLFTagAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLFTagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLFTagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLFTagRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLFTagResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::DeleteLFTagRequestPrivate
 * \brief The DeleteLFTagRequestPrivate class provides private implementation for DeleteLFTagRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteLFTagRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
DeleteLFTagRequestPrivate::DeleteLFTagRequestPrivate(
    const LakeFormationRequest::Action action, DeleteLFTagRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLFTagRequest
 * class' copy constructor.
 */
DeleteLFTagRequestPrivate::DeleteLFTagRequestPrivate(
    const DeleteLFTagRequestPrivate &other, DeleteLFTagRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
