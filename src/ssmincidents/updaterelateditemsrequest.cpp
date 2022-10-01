// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterelateditemsrequest.h"
#include "updaterelateditemsrequest_p.h"
#include "updaterelateditemsresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateRelatedItemsRequest
 * \brief The UpdateRelatedItemsRequest class provides an interface for SsmIncidents UpdateRelatedItems requests.
 *
 * \inmodule QtAwsSsmIncidents
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmIncidentsClient::updateRelatedItems
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRelatedItemsRequest::UpdateRelatedItemsRequest(const UpdateRelatedItemsRequest &other)
    : SsmIncidentsRequest(new UpdateRelatedItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRelatedItemsRequest object.
 */
UpdateRelatedItemsRequest::UpdateRelatedItemsRequest()
    : SsmIncidentsRequest(new UpdateRelatedItemsRequestPrivate(SsmIncidentsRequest::UpdateRelatedItemsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRelatedItemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRelatedItemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRelatedItemsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRelatedItemsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::UpdateRelatedItemsRequestPrivate
 * \brief The UpdateRelatedItemsRequestPrivate class provides private implementation for UpdateRelatedItemsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateRelatedItemsRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
UpdateRelatedItemsRequestPrivate::UpdateRelatedItemsRequestPrivate(
    const SsmIncidentsRequest::Action action, UpdateRelatedItemsRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRelatedItemsRequest
 * class' copy constructor.
 */
UpdateRelatedItemsRequestPrivate::UpdateRelatedItemsRequestPrivate(
    const UpdateRelatedItemsRequestPrivate &other, UpdateRelatedItemsRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
