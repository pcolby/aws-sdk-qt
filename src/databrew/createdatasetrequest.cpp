// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateDatasetRequest
 * \brief The CreateDatasetRequest class provides an interface for DataBrew CreateDataset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createDataset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetRequest::CreateDatasetRequest(const CreateDatasetRequest &other)
    : DataBrewRequest(new CreateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetRequest object.
 */
CreateDatasetRequest::CreateDatasetRequest()
    : DataBrewRequest(new CreateDatasetRequestPrivate(DataBrewRequest::CreateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateDatasetRequestPrivate
 * \brief The CreateDatasetRequestPrivate class provides private implementation for CreateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateDatasetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const DataBrewRequest::Action action, CreateDatasetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetRequest
 * class' copy constructor.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const CreateDatasetRequestPrivate &other, CreateDatasetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
