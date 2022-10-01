// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startprojectsessionrequest.h"
#include "startprojectsessionrequest_p.h"
#include "startprojectsessionresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StartProjectSessionRequest
 * \brief The StartProjectSessionRequest class provides an interface for DataBrew StartProjectSession requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::startProjectSession
 */

/*!
 * Constructs a copy of \a other.
 */
StartProjectSessionRequest::StartProjectSessionRequest(const StartProjectSessionRequest &other)
    : DataBrewRequest(new StartProjectSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartProjectSessionRequest object.
 */
StartProjectSessionRequest::StartProjectSessionRequest()
    : DataBrewRequest(new StartProjectSessionRequestPrivate(DataBrewRequest::StartProjectSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StartProjectSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartProjectSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartProjectSessionRequest::response(QNetworkReply * const reply) const
{
    return new StartProjectSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::StartProjectSessionRequestPrivate
 * \brief The StartProjectSessionRequestPrivate class provides private implementation for StartProjectSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StartProjectSessionRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
StartProjectSessionRequestPrivate::StartProjectSessionRequestPrivate(
    const DataBrewRequest::Action action, StartProjectSessionRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartProjectSessionRequest
 * class' copy constructor.
 */
StartProjectSessionRequestPrivate::StartProjectSessionRequestPrivate(
    const StartProjectSessionRequestPrivate &other, StartProjectSessionRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
