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
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
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
