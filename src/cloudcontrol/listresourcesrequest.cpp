// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesrequest.h"
#include "listresourcesrequest_p.h"
#include "listresourcesresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::ListResourcesRequest
 * \brief The ListResourcesRequest class provides an interface for CloudControl ListResources requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::listResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourcesRequest::ListResourcesRequest(const ListResourcesRequest &other)
    : CloudControlRequest(new ListResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourcesRequest object.
 */
ListResourcesRequest::ListResourcesRequest()
    : CloudControlRequest(new ListResourcesRequestPrivate(CloudControlRequest::ListResourcesAction, this))
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
 * \class QtAws::CloudControl::ListResourcesRequestPrivate
 * \brief The ListResourcesRequestPrivate class provides private implementation for ListResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a ListResourcesRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const CloudControlRequest::Action action, ListResourcesRequest * const q)
    : CloudControlRequestPrivate(action, q)
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
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
