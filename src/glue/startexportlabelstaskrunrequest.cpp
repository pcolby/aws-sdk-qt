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

#include "startexportlabelstaskrunrequest.h"
#include "startexportlabelstaskrunrequest_p.h"
#include "startexportlabelstaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartExportLabelsTaskRunRequest
 * \brief The StartExportLabelsTaskRunRequest class provides an interface for Glue StartExportLabelsTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startExportLabelsTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartExportLabelsTaskRunRequest::StartExportLabelsTaskRunRequest(const StartExportLabelsTaskRunRequest &other)
    : GlueRequest(new StartExportLabelsTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartExportLabelsTaskRunRequest object.
 */
StartExportLabelsTaskRunRequest::StartExportLabelsTaskRunRequest()
    : GlueRequest(new StartExportLabelsTaskRunRequestPrivate(GlueRequest::StartExportLabelsTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartExportLabelsTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartExportLabelsTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartExportLabelsTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new StartExportLabelsTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartExportLabelsTaskRunRequestPrivate
 * \brief The StartExportLabelsTaskRunRequestPrivate class provides private implementation for StartExportLabelsTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartExportLabelsTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartExportLabelsTaskRunRequestPrivate::StartExportLabelsTaskRunRequestPrivate(
    const GlueRequest::Action action, StartExportLabelsTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartExportLabelsTaskRunRequest
 * class' copy constructor.
 */
StartExportLabelsTaskRunRequestPrivate::StartExportLabelsTaskRunRequestPrivate(
    const StartExportLabelsTaskRunRequestPrivate &other, StartExportLabelsTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
