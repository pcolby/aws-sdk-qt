/*
    Copyright 2013-2021 Paul Colby

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

#include "putworkflowrunpropertiesrequest.h"
#include "putworkflowrunpropertiesrequest_p.h"
#include "putworkflowrunpropertiesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesRequest
 * \brief The PutWorkflowRunPropertiesRequest class provides an interface for Glue PutWorkflowRunProperties requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::putWorkflowRunProperties
 */

/*!
 * Constructs a copy of \a other.
 */
PutWorkflowRunPropertiesRequest::PutWorkflowRunPropertiesRequest(const PutWorkflowRunPropertiesRequest &other)
    : GlueRequest(new PutWorkflowRunPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutWorkflowRunPropertiesRequest object.
 */
PutWorkflowRunPropertiesRequest::PutWorkflowRunPropertiesRequest()
    : GlueRequest(new PutWorkflowRunPropertiesRequestPrivate(GlueRequest::PutWorkflowRunPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool PutWorkflowRunPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutWorkflowRunPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutWorkflowRunPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new PutWorkflowRunPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesRequestPrivate
 * \brief The PutWorkflowRunPropertiesRequestPrivate class provides private implementation for PutWorkflowRunPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutWorkflowRunPropertiesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
PutWorkflowRunPropertiesRequestPrivate::PutWorkflowRunPropertiesRequestPrivate(
    const GlueRequest::Action action, PutWorkflowRunPropertiesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutWorkflowRunPropertiesRequest
 * class' copy constructor.
 */
PutWorkflowRunPropertiesRequestPrivate::PutWorkflowRunPropertiesRequestPrivate(
    const PutWorkflowRunPropertiesRequestPrivate &other, PutWorkflowRunPropertiesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
