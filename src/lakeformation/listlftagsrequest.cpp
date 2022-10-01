// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlftagsrequest.h"
#include "listlftagsrequest_p.h"
#include "listlftagsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListLFTagsRequest
 * \brief The ListLFTagsRequest class provides an interface for LakeFormation ListLFTags requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listLFTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListLFTagsRequest::ListLFTagsRequest(const ListLFTagsRequest &other)
    : LakeFormationRequest(new ListLFTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLFTagsRequest object.
 */
ListLFTagsRequest::ListLFTagsRequest()
    : LakeFormationRequest(new ListLFTagsRequestPrivate(LakeFormationRequest::ListLFTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLFTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLFTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLFTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListLFTagsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListLFTagsRequestPrivate
 * \brief The ListLFTagsRequestPrivate class provides private implementation for ListLFTagsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListLFTagsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListLFTagsRequestPrivate::ListLFTagsRequestPrivate(
    const LakeFormationRequest::Action action, ListLFTagsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLFTagsRequest
 * class' copy constructor.
 */
ListLFTagsRequestPrivate::ListLFTagsRequestPrivate(
    const ListLFTagsRequestPrivate &other, ListLFTagsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
