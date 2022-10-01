// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
