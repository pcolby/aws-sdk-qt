// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
