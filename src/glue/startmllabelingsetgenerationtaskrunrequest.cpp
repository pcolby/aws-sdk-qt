// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmllabelingsetgenerationtaskrunrequest.h"
#include "startmllabelingsetgenerationtaskrunrequest_p.h"
#include "startmllabelingsetgenerationtaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartMLLabelingSetGenerationTaskRunRequest
 * \brief The StartMLLabelingSetGenerationTaskRunRequest class provides an interface for Glue StartMLLabelingSetGenerationTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startMLLabelingSetGenerationTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartMLLabelingSetGenerationTaskRunRequest::StartMLLabelingSetGenerationTaskRunRequest(const StartMLLabelingSetGenerationTaskRunRequest &other)
    : GlueRequest(new StartMLLabelingSetGenerationTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMLLabelingSetGenerationTaskRunRequest object.
 */
StartMLLabelingSetGenerationTaskRunRequest::StartMLLabelingSetGenerationTaskRunRequest()
    : GlueRequest(new StartMLLabelingSetGenerationTaskRunRequestPrivate(GlueRequest::StartMLLabelingSetGenerationTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartMLLabelingSetGenerationTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMLLabelingSetGenerationTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMLLabelingSetGenerationTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new StartMLLabelingSetGenerationTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartMLLabelingSetGenerationTaskRunRequestPrivate
 * \brief The StartMLLabelingSetGenerationTaskRunRequestPrivate class provides private implementation for StartMLLabelingSetGenerationTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartMLLabelingSetGenerationTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartMLLabelingSetGenerationTaskRunRequestPrivate::StartMLLabelingSetGenerationTaskRunRequestPrivate(
    const GlueRequest::Action action, StartMLLabelingSetGenerationTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMLLabelingSetGenerationTaskRunRequest
 * class' copy constructor.
 */
StartMLLabelingSetGenerationTaskRunRequestPrivate::StartMLLabelingSetGenerationTaskRunRequestPrivate(
    const StartMLLabelingSetGenerationTaskRunRequestPrivate &other, StartMLLabelingSetGenerationTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
