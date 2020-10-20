/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
