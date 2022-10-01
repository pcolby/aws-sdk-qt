// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListJobsRequest
 * \brief The ListJobsRequest class provides an interface for Amplify ListJobs requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : AmplifyRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : AmplifyRequest(new ListJobsRequestPrivate(AmplifyRequest::ListJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListJobsRequestPrivate
 * \brief The ListJobsRequestPrivate class provides private implementation for ListJobsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListJobsRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const AmplifyRequest::Action action, ListJobsRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
