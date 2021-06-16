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

#include "startimportlabelstaskrunrequest.h"
#include "startimportlabelstaskrunrequest_p.h"
#include "startimportlabelstaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunRequest
 * \brief The StartImportLabelsTaskRunRequest class provides an interface for Glue StartImportLabelsTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startImportLabelsTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartImportLabelsTaskRunRequest::StartImportLabelsTaskRunRequest(const StartImportLabelsTaskRunRequest &other)
    : GlueRequest(new StartImportLabelsTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImportLabelsTaskRunRequest object.
 */
StartImportLabelsTaskRunRequest::StartImportLabelsTaskRunRequest()
    : GlueRequest(new StartImportLabelsTaskRunRequestPrivate(GlueRequest::StartImportLabelsTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartImportLabelsTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImportLabelsTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImportLabelsTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new StartImportLabelsTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunRequestPrivate
 * \brief The StartImportLabelsTaskRunRequestPrivate class provides private implementation for StartImportLabelsTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartImportLabelsTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartImportLabelsTaskRunRequestPrivate::StartImportLabelsTaskRunRequestPrivate(
    const GlueRequest::Action action, StartImportLabelsTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImportLabelsTaskRunRequest
 * class' copy constructor.
 */
StartImportLabelsTaskRunRequestPrivate::StartImportLabelsTaskRunRequestPrivate(
    const StartImportLabelsTaskRunRequestPrivate &other, StartImportLabelsTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
