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
