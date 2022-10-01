// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
