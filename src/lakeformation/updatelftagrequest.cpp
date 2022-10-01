// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelftagrequest.h"
#include "updatelftagrequest_p.h"
#include "updatelftagresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateLFTagRequest
 * \brief The UpdateLFTagRequest class provides an interface for LakeFormation UpdateLFTag requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateLFTag
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLFTagRequest::UpdateLFTagRequest(const UpdateLFTagRequest &other)
    : LakeFormationRequest(new UpdateLFTagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLFTagRequest object.
 */
UpdateLFTagRequest::UpdateLFTagRequest()
    : LakeFormationRequest(new UpdateLFTagRequestPrivate(LakeFormationRequest::UpdateLFTagAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLFTagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLFTagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLFTagRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLFTagResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::UpdateLFTagRequestPrivate
 * \brief The UpdateLFTagRequestPrivate class provides private implementation for UpdateLFTagRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateLFTagRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
UpdateLFTagRequestPrivate::UpdateLFTagRequestPrivate(
    const LakeFormationRequest::Action action, UpdateLFTagRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLFTagRequest
 * class' copy constructor.
 */
UpdateLFTagRequestPrivate::UpdateLFTagRequestPrivate(
    const UpdateLFTagRequestPrivate &other, UpdateLFTagRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
