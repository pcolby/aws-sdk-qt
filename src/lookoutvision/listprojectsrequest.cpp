// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListProjectsRequest
 * \brief The ListProjectsRequest class provides an interface for LookoutVision ListProjects requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::listProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : LookoutVisionRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : LookoutVisionRequest(new ListProjectsRequestPrivate(LookoutVisionRequest::ListProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::ListProjectsRequestPrivate
 * \brief The ListProjectsRequestPrivate class provides private implementation for ListProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListProjectsRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const LookoutVisionRequest::Action action, ListProjectsRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectsRequest
 * class' copy constructor.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const ListProjectsRequestPrivate &other, ListProjectsRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
