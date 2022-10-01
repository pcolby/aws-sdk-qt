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

#include "createprofilejobrequest.h"
#include "createprofilejobrequest_p.h"
#include "createprofilejobresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateProfileJobRequest
 * \brief The CreateProfileJobRequest class provides an interface for DataBrew CreateProfileJob requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createProfileJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProfileJobRequest::CreateProfileJobRequest(const CreateProfileJobRequest &other)
    : DataBrewRequest(new CreateProfileJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProfileJobRequest object.
 */
CreateProfileJobRequest::CreateProfileJobRequest()
    : DataBrewRequest(new CreateProfileJobRequestPrivate(DataBrewRequest::CreateProfileJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProfileJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProfileJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProfileJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateProfileJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateProfileJobRequestPrivate
 * \brief The CreateProfileJobRequestPrivate class provides private implementation for CreateProfileJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateProfileJobRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateProfileJobRequestPrivate::CreateProfileJobRequestPrivate(
    const DataBrewRequest::Action action, CreateProfileJobRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProfileJobRequest
 * class' copy constructor.
 */
CreateProfileJobRequestPrivate::CreateProfileJobRequestPrivate(
    const CreateProfileJobRequestPrivate &other, CreateProfileJobRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
