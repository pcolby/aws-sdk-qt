// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesrequest.h"
#include "listresourcesrequest_p.h"
#include "listresourcesresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListResourcesRequest
 * \brief The ListResourcesRequest class provides an interface for LakeFormation ListResources requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourcesRequest::ListResourcesRequest(const ListResourcesRequest &other)
    : LakeFormationRequest(new ListResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourcesRequest object.
 */
ListResourcesRequest::ListResourcesRequest()
    : LakeFormationRequest(new ListResourcesRequestPrivate(LakeFormationRequest::ListResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListResourcesRequestPrivate
 * \brief The ListResourcesRequestPrivate class provides private implementation for ListResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListResourcesRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const LakeFormationRequest::Action action, ListResourcesRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesRequest
 * class' copy constructor.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const ListResourcesRequestPrivate &other, ListResourcesRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
