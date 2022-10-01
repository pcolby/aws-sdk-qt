// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackendjobsrequest.h"
#include "listbackendjobsrequest_p.h"
#include "listbackendjobsresponse.h"
#include "amplifybackendrequest_p.h"

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsRequest
 * \brief The ListBackendJobsRequest class provides an interface for AmplifyBackend ListBackendJobs requests.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::listBackendJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackendJobsRequest::ListBackendJobsRequest(const ListBackendJobsRequest &other)
    : AmplifyBackendRequest(new ListBackendJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackendJobsRequest object.
 */
ListBackendJobsRequest::ListBackendJobsRequest()
    : AmplifyBackendRequest(new ListBackendJobsRequestPrivate(AmplifyBackendRequest::ListBackendJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackendJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackendJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackendJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackendJobsResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyBackend::ListBackendJobsRequestPrivate
 * \brief The ListBackendJobsRequestPrivate class provides private implementation for ListBackendJobsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ListBackendJobsRequestPrivate object for AmplifyBackend \a action,
 * with public implementation \a q.
 */
ListBackendJobsRequestPrivate::ListBackendJobsRequestPrivate(
    const AmplifyBackendRequest::Action action, ListBackendJobsRequest * const q)
    : AmplifyBackendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackendJobsRequest
 * class' copy constructor.
 */
ListBackendJobsRequestPrivate::ListBackendJobsRequestPrivate(
    const ListBackendJobsRequestPrivate &other, ListBackendJobsRequest * const q)
    : AmplifyBackendRequestPrivate(other, q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
