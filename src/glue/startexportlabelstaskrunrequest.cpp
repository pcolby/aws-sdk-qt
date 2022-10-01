// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
