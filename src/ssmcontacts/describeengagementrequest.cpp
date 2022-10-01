// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeengagementrequest.h"
#include "describeengagementrequest_p.h"
#include "describeengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::DescribeEngagementRequest
 * \brief The DescribeEngagementRequest class provides an interface for SsmContacts DescribeEngagement requests.
 *
 * \inmodule QtAwsSsmContacts
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
 * \sa SsmContactsClient::describeEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEngagementRequest::DescribeEngagementRequest(const DescribeEngagementRequest &other)
    : SsmContactsRequest(new DescribeEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEngagementRequest object.
 */
DescribeEngagementRequest::DescribeEngagementRequest()
    : SsmContactsRequest(new DescribeEngagementRequestPrivate(SsmContactsRequest::DescribeEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEngagementRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::DescribeEngagementRequestPrivate
 * \brief The DescribeEngagementRequestPrivate class provides private implementation for DescribeEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a DescribeEngagementRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
DescribeEngagementRequestPrivate::DescribeEngagementRequestPrivate(
    const SsmContactsRequest::Action action, DescribeEngagementRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngagementRequest
 * class' copy constructor.
 */
DescribeEngagementRequestPrivate::DescribeEngagementRequestPrivate(
    const DescribeEngagementRequestPrivate &other, DescribeEngagementRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
