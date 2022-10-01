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
