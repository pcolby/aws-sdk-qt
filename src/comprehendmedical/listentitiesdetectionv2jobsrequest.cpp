// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesdetectionv2jobsrequest.h"
#include "listentitiesdetectionv2jobsrequest_p.h"
#include "listentitiesdetectionv2jobsresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListEntitiesDetectionV2JobsRequest
 * \brief The ListEntitiesDetectionV2JobsRequest class provides an interface for ComprehendMedical ListEntitiesDetectionV2Jobs requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listEntitiesDetectionV2Jobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitiesDetectionV2JobsRequest::ListEntitiesDetectionV2JobsRequest(const ListEntitiesDetectionV2JobsRequest &other)
    : ComprehendMedicalRequest(new ListEntitiesDetectionV2JobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitiesDetectionV2JobsRequest object.
 */
ListEntitiesDetectionV2JobsRequest::ListEntitiesDetectionV2JobsRequest()
    : ComprehendMedicalRequest(new ListEntitiesDetectionV2JobsRequestPrivate(ComprehendMedicalRequest::ListEntitiesDetectionV2JobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitiesDetectionV2JobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitiesDetectionV2JobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitiesDetectionV2JobsRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesDetectionV2JobsResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::ListEntitiesDetectionV2JobsRequestPrivate
 * \brief The ListEntitiesDetectionV2JobsRequestPrivate class provides private implementation for ListEntitiesDetectionV2JobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListEntitiesDetectionV2JobsRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ListEntitiesDetectionV2JobsRequestPrivate::ListEntitiesDetectionV2JobsRequestPrivate(
    const ComprehendMedicalRequest::Action action, ListEntitiesDetectionV2JobsRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesDetectionV2JobsRequest
 * class' copy constructor.
 */
ListEntitiesDetectionV2JobsRequestPrivate::ListEntitiesDetectionV2JobsRequestPrivate(
    const ListEntitiesDetectionV2JobsRequestPrivate &other, ListEntitiesDetectionV2JobsRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
