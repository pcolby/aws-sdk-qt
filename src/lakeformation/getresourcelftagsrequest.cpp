// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcelftagsrequest.h"
#include "getresourcelftagsrequest_p.h"
#include "getresourcelftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsRequest
 * \brief The GetResourceLFTagsRequest class provides an interface for LakeFormation GetResourceLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getResourceLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceLFTagsRequest::GetResourceLFTagsRequest(const GetResourceLFTagsRequest &other)
    : LakeFormationRequest(new GetResourceLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceLFTagsRequest object.
 */
GetResourceLFTagsRequest::GetResourceLFTagsRequest()
    : LakeFormationRequest(new GetResourceLFTagsRequestPrivate(LakeFormationRequest::GetResourceLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsRequestPrivate
 * \brief The GetResourceLFTagsRequestPrivate class provides private implementation for GetResourceLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetResourceLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetResourceLFTagsRequestPrivate::GetResourceLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, GetResourceLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceLFTagsRequest
 * class' copy constructor.
 */
GetResourceLFTagsRequestPrivate::GetResourceLFTagsRequestPrivate(
    const GetResourceLFTagsRequestPrivate &other, GetResourceLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
