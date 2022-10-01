// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobrunrequest.h"
#include "startjobrunrequest_p.h"
#include "startjobrunresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StartJobRunRequest
 * \brief The StartJobRunRequest class provides an interface for DataBrew StartJobRun requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::startJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartJobRunRequest::StartJobRunRequest(const StartJobRunRequest &other)
    : DataBrewRequest(new StartJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartJobRunRequest object.
 */
StartJobRunRequest::StartJobRunRequest()
    : DataBrewRequest(new StartJobRunRequestPrivate(DataBrewRequest::StartJobRunAction, this))
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
 * \class QtAws::DataBrew::StartJobRunRequestPrivate
 * \brief The StartJobRunRequestPrivate class provides private implementation for StartJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StartJobRunRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const DataBrewRequest::Action action, StartJobRunRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
