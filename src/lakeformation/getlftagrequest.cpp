// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlftagrequest.h"
#include "getlftagrequest_p.h"
#include "getlftagresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetLFTagRequest
 * \brief The GetLFTagRequest class provides an interface for LakeFormation GetLFTag requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getLFTag
 */

/*!
 * Constructs a copy of \a other.
 */
GetLFTagRequest::GetLFTagRequest(const GetLFTagRequest &other)
    : LakeFormationRequest(new GetLFTagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLFTagRequest object.
 */
GetLFTagRequest::GetLFTagRequest()
    : LakeFormationRequest(new GetLFTagRequestPrivate(LakeFormationRequest::GetLFTagAction, this))
{

}

/*!
 * \reimp
 */
bool GetLFTagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLFTagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLFTagRequest::response(QNetworkReply * const reply) const
{
    return new GetLFTagResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetLFTagRequestPrivate
 * \brief The GetLFTagRequestPrivate class provides private implementation for GetLFTagRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetLFTagRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetLFTagRequestPrivate::GetLFTagRequestPrivate(
    const LakeFormationRequest::Action action, GetLFTagRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLFTagRequest
 * class' copy constructor.
 */
GetLFTagRequestPrivate::GetLFTagRequestPrivate(
    const GetLFTagRequestPrivate &other, GetLFTagRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
