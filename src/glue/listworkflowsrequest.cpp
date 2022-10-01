// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkflowsrequest.h"
#include "listworkflowsrequest_p.h"
#include "listworkflowsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListWorkflowsRequest
 * \brief The ListWorkflowsRequest class provides an interface for Glue ListWorkflows requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listWorkflows
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkflowsRequest::ListWorkflowsRequest(const ListWorkflowsRequest &other)
    : GlueRequest(new ListWorkflowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkflowsRequest object.
 */
ListWorkflowsRequest::ListWorkflowsRequest()
    : GlueRequest(new ListWorkflowsRequestPrivate(GlueRequest::ListWorkflowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkflowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkflowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkflowsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkflowsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListWorkflowsRequestPrivate
 * \brief The ListWorkflowsRequestPrivate class provides private implementation for ListWorkflowsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListWorkflowsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListWorkflowsRequestPrivate::ListWorkflowsRequestPrivate(
    const GlueRequest::Action action, ListWorkflowsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkflowsRequest
 * class' copy constructor.
 */
ListWorkflowsRequestPrivate::ListWorkflowsRequestPrivate(
    const ListWorkflowsRequestPrivate &other, ListWorkflowsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
