// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
