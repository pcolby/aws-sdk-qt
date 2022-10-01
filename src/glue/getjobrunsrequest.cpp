// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrunsrequest.h"
#include "getjobrunsrequest_p.h"
#include "getjobrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunsRequest
 * \brief The GetJobRunsRequest class provides an interface for Glue GetJobRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRunsRequest::GetJobRunsRequest(const GetJobRunsRequest &other)
    : GlueRequest(new GetJobRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRunsRequest object.
 */
GetJobRunsRequest::GetJobRunsRequest()
    : GlueRequest(new GetJobRunsRequestPrivate(GlueRequest::GetJobRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobRunsRequestPrivate
 * \brief The GetJobRunsRequestPrivate class provides private implementation for GetJobRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GlueRequest::Action action, GetJobRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRunsRequest
 * class' copy constructor.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GetJobRunsRequestPrivate &other, GetJobRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
