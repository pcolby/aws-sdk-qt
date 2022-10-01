// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowrunpropertiesrequest.h"
#include "getworkflowrunpropertiesrequest_p.h"
#include "getworkflowrunpropertiesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesRequest
 * \brief The GetWorkflowRunPropertiesRequest class provides an interface for Glue GetWorkflowRunProperties requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getWorkflowRunProperties
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkflowRunPropertiesRequest::GetWorkflowRunPropertiesRequest(const GetWorkflowRunPropertiesRequest &other)
    : GlueRequest(new GetWorkflowRunPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkflowRunPropertiesRequest object.
 */
GetWorkflowRunPropertiesRequest::GetWorkflowRunPropertiesRequest()
    : GlueRequest(new GetWorkflowRunPropertiesRequestPrivate(GlueRequest::GetWorkflowRunPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkflowRunPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkflowRunPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkflowRunPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkflowRunPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesRequestPrivate
 * \brief The GetWorkflowRunPropertiesRequestPrivate class provides private implementation for GetWorkflowRunPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunPropertiesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetWorkflowRunPropertiesRequestPrivate::GetWorkflowRunPropertiesRequestPrivate(
    const GlueRequest::Action action, GetWorkflowRunPropertiesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkflowRunPropertiesRequest
 * class' copy constructor.
 */
GetWorkflowRunPropertiesRequestPrivate::GetWorkflowRunPropertiesRequestPrivate(
    const GetWorkflowRunPropertiesRequestPrivate &other, GetWorkflowRunPropertiesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
