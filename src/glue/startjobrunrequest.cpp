// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrunrequest.h"
#include "startjobrunrequest_p.h"
#include "startjobrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartJobRunRequest
 * \brief The StartJobRunRequest class provides an interface for Glue StartJobRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartJobRunRequest::StartJobRunRequest(const StartJobRunRequest &other)
    : GlueRequest(new StartJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartJobRunRequest object.
 */
StartJobRunRequest::StartJobRunRequest()
    : GlueRequest(new StartJobRunRequestPrivate(GlueRequest::StartJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartJobRunRequest::response(QNetworkReply * const reply) const
{
    return new StartJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartJobRunRequestPrivate
 * \brief The StartJobRunRequestPrivate class provides private implementation for StartJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartJobRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const GlueRequest::Action action, StartJobRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartJobRunRequest
 * class' copy constructor.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const StartJobRunRequestPrivate &other, StartJobRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
