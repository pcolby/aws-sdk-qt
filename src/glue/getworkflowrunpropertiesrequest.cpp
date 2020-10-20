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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
