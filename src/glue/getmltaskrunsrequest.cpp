// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltaskrunsrequest.h"
#include "getmltaskrunsrequest_p.h"
#include "getmltaskrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunsRequest
 * \brief The GetMLTaskRunsRequest class provides an interface for Glue GetMLTaskRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTaskRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTaskRunsRequest::GetMLTaskRunsRequest(const GetMLTaskRunsRequest &other)
    : GlueRequest(new GetMLTaskRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTaskRunsRequest object.
 */
GetMLTaskRunsRequest::GetMLTaskRunsRequest()
    : GlueRequest(new GetMLTaskRunsRequestPrivate(GlueRequest::GetMLTaskRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTaskRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTaskRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTaskRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTaskRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTaskRunsRequestPrivate
 * \brief The GetMLTaskRunsRequestPrivate class provides private implementation for GetMLTaskRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTaskRunsRequestPrivate::GetMLTaskRunsRequestPrivate(
    const GlueRequest::Action action, GetMLTaskRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTaskRunsRequest
 * class' copy constructor.
 */
GetMLTaskRunsRequestPrivate::GetMLTaskRunsRequestPrivate(
    const GetMLTaskRunsRequestPrivate &other, GetMLTaskRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
