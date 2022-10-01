// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcerequestsrequest.h"
#include "listresourcerequestsrequest_p.h"
#include "listresourcerequestsresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::ListResourceRequestsRequest
 * \brief The ListResourceRequestsRequest class provides an interface for CloudControl ListResourceRequests requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::listResourceRequests
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourceRequestsRequest::ListResourceRequestsRequest(const ListResourceRequestsRequest &other)
    : CloudControlRequest(new ListResourceRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourceRequestsRequest object.
 */
ListResourceRequestsRequest::ListResourceRequestsRequest()
    : CloudControlRequest(new ListResourceRequestsRequestPrivate(CloudControlRequest::ListResourceRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourceRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceRequestsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::ListResourceRequestsRequestPrivate
 * \brief The ListResourceRequestsRequestPrivate class provides private implementation for ListResourceRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a ListResourceRequestsRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
ListResourceRequestsRequestPrivate::ListResourceRequestsRequestPrivate(
    const CloudControlRequest::Action action, ListResourceRequestsRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourceRequestsRequest
 * class' copy constructor.
 */
ListResourceRequestsRequestPrivate::ListResourceRequestsRequestPrivate(
    const ListResourceRequestsRequestPrivate &other, ListResourceRequestsRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
