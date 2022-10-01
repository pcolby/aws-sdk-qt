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

#include "assumedecoratedrolewithsamlrequest.h"
#include "assumedecoratedrolewithsamlrequest_p.h"
#include "assumedecoratedrolewithsamlresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLRequest
 * \brief The AssumeDecoratedRoleWithSAMLRequest class provides an interface for LakeFormation AssumeDecoratedRoleWithSAML requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::assumeDecoratedRoleWithSAML
 */

/*!
 * Constructs a copy of \a other.
 */
AssumeDecoratedRoleWithSAMLRequest::AssumeDecoratedRoleWithSAMLRequest(const AssumeDecoratedRoleWithSAMLRequest &other)
    : LakeFormationRequest(new AssumeDecoratedRoleWithSAMLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLRequest object.
 */
AssumeDecoratedRoleWithSAMLRequest::AssumeDecoratedRoleWithSAMLRequest()
    : LakeFormationRequest(new AssumeDecoratedRoleWithSAMLRequestPrivate(LakeFormationRequest::AssumeDecoratedRoleWithSAMLAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeDecoratedRoleWithSAMLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssumeDecoratedRoleWithSAMLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeDecoratedRoleWithSAMLRequest::response(QNetworkReply * const reply) const
{
    return new AssumeDecoratedRoleWithSAMLResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLRequestPrivate
 * \brief The AssumeDecoratedRoleWithSAMLRequestPrivate class provides private implementation for AssumeDecoratedRoleWithSAMLRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
AssumeDecoratedRoleWithSAMLRequestPrivate::AssumeDecoratedRoleWithSAMLRequestPrivate(
    const LakeFormationRequest::Action action, AssumeDecoratedRoleWithSAMLRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssumeDecoratedRoleWithSAMLRequest
 * class' copy constructor.
 */
AssumeDecoratedRoleWithSAMLRequestPrivate::AssumeDecoratedRoleWithSAMLRequestPrivate(
    const AssumeDecoratedRoleWithSAMLRequestPrivate &other, AssumeDecoratedRoleWithSAMLRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
